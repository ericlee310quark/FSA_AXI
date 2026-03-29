`define CYCLE_TIME 15.0

module PATTERN(
        output         clock,	
        output         reset,	
        input        io_inst_ready,	
        output         io_inst_valid,	
        output  [4:0]  io_inst_bits_acc_addr,	
        output  [4:0]  io_inst_bits_acc_stride,	
        output         io_inst_bits_acc_zero,	
        output  [6:0]  io_inst_bits_spad_addr,	
        output  [4:0]  io_inst_bits_spad_stride,	
        output         io_inst_bits_spad_revInput,	
        output         io_inst_bits_spad_revOutput,	
        output         io_inst_bits_spad_delayOutput,	
        output  [4:0]  io_inst_bits_header_semId,	
        output         io_inst_bits_header_releaseValid,	
        output  [2:0]  io_inst_bits_header_releaseSemValue,	
        output  [4:0]  io_inst_bits_header_func,	
        output         io_inst_bits_header_waitPrevAcc,	
        input        io_sem_release_valid,	
        input [4:0]  io_sem_release_bits_id,	
        input [2:0]  io_sem_release_bits_value,	
        output         io_spad_write_0_valid,	
        output  [6:0]  io_spad_write_0_addr,	
        output  [1:0]  io_spad_write_0_subBankIdx,	
        output  [15:0] io_spad_write_0_data_0,	
        output  [15:0] io_spad_write_0_data_1,	
        output  [15:0] io_spad_write_0_data_2,	
        output  [15:0] io_spad_write_0_data_3,	
        output         io_spad_write_1_valid,	
        output  [6:0]  io_spad_write_1_addr,	
        input        io_spad_write_1_ready,	
        output  [1:0]  io_spad_write_1_subBankIdx,	
        output  [15:0] io_spad_write_1_data_0,	
        output  [15:0] io_spad_write_1_data_1,	
        output  [15:0] io_spad_write_1_data_2,	
        output  [15:0] io_spad_write_1_data_3,	
        output         io_spad_write_2_valid,	
        output  [6:0]  io_spad_write_2_addr,	
        input        io_spad_write_2_ready,	
        output  [1:0]  io_spad_write_2_subBankIdx,	
        output  [15:0] io_spad_write_2_data_0,	
        output  [15:0] io_spad_write_2_data_1,	
        output  [15:0] io_spad_write_2_data_2,	
        output  [15:0] io_spad_write_2_data_3,	
        output         io_spad_write_3_valid,	
        output  [6:0]  io_spad_write_3_addr,	
        input        io_spad_write_3_ready,	
        output  [1:0]  io_spad_write_3_subBankIdx,	
        output  [15:0] io_spad_write_3_data_0,	
        output  [15:0] io_spad_write_3_data_1,	
        output  [15:0] io_spad_write_3_data_2,	
        output  [15:0] io_spad_write_3_data_3,	
        output         io_spad_write_4_valid,	
        output  [6:0]  io_spad_write_4_addr,	
        input        io_spad_write_4_ready,	
        output  [1:0]  io_spad_write_4_subBankIdx,	
        output  [15:0] io_spad_write_4_data_0,	
        output  [15:0] io_spad_write_4_data_1,	
        output  [15:0] io_spad_write_4_data_2,	
        output  [15:0] io_spad_write_4_data_3,	
        output         io_spad_write_5_valid,	
        output  [6:0]  io_spad_write_5_addr,	
        input        io_spad_write_5_ready,	
        output  [1:0]  io_spad_write_5_subBankIdx,	
        output  [15:0] io_spad_write_5_data_0,	
        output  [15:0] io_spad_write_5_data_1,	
        output  [15:0] io_spad_write_5_data_2,	
        output  [15:0] io_spad_write_5_data_3,	
        output         io_spad_write_6_valid,	
        output  [6:0]  io_spad_write_6_addr,	
        input        io_spad_write_6_ready,	
        output  [1:0]  io_spad_write_6_subBankIdx,	
        output  [15:0] io_spad_write_6_data_0,	
        output  [15:0] io_spad_write_6_data_1,	
        output  [15:0] io_spad_write_6_data_2,	
        output  [15:0] io_spad_write_6_data_3,	
        output         io_spad_write_7_valid,	
        output  [6:0]  io_spad_write_7_addr,	
        input        io_spad_write_7_ready,	
        output  [1:0]  io_spad_write_7_subBankIdx,	
        output  [15:0] io_spad_write_7_data_0,	
        output  [15:0] io_spad_write_7_data_1,	
        output  [15:0] io_spad_write_7_data_2,	
        output  [15:0] io_spad_write_7_data_3,	
        output         io_acc_read_0_valid,	
        output  [4:0]  io_acc_read_0_addr,	
        input        io_acc_read_0_ready,	
        output  [2:0]  io_acc_read_0_subBankIdx,	
        input [31:0] io_acc_read_0_data_0,	
        input [31:0] io_acc_read_0_data_1,	
        output         io_acc_read_1_valid,	
        output  [4:0]  io_acc_read_1_addr,	
        input        io_acc_read_1_ready,	
        output  [2:0]  io_acc_read_1_subBankIdx,	
        input [31:0] io_acc_read_1_data_0,	
        input [31:0] io_acc_read_1_data_1,	
        output         io_acc_read_2_valid,	
        output  [4:0]  io_acc_read_2_addr,	
        input        io_acc_read_2_ready,	
        output  [2:0]  io_acc_read_2_subBankIdx,	
        input [31:0] io_acc_read_2_data_0,	
        input [31:0] io_acc_read_2_data_1,	
        output         io_acc_read_3_valid,	
        output  [4:0]  io_acc_read_3_addr,	
        input        io_acc_read_3_ready,	
        output  [2:0]  io_acc_read_3_subBankIdx,	
        input [31:0] io_acc_read_3_data_0,	
        input [31:0] io_acc_read_3_data_1,	
        output         io_acc_read_4_valid,	
        output  [4:0]  io_acc_read_4_addr,	
        input        io_acc_read_4_ready,	
        output  [2:0]  io_acc_read_4_subBankIdx,	
        input [31:0] io_acc_read_4_data_0,	
        input [31:0] io_acc_read_4_data_1,	
        output         io_acc_read_5_valid,	
        output  [4:0]  io_acc_read_5_addr,	
        input        io_acc_read_5_ready,	
        output  [2:0]  io_acc_read_5_subBankIdx,	
        input [31:0] io_acc_read_5_data_0,	
        input [31:0] io_acc_read_5_data_1,	
        output         io_acc_read_6_valid,	
        output  [4:0]  io_acc_read_6_addr,	
        input        io_acc_read_6_ready,	
        output  [2:0]  io_acc_read_6_subBankIdx,	
        input [31:0] io_acc_read_6_data_0,	
        input [31:0] io_acc_read_6_data_1,	
        output         io_acc_read_7_valid,	
        output  [4:0]  io_acc_read_7_addr,	
        input        io_acc_read_7_ready,	
        output  [2:0]  io_acc_read_7_subBankIdx,	
        input [31:0] io_acc_read_7_data_0,	
        input [31:0] io_acc_read_7_data_1,	
        input        io_busy	
);





//================================================================
// Clock
//================================================================
real CYCLE = `CYCLE_TIME;
initial 
begin
	clock = 0;
