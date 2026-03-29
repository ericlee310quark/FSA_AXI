`define CYCLE_TIME 15.0


`define LOG_INFO(msg) $display("[INFO]  %t | %m | %s", $time, msg)
`define LOG_ERROR(msg) $error("[ERROR] %t | %m | %s", $time, msg)


module PATTERN;



reg clock;
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

parameter MATRIX_MEM_ADDR_SPACE = 8;
parameter SPAD_CHANNEL_NUM = 8;
parameter SPAD_CHANNEL_SPACE = 3;
parameter Q_Width = 16, Q_Height = 16;
parameter K_Width = 16, K_Height = 16;
parameter V_Width = 16, V_Height = 16;

parameter Q_bandwith = 16;
parameter K_bandwith = 16;
parameter V_bandwith = 16;

parameter INPUT_M_Q = 0, INPUT_M_K = 1, INPUT_M_V = 2;


integer tot_cyc = 0;
//-------------------------------------
// FILE NAMES DEFINE
//-------------------------------------
`define Q_HEX_FILENAME "Q.hex"
`define K_HEX_FILENAME "K.hex"
`define V_HEX_FILENAME "V.hex"


//-------------------------------------
// Golden Truth Use
//-------------------------------------
reg  [Q_bandwith-1:0] Q_matrix_gt [Q_Height*Q_Width-1:0];
reg  [K_bandwith-1:0] K_matrix_gt [K_Height*K_Width-1:0];
reg  [V_bandwith-1:0] V_matrix_gt [V_Height*V_Width-1:0];


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





wire [SPAD_CHANNEL_NUM-1:0] io_acc_read_ready_wires;
//assign io_acc_read_ready_wires = {1'd0, io_acc_read_7_ready, io_acc_read_6_ready, io_acc_read_5_ready, io_acc_read_4_ready, io_acc_read_3_ready, io_acc_read_2_ready, io_acc_read_1_ready, io_acc_read_0_ready};
assign io_acc_read_ready_wires = 8'b1111_1111;

//================================================================
//    initial
//================================================================
initial begin
	
    load_hex_QKV;
    load_2_SPAD_16x16;

    $finish;
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
task tick;begin
    @(posedge clock);
    
end
endtask


always @(posedge clock) begin
    tot_cyc <= tot_cyc + 1;
end

