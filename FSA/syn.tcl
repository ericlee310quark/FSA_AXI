#======================================================
#
# Synopsys Synthesis Scripts (Design Vision dctcl mode)
#
#======================================================

#======================================================
#  Set Libraries
#======================================================
set search_path { ../RTL \
				  ./ 		\
       			/usr/cad/synopsys/synthesis/2020.09/libraries/syn
                ./asap7_db
				}
# /RAID2/cad/synopsys/synthesis/2022.03/libraries/syn
#/RAID2/COURSE/2024_Fall/icst_dic/icst_dic138/NLDM 
#  ../08_TECH/LIB
				
set synthetic_library  {dw_foundation.sldb }
set link_library {* dw_foundation.sldb asap7sc7p5t_INVBUF_RVT_TT_08302018.db asap7sc7p5t_SIMPLE_RVT_TT_08302018.db asap7sc7p5t_SEQ_RVT_TT_08302018.db}  
set target_library {asap7sc7p5t_INVBUF_RVT_TT_08302018.db asap7sc7p5t_SIMPLE_RVT_TT_08302018.db asap7sc7p5t_SEQ_RVT_TT_08302018.db}
#  asap7sc7p5t_AO_RVT_TT_08302018.db asap7sc7p5t_OA_RVT_TT_08302018.db asap7sc7p5t_INVBUF_RVT_TT_08302018.db asap7sc7p5t_SEQ_RVT_TT_08302018.db asap7sc7p5t_SIMPLE_RVT_TT_08302018.db
#set target_library {asap7sc7p5t_INVBUF_RVT_TT_08302018.db asap7sc7p5t_SIMPLE_RVT_TT_08302018.db asap7sc7p5t_SEQ_RVT_TT_08302018.db }


#======================================================
#  Global Parameters
#======================================================
set DESIGN "FSA"
set clk_period 666
# the unit of the clock period  in here is ps
#set IN_DLY  [expr 0.5*$clk_period]
set OUT_DLY [expr 0.5*$clk_period]

#set hdlin_ff_always_sync_set_reset true

#======================================================
#  Read RTL Code
#======================================================
set rtl_path "../RTL"
set my_v_files {}
foreach f [glob $rtl_path/*.{v,sv}] {
    # 邏輯：如果不匹配 PATTERN.sv 且 不匹配 tb.sv，才加入列表
    if { ![string match "../RTL/PATTERN.sv" $f]  && ![string match "../RTL/tb.v" $f] && ![string match "../RTL/tb.sv" $f] } {
        lappend my_v_files $f
    }
}
echo $my_v_files
analyze -format sverilog $my_v_files

# 3. 實例化頂層設計
# 這裡不需要加副檔名，只要給 Module Name (FSA)
elaborate $DESIGN

# 4. 指定當前設計並 Link
current_design $DESIGN
link

#======================================================
#  Global Setting
#======================================================

#======================================================
#  Set Design Constraints
#======================================================
create_clock -name "clock" -period $clk_period clock
set_ideal_network -no_propagate clock
#set_input_delay  $IN_DLY -clock clock [all_inputs]
set_output_delay $OUT_DLY  -clock clock [all_outputs]
set_input_delay 0 -clock clock clock
#set_input_delay 0 -clock clock rst_n
set_input_delay 0 -clock clock reset
set_load 0.05 [all_outputs]
#set_max_fanout 10 [all_inputs]
#set_dont_use slow/JKFF*


#======================================================
#  Optimization
#======================================================
uniquify
check_design > Report/$DESIGN\.check
set_fix_multiple_port_nets -all -buffer_constants
set_fix_hold [all_clocks]
compile
#no_autoungroup -no_seq_output_inversion -no_boundary_optimization

#======================================================
#  Output Reports
#======================================================
report_timing            >  Report/$DESIGN\.timimg
report_area              >  Report/$DESIGN\.area
report_resource          >  Report/$DESIGN\.resource


#======================================================
#  Change Naming Rule
#======================================================
set bus_inference_style "%s\[%d\]"
set bus_naming_style "%s\[%d\]"
set hdlout_internal_busses true
change_names -hierarchy -rule verilog
define_name_rules name_rule -allowed "a-z A-Z 0-9 _" -max_length 255 -type cell
define_name_rules name_rule -allowed "a-z A-Z 0-9 _[]" -max_length 255 -type net
define_name_rules name_rule -map {{"\\*cell\\*" "cell"}}
change_names -hierarchy -rules name_rule

#======================================================
#  Output Results
#======================================================
set verilogout_higher_designs_first true

write -format verilog -output Netlist/$DESIGN\_SYN.v -hierarchy
write_sdf -version 3.0 -context verilog -load_delay cell Netlist/$DESIGN\_SYN.sdf -significant_digits 6
write_sdc Netlist/$DESIGN\_SYN.sdc

#======================================================
#  Finish and Quit
#======================================================
report_area
report_area -hierarchy
report_timing

exit