end
always #(CYCLE/2.0) clock = ~clock;
//================================================================
// Parameters & Integer
//================================================================

parameters MATRIX_MEM_ADDR_SPACE = 8;
parameters SPAD_CHANNEL_NUM = 8;
parameters SPAD_CHANNEL_SPACE = 3;
parameters Q_Width = 16, Q_Height = 16;
parameters K_Width = 16, K_Height = 16;
parameters V_Width = 16, V_Height = 16;

parameters Q_bandwith = 16;
parameters K_bandwith = 16;
parameters V_bandwith = 16;



//-------------------------------------
// FILE NAMES DEFINE
//-------------------------------------
`define Q_HEX_FILENAME "./golden_ans/Q.hex"
`define K_HEX_FILENAME "./golden_ans/K.hex"
`define V_HEX_FILENAME "./golden_ans/V.hex"


//-------------------------------------
// Golden Truth Use
//-------------------------------------
reg  [Q_bandwith-1:0] Q_matrix_gt [Q_Height*Q_Weight-1:0];
reg  [K_bandwith-1:0] K_matrix_gt [K_Height*K_Weight-1:0];
reg  [V_bandwith-1:0] V_matrix_gt [V_Height*V_Weight-1:0];


//! There is no  `io_spand_write_0_ready` signal.
//================================================================
// WIRES & REGS
//================================================================
reg          io_spad_write_valid_reg [7:0];
reg  [6:0]   io_spad_write_addr_reg [7:0];
reg  [1:0]  io_spad_write_subBankIdx_reg [7:0];
reg  [15:0] io_spad_write_data_0_reg [7:0];
reg  [15:0] io_spad_write_data_1_reg [7:0];
reg  [15:0] io_spad_write_data_2_reg [7:0];
reg  [15:0] io_spad_write_data_3_reg [7:0];

reg        io_acc_read_valid_reg        [7:0];
reg  [4:0] io_acc_read_addr_reg         [7:0];
reg  [2:0] io_acc_read_subBankIdx_reg   [7:0];


wire io_acc_read_ready_wires[SPAD_CHANNEL_NUM-1:0];





assign io_acc_read_ready_wires = {1'd0, io_acc_read_7_ready, io_acc_read_6_ready, io_acc_read_5_ready, io_acc_read_4_ready, io_acc_read_3_ready, io_acc_read_2_ready, io_acc_read_1_ready, io_acc_read_0_ready};


//================================================================
//    initial
//================================================================
initial begin
	
    load_hex_QKV;
    load_Q2SPAD_16x16;
    //rst_n = 1'b1;
	//in_valid = 1'b0;
	//cg_en = 1'b0;
//
	//img = 'dx;
	//ker = 'dx;
	//weight = 'dx;
    //total_latency = 0;
	//force clk = 0;
	//reset_signal_task;
	//
	//for (patcount = 0; patcount < PATNUM; patcount = patcount + 1) begin
	//	gen_rnd_data;
	//	gen_golden_out;
	//	input_task;
	//	wait_out_valid;
	//	check_ans;
	//end
	//YOU_PASS_task;
end


//================================================================
// task
//================================================================

task tick; begin @(posedge clock); #1; end endtask
task reset;
    begin
        #CYCLE;  reset=1;
        release clk;
        #CYCLE;  reset=0;
    end
endtask


task idle_inst;
    begin
        io_inst_valid = 'd0;
        io_inst_bits_acc_addr = 'd0;	
        io_inst_bits_acc_stride = 'd0;	
        io_inst_bits_acc_zero = 'd0;	
        io_inst_bits_spad_addr = 'd0;	
        io_inst_bits_spad_stride = 'd0;	
        io_inst_bits_spad_revInput = 'd0;	
        io_inst_bits_spad_revOutput = 'd0;	
        io_inst_bits_spad_delayOutput = 'd0;	
        io_inst_bits_header_semId = 'd0;	
        io_inst_bits_header_releaseValid = 'd0;	
        io_inst_bits_header_releaseSemValue = 'd0;	
        io_inst_bits_header_func = 'd0;	
        io_inst_bits_header_waitPrevAcc = 'd0;	
    end
endtask

task idle_spad;
    begin
        io_spad_write_0_valid = 'd0;	
        io_spad_write_0_addr = 'd0;	
        io_spad_write_0_subBankIdx = 'd0;	
        io_spad_write_0_data_0 = 'd0;	
        io_spad_write_0_data_1 = 'd0;	
        io_spad_write_0_data_2 = 'd0;	
        io_spad_write_0_data_3 = 'd0;	
        io_spad_write_1_valid = 'd0;	
        io_spad_write_1_addr = 'd0;	
        io_spad_write_1_subBankIdx = 'd0;	
        io_spad_write_1_data_0 = 'd0;	
        io_spad_write_1_data_1 = 'd0;	
        io_spad_write_1_data_2 = 'd0;	
        io_spad_write_1_data_3 = 'd0;	
        io_spad_write_2_valid = 'd0;	
        io_spad_write_2_addr = 'd0;	
        io_spad_write_2_subBankIdx = 'd0;	
        io_spad_write_2_data_0 = 'd0;	
        io_spad_write_2_data_1 = 'd0;	
        io_spad_write_2_data_2 = 'd0;	
        io_spad_write_2_data_3 = 'd0;	
        io_spad_write_3_valid = 'd0;	
        io_spad_write_3_addr = 'd0;	
        io_spad_write_3_subBankIdx = 'd0;	
        io_spad_write_3_data_0 = 'd0;	
        io_spad_write_3_data_1 = 'd0;	
        io_spad_write_3_data_2 = 'd0;	
        io_spad_write_3_data_3 = 'd0;	
        io_spad_write_4_valid = 'd0;	
        io_spad_write_4_addr = 'd0;	
        io_spad_write_4_subBankIdx = 'd0;	
        io_spad_write_4_data_0 = 'd0;	
        io_spad_write_4_data_1 = 'd0;	
        io_spad_write_4_data_2 = 'd0;	
        io_spad_write_4_data_3 = 'd0;	
        io_spad_write_5_valid = 'd0;	
        io_spad_write_5_addr = 'd0;
        io_spad_write_5_subBankIdx = 'd0;	
        io_spad_write_5_data_0 = 'd0;	
        io_spad_write_5_data_1 = 'd0;	
        io_spad_write_5_data_2 = 'd0;	
        io_spad_write_5_data_3 = 'd0;	
        io_spad_write_6_valid = 'd0;	
        io_spad_write_6_addr = 'd0;	
        io_spad_write_6_subBankIdx = 'd0;	
        io_spad_write_6_data_0 = 'd0;	
        io_spad_write_6_data_1 = 'd0;	
        io_spad_write_6_data_2 = 'd0;	
        io_spad_write_6_data_3 = 'd0;	
        io_spad_write_7_valid = 'd0;	
        io_spad_write_7_addr = 'd0;	
        io_spad_write_7_subBankIdx = 'd0;	
        io_spad_write_7_data_0 = 'd0;	
        io_spad_write_7_data_1 = 'd0;	
        io_spad_write_7_data_2 = 'd0;	
        io_spad_write_7_data_3 = 'd0;	
    end
endtask

task idle_acc;
    begin
        io_acc_read_0_valid = 'd0;	
        io_acc_read_0_addr = 'd0;	
        io_acc_read_0_subBankIdx = 'd0;	
        io_acc_read_1_valid = 'd0;	
        io_acc_read_1_addr = 'd0;	
        io_acc_read_1_subBankIdx = 'd0;	
        io_acc_read_2_valid = 'd0;	
        io_acc_read_2_addr = 'd0;	
        io_acc_read_2_subBankIdx = 'd0;	
        io_acc_read_3_valid = 'd0;	
        io_acc_read_3_addr = 'd0;	
        io_acc_read_3_subBankIdx = 'd0;	
        io_acc_read_4_valid = 'd0;	
        io_acc_read_4_addr = 'd0;	
        io_acc_read_4_subBankIdx = 'd0;		
        io_acc_read_5_valid = 'd0;	
        io_acc_read_5_addr = 'd0;	
        io_acc_read_5_subBankIdx = 'd0;	
        io_acc_read_6_valid = 'd0;	
        io_acc_read_6_addr = 'd0;	
        io_acc_read_6_subBankIdx = 'd0;	
        io_acc_read_7_valid = 'd0;	
        io_acc_read_7_addr = 'd0;	
        io_acc_read_7_subBankIdx = 'd0;	
    end
endtask

task idle_all;
    begin
        idle_inst;
        idle_spad;
        idle_acc;
    end
endtask

task load_hex_QKV;
    begin
        $readmemh(Q_HEX_FILENAME, Q_matrix_gt);
        $display("Load Q_gth");
        $readmemh(K_HEX_FILENAME, K_matrix_gt);
        $display("Load K_gth");
        $readmemh(V_HEX_FILENAME, V_matrix_gt);
        $display("Load V_gth");
    end
endtask

//MAX LENGTH 16x16
task spad_write_wrap;
input [31:0] port_idx;
input [6:0] addr;
input [1:0] sub_bank_id;
input integer length;
begin
    integer addr_idx = 0;
    integer spad_write_latency = 0;
    reg [8:0] temp_total_addr;
    temp_total_addr = {addr, sub_bank_id};
    if (port_idx != 'd0)begin
        for(integer curr_idx=0; curr_idx < (length); curr_idx = curr_idx + 'd1)begin
            temp_total_addr = temp_total_addr + curr_idx<<2;
            spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[6:2]),
                        .in_valid('d1),
                        .d0(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]]),
                        .d1(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+1]),
                        .d2(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+2]),
                        .d3(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+3])
                        );

        end
            spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[6:2]),
                        .in_valid('d0),
                        .d0(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]]),
                        .d1(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+1]),
                        .d2(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+2]),
                        .d3(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+3])
                        );
    end
    else begin
        for(integer curr_idx=0; curr_idx < (length); curr_idx = curr_idx + 'd1)begin
            temp_total_addr = temp_total_addr + curr_idx<<2;
            spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[6:2]),
                        .in_valid('d1),
                        .d0(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]]),
                        .d1(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+1]),
                        .d2(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+2]),
                        .d3(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+3])
                        );
            while (~io_acc_read_ready_wires[port_idx[SPAD_CHANNEL_SPACE-1:0]]) begin
                @(posedge clock);
                spad_write_latency = spad_write_latency +'d1

                if (spad_write_latency > 'd100)begin
                    $display("SPAD WRITE wait for ready too long: Port %0d | spad_write_latency %d ",port_idx, spad_write_latency);
                    $finish;
                end
            end

        end
            spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[6:2]),
                        .in_valid('d0),
                        .d0(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]]),
                        .d1(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+1]),
                        .d2(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+2]),
                        .d3(Q_matrix_gt[temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]+3])
                        );



        
    end
end
endtask




task load_Q2SPAD_16x16;
    begin

        fork 
            begin
                spad_write_wrap(.port_idx('d0),     .addr('d0),
                                .sub_bank_id('d0),  .length('d8));
                $display("LOAD Q: Finish port 0 transfer");
            end
            begin
                spad_write_wrap(.port_idx('d1),     .addr('d2),
                                .sub_bank_id('d0),  .length('d8));
                $display("LOAD Q: Finish port 1 transfer");
            end
            begin
                spad_write_wrap(.port_idx('d2),     .addr('d4),
                                .sub_bank_id('d0),  .length('d8));
                $display("LOAD Q: Finish port 2 transfer");
            end
            begin
                spad_write_wrap(.port_idx('d3),     .addr('d6),
                                .sub_bank_id('d0),  .length('d8));
                $display("LOAD Q: Finish port 3 transfer");
            end
            begin
                spad_write_wrap(.port_idx('d4),     .addr('d8),
                                .sub_bank_id('d0),  .length('d8));
                $display("LOAD Q: Finish port 4 transfer");
            end
            begin
                spad_write_wrap(.port_idx('d5),     .addr('d10),
                                .sub_bank_id('d0),  .length('d8));
                $display("LOAD Q: Finish port 5 transfer");
            end
            begin
                spad_write_wrap(.port_idx('d6),     .addr('d11),
                                .sub_bank_id('d0),  .length('d8));
                $display("LOAD Q: Finish port 6 transfer");
            end
            begin
                spad_write_wrap(.port_idx('d7),     .addr('d12),
                                .sub_bank_id('d0),  .length('d8));
                $display("LOAD Q: Finish port 7 transfer");
            end
        join

    end
endtask






// Write one row to ScratchPad (single cycle, port 0, subBankIdx=0)
task spad_write;
input [31:0] port_idx;
input  in_valid;
input [1:0]  input_SubBankID;
input [6:0]  addr;
input [15:0] d0, d1, d2, d3;
begin

    io_spad_write_valid_reg[port_idx]           = in_valid;
    io_spad_write_addr[port_idx]                = addr;
    io_spad_write_subBankIdx_reg[port_idx]      = input_SubBankID;
    io_spad_write_data_0_reg[port_idx]          = d0;
    io_spad_write_data_1_reg[port_idx]          = d1;
    io_spad_write_data_2_reg[port_idx]          = d2;
    io_spad_write_data_3_reg[port_idx]          = d3;
    @(posedge clock);
end
endtask



reg [7:0] [1:0] spad_sub_bank_id_cnt;


task load_Q_row0
    input [1:0]  input_SubBankID;
    input [4:0]  addr;
    input [15:0] d0, d1, d2, d3;

    begin
        spad_write('d0, input_SubBankID, )

    end
endtask









task load_Q;
    begin
       
        for (integer spad_sub_bank_id_cnt_idx = 'd0; spad_sub_bank_id_cnt_idx < 'd8; spad_sub_bank_id_cnt_idx = spad_sub_bank_id_cnt_idx + 'd1)
            spad_sub_bank_id_cnt[spad_sub_bank_id_cnt_idx] = 'd0;

        fork
            




        join

        





    end
endtask












assign io_acc_read_0_valid =        io_acc_read_valid_reg[0];
assign io_acc_read_0_addr =         io_acc_read_addr_reg[0];
assign io_acc_read_0_subBankIdx =   io_acc_read_subBankIdx_reg[0];
assign io_acc_read_1_valid =        io_acc_read_valid_reg[1];
assign io_acc_read_1_addr =         io_acc_read_addr_reg[1];
assign io_acc_read_1_subBankIdx =   io_acc_read_subBankIdx_reg[1];
assign io_acc_read_2_valid =        io_acc_read_valid_reg[2];
assign io_acc_read_2_addr =         io_acc_read_addr_reg[2];
assign io_acc_read_2_subBankIdx =   io_acc_read_subBankIdx_reg[2];
assign io_acc_read_3_valid =        io_acc_read_valid_reg[3];
assign io_acc_read_3_addr =         io_acc_read_addr_reg[3];
assign io_acc_read_3_subBankIdx =   io_acc_read_subBankIdx_reg[3];
assign io_acc_read_4_valid =        io_acc_read_valid_reg[4];
assign io_acc_read_4_addr =         io_acc_read_addr_reg[4];
assign io_acc_read_4_subBankIdx =   io_acc_read_subBankIdx_reg[4];
assign io_acc_read_5_valid =        io_acc_read_valid_reg[5];
assign io_acc_read_5_addr =         io_acc_read_addr_reg[5];
assign io_acc_read_5_subBankIdx =   io_acc_read_subBankIdx_reg[5];
assign io_acc_read_6_valid =        io_acc_read_valid_reg[6];
assign io_acc_read_6_addr =         io_acc_read_addr_reg[6];
assign io_acc_read_6_subBankIdx =   io_acc_read_subBankIdx_reg[6];
assign io_acc_read_7_valid =        io_acc_read_valid_reg[7];
assign io_acc_read_7_addr =         io_acc_read_addr_reg[7];
assign io_acc_read_7_subBankIdx =   io_acc_read_subBankIdx_reg[7];



endmodule