task load_hex_QKV;
    begin
        $readmemh(`Q_HEX_FILENAME, Q_matrix_gt);
        $display("Load Q_gth");
        $readmemh(`K_HEX_FILENAME, K_matrix_gt);
        $display("Load K_gth");
        $readmemh(`V_HEX_FILENAME, V_matrix_gt);
        $display("Load V_gth");
    end
endtask

// Write one row to ScratchPad (single cycle, port 0, subBankIdx=0)
task automatic spad_write;
input [31:0] port_idx;
input  in_valid;
input [1:0]  input_SubBankID;
input [6:0]  addr;
input [15:0] d0, d1, d2, d3;
begin

    io_spad_write_valid_reg[port_idx]           = in_valid;
    io_spad_write_addr_reg[port_idx]                = addr;
    io_spad_write_subBankIdx_reg[port_idx]      = input_SubBankID;
    io_spad_write_data_0_reg[port_idx]          = d0;
    io_spad_write_data_1_reg[port_idx]          = d1;
    io_spad_write_data_2_reg[port_idx]          = d2;
    io_spad_write_data_3_reg[port_idx]          = d3;
    $display("---------------------------------------");
    $display("SPAD WRITE: Port %d",port_idx);
    $display("In_valid: %d",in_valid);
    $display("input_SubBankID: %d", input_SubBankID);
    $display("Addr: %d", addr);
    $display("d0: %h", d0);
    $display("d1: %h", d1);
    $display("d2: %h", d2);
    $display("d3: %h", d3);
    $display("Total cyc: %d", tot_cyc);
    $display("---------------------------------------");
    tick;
end
endtask



//MAX LENGTH 16x16
task automatic  spad_write_wrap;
input [31:0] port_idx;
input [6:0] addr;
input [1:0] sub_bank_id;
input integer length;
input integer matrix_choice;
begin
    integer addr_idx = 0;
    integer spad_write_latency = 0;
    reg [8:0] temp_total_addr;
    temp_total_addr = {addr, sub_bank_id};
    if (port_idx == 'd0)begin
        for(integer curr_idx=0; curr_idx < (length); curr_idx = curr_idx + 'd1)begin
            `LOG_INFO("SPAD_WRITE_WRAP");
            $display("Port %d temp_total_addr:  %d" ,port_idx,temp_total_addr);
            $display("Fetch %d %d %d %d", temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2, (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1, (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2, (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3);
            
            case(matrix_choice)
                INPUT_M_Q:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[6:2]),
                        .in_valid('d1),
                        .d0(Q_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(Q_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(Q_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(Q_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
                INPUT_M_K:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[6:2]),
                        .in_valid('d1),
                        .d0(K_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(K_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(K_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(K_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
                INPUT_M_V:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[6:2]),
                        .in_valid('d1),
                        .d0(V_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(V_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(V_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(V_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
            endcase





            temp_total_addr = temp_total_addr + 'd1;

        end
            $display("Port %d temp_total_addr:  %d" ,port_idx,temp_total_addr);
            $display("Fetch %d %d %d %d", (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2), (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1, (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2, (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3);
            spad_write( .port_idx(port_idx),
                        .input_SubBankID('d0),
                        .addr('d0),
                        .in_valid('d0),
                        .d0('d0),
                        .d1('d0),
                        .d2('d0),
                        .d3('d0)
                        );
    end
    else begin
        for(integer curr_idx=0; curr_idx < (length); curr_idx = curr_idx + 'd1)begin
            
            $display("Port %d temp_total_addr:  %d" ,port_idx,temp_total_addr);
            $display("Fetch %d %d %d %d", (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2), (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1, (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2, (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3);
            
            case(matrix_choice)
                INPUT_M_Q:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[6:2]),
                        .in_valid('d1),
                        .d0(Q_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(Q_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(Q_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(Q_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
                INPUT_M_K:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[6:2]),
                        .in_valid('d1),
                        .d0(K_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(K_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(K_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(K_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
                INPUT_M_V:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[6:2]),
                        .in_valid('d1),
                        .d0(V_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(V_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(V_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(V_matrix_gt[(temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
            endcase
            while (~io_acc_read_ready_wires[port_idx[SPAD_CHANNEL_SPACE-1:0]]) begin
                tick;
                spad_write_latency = spad_write_latency +'d1;

                if (spad_write_latency > 'd100)begin
                    $display("SPAD WRITE wait for ready too long: Port %0d | spad_write_latency %d ",port_idx, spad_write_latency);
                    $finish;
                end
            end
            temp_total_addr = temp_total_addr + 'd1;
            
        end
            $display("Port %d temp_total_addr:  %d", port_idx,temp_total_addr);
            $display("Fetch %d %d %d %d", (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2), (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1, (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2, (temp_total_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3);
            spad_write( .port_idx(port_idx),
                        .input_SubBankID('d0),
                        .addr('d0),
                        .in_valid('d0),
                        .d0('d0),
                        .d1('d0),
                        .d2('d0),
                        .d3('d0)
                        );



        
    end
end
endtask

task load_2_SPAD_16x16;
input integer matrix_choice;
    begin
        case(matrix_choice)
            INPUT_M_Q:begin
                fork 
                    begin
                        spad_write_wrap(.port_idx('d0),     .addr('d0),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_Q));
                        $display("LOAD Q: Finish port 0 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d1),     .addr('d2),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_Q));
                        $display("LOAD Q: Finish port 1 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d2),     .addr('d4),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_Q));
                        $display("LOAD Q: Finish port 2 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d3),     .addr('d6),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_Q));
                        $display("LOAD Q: Finish port 3 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d4),     .addr('d8),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_Q));
                        $display("LOAD Q: Finish port 4 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d5),     .addr('d10),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_Q));
                        $display("LOAD Q: Finish port 5 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d6),     .addr('d12),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_Q));
                        $display("LOAD Q: Finish port 6 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d7),     .addr('d14),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_Q));
                        $display("LOAD Q: Finish port 7 transfer");
                    end
                join
            end
            INPUT_M_K:begin
                fork 
                    begin
                        spad_write_wrap(.port_idx('d0),     .addr('h20),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_K));
                        $display("LOAD K: Finish port 0 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d1),     .addr('h22),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_K));
                        $display("LOAD K: Finish port 1 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d2),     .addr('h24),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_K));
                        $display("LOAD K: Finish port 2 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d3),     .addr('h26),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_K));
                        $display("LOAD K: Finish port 3 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d4),     .addr('h28),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_K));
                        $display("LOAD K: Finish port 4 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d5),     .addr('h2a),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_K));
                        $display("LOAD K: Finish port 5 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d6),     .addr('h2c),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_K));
                        $display("LOAD K: Finish port 6 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d7),     .addr('h2e),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_K));
                        $display("LOAD K: Finish port 7 transfer");
                    end
                join
            end
            INPUT_M_V:begin
                fork 
                    begin
                        spad_write_wrap(.port_idx('d0),     .addr('h40),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_V));
                        $display("LOAD V: Finish port 0 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d1),     .addr('h42),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_V));
                        $display("LOAD V: Finish port 1 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d2),     .addr('h44),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_V));
                        $display("LOAD V: Finish port 2 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d3),     .addr('h46),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_V));
                        $display("LOAD V: Finish port 3 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d4),     .addr('h48),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_V));
                        $display("LOAD V: Finish port 4 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d5),     .addr('h4a),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_V));
                        $display("LOAD V: Finish port 5 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d6),     .addr('h4c),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_V));
                        $display("LOAD V: Finish port 6 transfer");
                    end
                    begin
                        spad_write_wrap(.port_idx('d7),     .addr('h4e),
                                        .sub_bank_id('d0),  .length('d8),
                                        .matrix_choice(INPUT_M_V));
                        $display("LOAD V: Finish port 7 transfer");
                    end
                join
            end

        endcase
    end





endtask









//assign io_acc_read_0_valid =        io_acc_read_valid_reg[0];
//assign io_acc_read_0_addr =         io_acc_read_addr_reg[0];
//assign io_acc_read_0_subBankIdx =   io_acc_read_subBankIdx_reg[0];
//assign io_acc_read_1_valid =        io_acc_read_valid_reg[1];
//assign io_acc_read_1_addr =         io_acc_read_addr_reg[1];
//assign io_acc_read_1_subBankIdx =   io_acc_read_subBankIdx_reg[1];
//assign io_acc_read_2_valid =        io_acc_read_valid_reg[2];
//assign io_acc_read_2_addr =         io_acc_read_addr_reg[2];
//assign io_acc_read_2_subBankIdx =   io_acc_read_subBankIdx_reg[2];
//assign io_acc_read_3_valid =        io_acc_read_valid_reg[3];
//assign io_acc_read_3_addr =         io_acc_read_addr_reg[3];
//assign io_acc_read_3_subBankIdx =   io_acc_read_subBankIdx_reg[3];
//assign io_acc_read_4_valid =        io_acc_read_valid_reg[4];
//assign io_acc_read_4_addr =         io_acc_read_addr_reg[4];
//assign io_acc_read_4_subBankIdx =   io_acc_read_subBankIdx_reg[4];
//assign io_acc_read_5_valid =        io_acc_read_valid_reg[5];
//assign io_acc_read_5_addr =         io_acc_read_addr_reg[5];
//assign io_acc_read_5_subBankIdx =   io_acc_read_subBankIdx_reg[5];
//assign io_acc_read_6_valid =        io_acc_read_valid_reg[6];
//assign io_acc_read_6_addr =         io_acc_read_addr_reg[6];
//assign io_acc_read_6_subBankIdx =   io_acc_read_subBankIdx_reg[6];
//assign io_acc_read_7_valid =        io_acc_read_valid_reg[7];
//assign io_acc_read_7_addr =         io_acc_read_addr_reg[7];
//assign io_acc_read_7_subBankIdx =   io_acc_read_subBankIdx_reg[7];



endmodule