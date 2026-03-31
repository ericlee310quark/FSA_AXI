`define CYCLE_TIME 15.0


`define LOG_INFO(msg) $display("[INFO]  %t | %m | %s", $time, msg)
`define LOG_ERROR(msg) $error("[ERROR] %t | %m | %s", $time, msg)



module PATTERN(
        output reg          clock,	
        output reg          reset,	
        input        io_inst_ready,	
        output reg          io_inst_valid,	
        output reg   [4:0]  io_inst_bits_acc_addr,	
        output reg   [4:0]  io_inst_bits_acc_stride,	
        output reg          io_inst_bits_acc_zero,	
        output reg   [6:0]  io_inst_bits_spad_addr,	
        output reg   [4:0]  io_inst_bits_spad_stride,	
        output reg          io_inst_bits_spad_revInput,	
        output reg          io_inst_bits_spad_revOutput,	
        output reg          io_inst_bits_spad_delayOutput,	
        output reg   [4:0]  io_inst_bits_header_semId,	
        output reg          io_inst_bits_header_releaseValid,	
        output reg   [2:0]  io_inst_bits_header_releaseSemValue,	
        output reg   [4:0]  io_inst_bits_header_func,	
        output reg          io_inst_bits_header_waitPrevAcc,	
        input        io_sem_release_valid,	
        input [4:0]  io_sem_release_bits_id,	
        input [2:0]  io_sem_release_bits_value,	
        output reg          io_spad_write_0_valid,	
        output reg   [6:0]  io_spad_write_0_addr,	
        output reg   [1:0]  io_spad_write_0_subBankIdx,	
        output reg   [15:0] io_spad_write_0_data_0,	
        output reg   [15:0] io_spad_write_0_data_1,	
        output reg   [15:0] io_spad_write_0_data_2,	
        output reg   [15:0] io_spad_write_0_data_3,	
        output reg          io_spad_write_1_valid,	
        output reg   [6:0]  io_spad_write_1_addr,	
        input        io_spad_write_1_ready,	
        output reg   [1:0]  io_spad_write_1_subBankIdx,	
        output reg   [15:0] io_spad_write_1_data_0,	
        output reg   [15:0] io_spad_write_1_data_1,	
        output reg   [15:0] io_spad_write_1_data_2,	
        output reg   [15:0] io_spad_write_1_data_3,	
        output reg          io_spad_write_2_valid,	
        output reg   [6:0]  io_spad_write_2_addr,	
        input        io_spad_write_2_ready,	
        output reg   [1:0]  io_spad_write_2_subBankIdx,	
        output reg   [15:0] io_spad_write_2_data_0,	
        output reg   [15:0] io_spad_write_2_data_1,	
        output reg   [15:0] io_spad_write_2_data_2,	
        output reg   [15:0] io_spad_write_2_data_3,	
        output reg          io_spad_write_3_valid,	
        output reg   [6:0]  io_spad_write_3_addr,	
        input        io_spad_write_3_ready,	
        output reg   [1:0]  io_spad_write_3_subBankIdx,	
        output reg   [15:0] io_spad_write_3_data_0,	
        output reg   [15:0] io_spad_write_3_data_1,	
        output reg   [15:0] io_spad_write_3_data_2,	
        output reg   [15:0] io_spad_write_3_data_3,	
        output reg          io_spad_write_4_valid,	
        output reg   [6:0]  io_spad_write_4_addr,	
        input        io_spad_write_4_ready,	
        output reg   [1:0]  io_spad_write_4_subBankIdx,	
        output reg   [15:0] io_spad_write_4_data_0,	
        output reg   [15:0] io_spad_write_4_data_1,	
        output reg   [15:0] io_spad_write_4_data_2,	
        output reg   [15:0] io_spad_write_4_data_3,	
        output reg          io_spad_write_5_valid,	
        output reg   [6:0]  io_spad_write_5_addr,	
        input        io_spad_write_5_ready,	
        output reg   [1:0]  io_spad_write_5_subBankIdx,	
        output reg   [15:0] io_spad_write_5_data_0,	
        output reg   [15:0] io_spad_write_5_data_1,	
        output reg   [15:0] io_spad_write_5_data_2,	
        output reg   [15:0] io_spad_write_5_data_3,	
        output reg          io_spad_write_6_valid,	
        output reg   [6:0]  io_spad_write_6_addr,	
        input        io_spad_write_6_ready,	
        output reg   [1:0]  io_spad_write_6_subBankIdx,	
        output reg   [15:0] io_spad_write_6_data_0,	
        output reg   [15:0] io_spad_write_6_data_1,	
        output reg   [15:0] io_spad_write_6_data_2,	
        output reg   [15:0] io_spad_write_6_data_3,	
        output reg          io_spad_write_7_valid,	
        output reg   [6:0]  io_spad_write_7_addr,	
        input        io_spad_write_7_ready,	
        output reg   [1:0]  io_spad_write_7_subBankIdx,	
        output reg   [15:0] io_spad_write_7_data_0,	
        output reg   [15:0] io_spad_write_7_data_1,	
        output reg   [15:0] io_spad_write_7_data_2,	
        output reg   [15:0] io_spad_write_7_data_3,	
        output reg          io_acc_read_0_valid,	
        output reg   [4:0]  io_acc_read_0_addr,	
        input        io_acc_read_0_ready,	
        output reg   [2:0]  io_acc_read_0_subBankIdx,	
        input [31:0] io_acc_read_0_data_0,	
        input [31:0] io_acc_read_0_data_1,	
        output reg          io_acc_read_1_valid,	
        output reg   [4:0]  io_acc_read_1_addr,	
        input        io_acc_read_1_ready,	
        output reg   [2:0]  io_acc_read_1_subBankIdx,	
        input [31:0] io_acc_read_1_data_0,	
        input [31:0] io_acc_read_1_data_1,	
        output reg          io_acc_read_2_valid,	
        output reg   [4:0]  io_acc_read_2_addr,	
        input        io_acc_read_2_ready,	
        output reg   [2:0]  io_acc_read_2_subBankIdx,	
        input [31:0] io_acc_read_2_data_0,	
        input [31:0] io_acc_read_2_data_1,	
        output reg          io_acc_read_3_valid,	
        output reg   [4:0]  io_acc_read_3_addr,	
        input        io_acc_read_3_ready,	
        output reg   [2:0]  io_acc_read_3_subBankIdx,	
        input [31:0] io_acc_read_3_data_0,	
        input [31:0] io_acc_read_3_data_1,	
        output reg          io_acc_read_4_valid,	
        output reg   [4:0]  io_acc_read_4_addr,	
        input        io_acc_read_4_ready,	
        output reg   [2:0]  io_acc_read_4_subBankIdx,	
        input [31:0] io_acc_read_4_data_0,	
        input [31:0] io_acc_read_4_data_1,	
        output reg          io_acc_read_5_valid,	
        output reg   [4:0]  io_acc_read_5_addr,	
        input        io_acc_read_5_ready,	
        output reg   [2:0]  io_acc_read_5_subBankIdx,	
        input [31:0] io_acc_read_5_data_0,	
        input [31:0] io_acc_read_5_data_1,	
        output reg          io_acc_read_6_valid,	
        output reg   [4:0]  io_acc_read_6_addr,	
        input        io_acc_read_6_ready,	
        output reg   [2:0]  io_acc_read_6_subBankIdx,	
        input [31:0] io_acc_read_6_data_0,	
        input [31:0] io_acc_read_6_data_1,	
        output reg          io_acc_read_7_valid,	
        output reg   [4:0]  io_acc_read_7_addr,	
        input        io_acc_read_7_ready,	
        output reg   [2:0]  io_acc_read_7_subBankIdx,	
        input [31:0] io_acc_read_7_data_0,	
        input [31:0] io_acc_read_7_data_1,	
        input        io_busy	
);

/*
        output reg         clock;
        output reg         reset;
        output reg         io_inst_valid;
        output reg  [4:0]  io_inst_bits_acc_addr;
        output reg  [4:0]  io_inst_bits_acc_stride;
        output reg         io_inst_bits_acc_zero;
        output reg  [6:0]  io_inst_bits_spad_addr;
        output reg  [4:0]  io_inst_bits_spad_stride;
        output reg         io_inst_bits_spad_revInput;
        output reg         io_inst_bits_spad_revOutput;
        output reg         io_inst_bits_spad_delayOutput;
        output reg  [4:0]  io_inst_bits_header_semId;
        output reg         io_inst_bits_header_releaseValid;
        output reg  [2:0]  io_inst_bits_header_releaseSemValue;
        output reg  [4:0]  io_inst_bits_header_func;
        output reg         io_inst_bits_header_waitPrevAcc;
        output reg         io_spad_write_0_valid;
        output reg  [6:0]  io_spad_write_0_addr;
        output reg  [1:0]  io_spad_write_0_subBankIdx;
        output reg  [15:0] io_spad_write_0_data_0;
        output reg  [15:0] io_spad_write_0_data_1;
        output reg  [15:0] io_spad_write_0_data_2;
        output reg  [15:0] io_spad_write_0_data_3;
        output reg         io_spad_write_1_valid;
        output reg  [6:0]  io_spad_write_1_addr;
        output reg  [1:0]  io_spad_write_1_subBankIdx;
        output reg  [15:0] io_spad_write_1_data_0;
        output reg  [15:0] io_spad_write_1_data_1;
        output reg  [15:0] io_spad_write_1_data_2;
        output reg  [15:0] io_spad_write_1_data_3;
        output reg         io_spad_write_2_valid;
        output reg  [6:0]  io_spad_write_2_addr;
        output reg  [1:0]  io_spad_write_2_subBankIdx;
        output reg  [15:0] io_spad_write_2_data_0;
        output reg  [15:0] io_spad_write_2_data_1;
        output reg  [15:0] io_spad_write_2_data_2;
        output reg  [15:0] io_spad_write_2_data_3;
        output reg         io_spad_write_3_valid;
        output reg  [6:0]  io_spad_write_3_addr;
        output reg  [1:0]  io_spad_write_3_subBankIdx;
        output reg  [15:0] io_spad_write_3_data_0;
        output reg  [15:0] io_spad_write_3_data_1;
        output reg  [15:0] io_spad_write_3_data_2;
        output reg  [15:0] io_spad_write_3_data_3;
        output reg         io_spad_write_4_valid;
        output reg  [6:0]  io_spad_write_4_addr;
        output reg  [1:0]  io_spad_write_4_subBankIdx;
        output reg  [15:0] io_spad_write_4_data_0;
        output reg  [15:0] io_spad_write_4_data_1;
        output reg  [15:0] io_spad_write_4_data_2;
        output reg  [15:0] io_spad_write_4_data_3;
        output reg         io_spad_write_5_valid;
        output reg  [6:0]  io_spad_write_5_addr;
        output reg  [1:0]  io_spad_write_5_subBankIdx;
        output reg  [15:0] io_spad_write_5_data_0;
        output reg  [15:0] io_spad_write_5_data_1;
        output reg  [15:0] io_spad_write_5_data_2;
        output reg  [15:0] io_spad_write_5_data_3;
        output reg         io_spad_write_6_valid;
        output reg  [6:0]  io_spad_write_6_addr;
        output reg  [1:0]  io_spad_write_6_subBankIdx;
        output reg  [15:0] io_spad_write_6_data_0;
        output reg  [15:0] io_spad_write_6_data_1;
        output reg  [15:0] io_spad_write_6_data_2;
        output reg  [15:0] io_spad_write_6_data_3;
        output reg         io_spad_write_7_valid;
        output reg  [6:0]  io_spad_write_7_addr;
        output reg  [1:0]  io_spad_write_7_subBankIdx;
        output reg  [15:0] io_spad_write_7_data_0;
        output reg  [15:0] io_spad_write_7_data_1;
        output reg  [15:0] io_spad_write_7_data_2;
        output reg  [15:0] io_spad_write_7_data_3;
        output reg         io_acc_read_0_valid;
        output reg  [4:0]  io_acc_read_0_addr,;
        output reg  [2:0]  io_acc_read_0_subBankIdx;
        output reg         io_acc_read_1_valid;
        output reg  [4:0]  io_acc_read_1_addr;
        output reg  [2:0]  io_acc_read_1_subBankIdx;
        output reg         io_acc_read_2_valid;
        output reg  [4:0]  io_acc_read_2_addr;
        output reg  [2:0]  io_acc_read_2_subBankIdx;
        output reg         io_acc_read_3_valid;
        output reg  [4:0]  io_acc_read_3_addr;
        output reg  [2:0]  io_acc_read_3_subBankIdx;
        output reg         io_acc_read_4_valid;
        output reg  [4:0]  io_acc_read_4_addr;
        output reg  [2:0]  io_acc_read_4_subBankIdx;
        output reg         io_acc_read_5_valid;
        output reg  [4:0]  io_acc_read_5_addr;
        output reg  [2:0]  io_acc_read_5_subBankId;
        output reg         io_acc_read_6_valid;
        output reg  [4:0]  io_acc_read_6_addr;
        output reg  [2:0]  io_acc_read_6_subBankIdx;
        output reg         io_acc_read_7_valid;
        output reg  [4:0]  io_acc_read_7_addr;
        output reg  [2:0]  io_acc_read_7_subBankIdx;

*/





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
parameter SPAD_CHANNEL_NUM = 8 , ACC_CHANNEL_NUM=8;
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

wire io_spad_write_ready_wires[SPAD_CHANNEL_NUM-1:0];





assign io_spad_write_ready_wires = {io_spad_write_7_ready, io_spad_write_6_ready, io_spad_write_5_ready, io_spad_write_4_ready, io_spad_write_3_ready, io_spad_write_2_ready, io_spad_write_1_ready, 1'b1};


//================================================================
//    initial
//================================================================

integer inst_5_lat;

initial begin

    load_hex_QKV;
	reset_idle_all;
    //reset_signal;
    //idle_all;
    load_2_SPAD_16x16(INPUT_M_Q);
    repeat(50)begin
        @(negedge clock);
    end
    inst_1;
    repeat(50)begin
        @(negedge clock);
    end
    load_2_SPAD_16x16(INPUT_M_K);
    inst_2;
    
    repeat(200)begin
        @(negedge clock);
    end
    load_2_SPAD_16x16(INPUT_M_V);
    inst_3;
    
    inst_4;
    inst_5;
    inst_5_lat = 0;
    while(io_inst_ready==='d0)begin
        @(negedge clock);
        inst_5_lat =    inst_5_lat + 1;
        if (inst_5_lat > 'd500)begin
            $display("Inst_5 wait too long!!! %d cyc", inst_5_lat);
            $finish;
        end
    end
    $display("Inst_5 use %d cyc", inst_5_lat);

    READ_ACC_16x16;
    repeat(50)begin
        @(negedge clock);
    end
    // TODO:
    

    //TODO

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
    @(negedge clock);
    
end
endtask


always @(posedge clock) begin
    tot_cyc <= tot_cyc + 1;
end



task reset_signal;
    begin
        reset=1;
        repeat(100)begin
            @(negedge clock);

        end
        //release clock;
        reset=0;
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
        for(integer spad_reset_idx = 0; spad_reset_idx <SPAD_CHANNEL_NUM; spad_reset_idx = spad_reset_idx +1)begin
            io_spad_write_valid_reg        [spad_reset_idx] = 'h0;
            io_spad_write_addr_reg         [spad_reset_idx] = 'h0;
            io_spad_write_subBankIdx_reg   [spad_reset_idx] = 'h0;
            io_spad_write_data_0_reg       [spad_reset_idx] = 'h0;
            io_spad_write_data_1_reg       [spad_reset_idx] = 'h0;
            io_spad_write_data_2_reg       [spad_reset_idx] = 'h0;
            io_spad_write_data_3_reg       [spad_reset_idx] = 'h0;
        end
    end
endtask

task idle_acc;
    begin
        for(integer acc_reset_idx  = 0; acc_reset_idx <ACC_CHANNEL_NUM; acc_reset_idx = acc_reset_idx +1)begin
            io_acc_read_valid_reg       [acc_reset_idx] = 'h0;
            io_acc_read_addr_reg        [acc_reset_idx] = 'h0;
            io_acc_read_subBankIdx_reg  [acc_reset_idx] = 'h0;
        end
    end
endtask

task reset_idle_all;
    begin
        reset=1;
        repeat(100)begin
            @(negedge clock);
        end
        idle_inst;
        idle_spad;
        idle_acc;
        repeat(10)begin
            @(negedge clock);
        end
        reset = 0;
        @(negedge clock);
    end
endtask

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
    reg [8:0] txt_file_addr;
    temp_total_addr = {addr, sub_bank_id};
    case(matrix_choice)
        INPUT_M_Q:begin
            txt_file_addr = {addr, sub_bank_id};
        end
        INPUT_M_K:begin
            txt_file_addr = {addr - 'h20, sub_bank_id};
        end
        INPUT_M_V:begin
            txt_file_addr = {addr - 'h40, sub_bank_id};
        end
    endcase


    
    if (port_idx == 'd0)begin
        for(integer curr_idx=0; curr_idx < (length); curr_idx = curr_idx + 'd1)begin
            `LOG_INFO("SPAD_WRITE_WRAP");
            $display("Port %d  To temp_total_addr:  %d" ,port_idx,temp_total_addr);
            $display("Fetch %d %d %d %d", txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2, (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1, (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2, (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3);
            
            case(matrix_choice)
                INPUT_M_Q:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[8:2]),
                        .in_valid('d1),
                        .d0(Q_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(Q_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(Q_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(Q_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
                INPUT_M_K:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[8:2]),
                        .in_valid('d1),
                        .d0(K_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(K_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(K_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(K_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
                INPUT_M_V:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[8:2]),
                        .in_valid('d1),
                        .d0(V_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(V_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(V_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(V_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
            endcase





            temp_total_addr = temp_total_addr + 'd1;
            txt_file_addr   = txt_file_addr + 'd1;
        end
            $display("Port %d To temp_total_addr:  %d" ,port_idx,temp_total_addr);
            $display("Fetch %d %d %d %d", (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2), (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1, (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2, (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3);
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
            
            $display("Port %d To temp_total_addr:  %d" ,port_idx, temp_total_addr);
            $display("Fetch %d %d %d %d", (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2), (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1, (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2, (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3);
            
            case(matrix_choice)
                INPUT_M_Q:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[8:2]),
                        .in_valid('d1),
                        .d0(Q_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(Q_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(Q_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(Q_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
                INPUT_M_K:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[8:2]),
                        .in_valid('d1),
                        .d0(K_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(K_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(K_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(K_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
                INPUT_M_V:begin
                    spad_write( .port_idx(port_idx),
                        .input_SubBankID(temp_total_addr[1:0]),
                        .addr(temp_total_addr[8:2]),
                        .in_valid('d1),
                        .d0(V_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)]),
                        .d1(V_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1]),
                        .d2(V_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2]),
                        .d3(V_matrix_gt[(txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3])
                        );
                end
            endcase
            while (~io_spad_write_ready_wires[port_idx[SPAD_CHANNEL_SPACE-1:0]]) begin
                tick;
                spad_write_latency = spad_write_latency +'d1;

                if (spad_write_latency > 'd100)begin
                    $display("SPAD WRITE wait for ready too long: Port %0d | spad_write_latency %d ",port_idx, spad_write_latency);
                    $finish;
                end
            end
            temp_total_addr = temp_total_addr + 'd1;
            txt_file_addr   = txt_file_addr + 'd1;
        end
            $display("Port %d To temp_total_addr:  %d", port_idx,temp_total_addr);
            $display("Fetch %d %d %d %d", (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2), (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+1, (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+2, (txt_file_addr[MATRIX_MEM_ADDR_SPACE-1:0]<<2)+3);
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
//******************************************************************************************************

// Write one row to ScratchPad (single cycle, port 0, subBankIdx=0)
task automatic acc_sram_write;
input [31:0]    port_idx;
input           read_valid;
input [2:0]     read_SubBankID;
input [4:0]     addr;
begin


    io_acc_read_valid_reg[port_idx]             =   read_valid;
    io_acc_read_addr_reg[port_idx]              =   addr;
    io_acc_read_subBankIdx_reg[port_idx]        =   read_SubBankID;
    $display("---------------------------------------");
    $display("ACC READ: Port %d",port_idx);
    $display("read_valid: %d",read_valid);
    $display("read_SubBankID: %d", read_SubBankID);
    $display("Addr: %d", addr);
    $display("Total cyc: %d", tot_cyc);
    $display("---------------------------------------");
    tick;
end
endtask





//MAX LENGTH 16x16
task automatic  acc_sram_read_wrap;
input [31:0] port_idx;
input [4:0] addr;
input [2:0] sub_bank_id;
input integer length;
begin
    integer addr_idx = 0;
    integer acc_read_latency = 0;
    reg [7:0] temp_total_addr;
    reg [7:0] txt_file_addr;
    temp_total_addr = {addr, sub_bank_id};


    for(integer curr_idx=0; curr_idx < (length); curr_idx = curr_idx + 'd1)begin

        acc_sram_write(.port_idx(port_idx), .read_valid('d1), .read_SubBankID(temp_total_addr[2:0]), .addr(temp_total_addr[7:3]));
        if (curr_idx=='d9)begin
            temp_total_addr = temp_total_addr + 1;
            acc_sram_write(.port_idx(port_idx), .read_valid('d0), .read_SubBankID(temp_total_addr[2:0]), .addr(temp_total_addr[7:3]));                
            //temp_total_addr = temp_total_addr + 1;
        
        end
        else begin
            temp_total_addr = temp_total_addr + 1;
        end
    end

    acc_sram_write(.port_idx(port_idx), .read_valid('d0), .read_SubBankID(temp_total_addr[2:0]), .addr(temp_total_addr[7:3]));
    $display("ACC read inst finish: Port %0d",port_idx);

end
endtask





task READ_ACC_16x16;
    begin
        fork
            begin
                acc_sram_read_wrap(.port_idx('d0), .addr('h1), .sub_bank_id('h0), .length('d16));
                $display("ACC READ: Finish port 0 inst");
            end
            begin
                acc_sram_read_wrap(.port_idx('d1), .addr('h3), .sub_bank_id('h0), .length('d16));
                $display("ACC READ: Finish port 1 inst");
            end
            begin
                acc_sram_read_wrap(.port_idx('d2), .addr('h5), .sub_bank_id('h0), .length('d16));
                $display("ACC READ: Finish port 2 inst");
            end
            begin
                acc_sram_read_wrap(.port_idx('d3), .addr('h7), .sub_bank_id('h0), .length('d16));
                $display("ACC READ: Finish port 3 inst");
            end
            begin
                acc_sram_read_wrap(.port_idx('d4), .addr('h9), .sub_bank_id('h0), .length('d16));
                $display("ACC READ: Finish port 4 inst");
            end
            begin
                acc_sram_read_wrap(.port_idx('d5), .addr('hb), .sub_bank_id('h0), .length('d16));
                $display("ACC READ: Finish port 5 inst");
            end
            begin
                acc_sram_read_wrap(.port_idx('d6), .addr('hd), .sub_bank_id('h0), .length('d16));
                $display("ACC READ: Finish port 6 inst");
            end
            begin
                acc_sram_read_wrap(.port_idx('d7), .addr('hf), .sub_bank_id('h0), .length('d16));
                $display("ACC READ: Finish port 7 inst");
            end
        join
    end
endtask








//******************************************************************************************************

integer inst_1_start_cyc;
integer inst_1_lat_cyc;

task   inst_1;
begin
   @(negedge clock);
    io_inst_valid                           =   'h1;
    io_inst_bits_acc_addr                   =   'h0;
    io_inst_bits_acc_stride                 =   'h0;
    io_inst_bits_acc_zero                   =   'h0;
    io_inst_bits_spad_addr                  =   'hf;
    io_inst_bits_spad_stride                =   'h1f;
    io_inst_bits_spad_revInput              =   'h0;
    io_inst_bits_spad_revOutput             =   'h0;
    io_inst_bits_spad_delayOutput           =   'h0;
    io_inst_bits_header_semId               =   'h0;
    io_inst_bits_header_releaseValid        =   'h1;
    io_inst_bits_header_releaseSemValue     =   'h0;
    io_inst_bits_header_func                =   'h0;
    io_inst_bits_header_waitPrevAcc         =	'h0;
    inst_1_start_cyc = 0;
    //@(posedge clock); 
    while(io_inst_ready!=='d1)begin
        inst_1_start_cyc = inst_1_start_cyc + 1;
        if (inst_1_start_cyc > 'd500)begin
            $display("Inst_1 wait too long!!!");
            $finish;
        end
        @(negedge clock);      
    end
    @(negedge clock);
    io_inst_valid                           =   'h0;
    io_inst_bits_acc_addr                   =   'h0;
    io_inst_bits_acc_stride                 =   'h18;
    io_inst_bits_acc_zero                   =   'h0;
    io_inst_bits_spad_addr                  =   'h7e;
    io_inst_bits_spad_stride                =   'hf;
    io_inst_bits_spad_revInput              =   'h1;
    io_inst_bits_spad_revOutput             =   'h1;
    io_inst_bits_spad_delayOutput           =   'h0;
    io_inst_bits_header_semId               =   'h1c;
    io_inst_bits_header_releaseValid        =   'h0;
    io_inst_bits_header_releaseSemValue     =   'h7;
    io_inst_bits_header_func                =   'h1d;
    io_inst_bits_header_waitPrevAcc         =	'h1;
   
    @(negedge clock);
    inst_1_lat_cyc = 0;
    while(io_busy!=='d0)begin
        @(negedge clock);
        inst_1_lat_cyc = inst_1_lat_cyc +1;
        if (inst_1_lat_cyc > 'd500)begin
            $display("Inst_1 lat too long!!!");
            $finish;
        end
    end

    //io_inst_valid                           =   'h0;
    //io_inst_bits_acc_addr                   =   'h0;
    //io_inst_bits_acc_stride                 =   'h0;
    //io_inst_bits_acc_zero                   =   'h0;
    //io_inst_bits_spad_addr                  =   'h0;
    //io_inst_bits_spad_stride                =   'h0;
    //io_inst_bits_spad_revInput              =   'h0;
    //io_inst_bits_spad_revOutput             =   'h0;
    //io_inst_bits_spad_delayOutput           =   'h0;
    //io_inst_bits_header_semId               =   'h0;
    //io_inst_bits_header_releaseValid        =   'h0;
    //io_inst_bits_header_releaseSemValue     =   'h0;
    //io_inst_bits_header_func                =   'h0;
    //io_inst_bits_header_waitPrevAcc         =	'h0;


end
endtask



integer inst_2_start_cyc;
integer inst_2_lat_cyc;
task   inst_2;
begin
   @(negedge clock);
    io_inst_valid                           =   'h1;
    io_inst_bits_acc_addr                   =   'h0;
    io_inst_bits_acc_stride                 =   'h1;
    io_inst_bits_acc_zero                   =   'h1;

    io_inst_bits_spad_addr                  =   'h20;
    io_inst_bits_spad_stride                =   'h1;
    io_inst_bits_spad_revInput              =   'h1;
    io_inst_bits_spad_revOutput             =   'h1;
    io_inst_bits_spad_delayOutput           =   'h1;

    io_inst_bits_header_semId               =   'h2;
    io_inst_bits_header_releaseValid        =   'h1;
    io_inst_bits_header_releaseSemValue     =   'h0;
    io_inst_bits_header_func                =   'h1;
    io_inst_bits_header_waitPrevAcc         =	'h0;
    inst_2_start_cyc = 0;
    //@(posedge clock); 
    while(io_inst_ready!=='d1)begin
        inst_2_start_cyc = inst_2_start_cyc + 1;
        if (inst_2_start_cyc > 'd500)begin
            $display("Inst_2 wait too long!!!");
            $finish;
        end
        @(negedge clock);      
    end
    @(negedge clock);
    io_inst_valid                           =   'h0;
    io_inst_bits_acc_addr                   =   'h17;
    io_inst_bits_acc_stride                 =   'h15;
    io_inst_bits_acc_zero                   =   'h0;

    io_inst_bits_spad_addr                  =   'h4d;
    io_inst_bits_spad_stride                =   'h1f;
    io_inst_bits_spad_revInput              =   'h0;
    io_inst_bits_spad_revOutput             =   'h0;
    io_inst_bits_spad_delayOutput           =   'h1;
    
    io_inst_bits_header_semId               =   'h14;
    io_inst_bits_header_releaseValid        =   'h1;
    io_inst_bits_header_releaseSemValue     =   'h5;
    io_inst_bits_header_func                =   'h1e;
    io_inst_bits_header_waitPrevAcc         =	'h1;
   
    @(negedge clock);
    inst_2_lat_cyc = 0;
    while(io_busy!=='d0)begin
        @(negedge clock);
        inst_2_lat_cyc = inst_2_lat_cyc +1;
        if (inst_2_lat_cyc > 'd500)begin
            $display("Inst_2 lat too long!!!");
            $finish;
        end
    end
end
endtask


integer inst_3_start_cyc;
integer inst_3_lat_cyc;
task   inst_3;
begin
   @(negedge clock);
    io_inst_valid                           =   'h1;
    io_inst_bits_acc_addr                   =   'h1;
    io_inst_bits_acc_stride                 =   'h1;
    io_inst_bits_acc_zero                   =   'h1;

    io_inst_bits_spad_addr                  =   'h40;
    io_inst_bits_spad_stride                =   'h1;
    io_inst_bits_spad_revInput              =   'h1;
    io_inst_bits_spad_revOutput             =   'h0;
    io_inst_bits_spad_delayOutput           =   'h1;

    io_inst_bits_header_semId               =   'h4;
    io_inst_bits_header_releaseValid        =   'h1;
    io_inst_bits_header_releaseSemValue     =   'h0;
    io_inst_bits_header_func                =   'h2;
    io_inst_bits_header_waitPrevAcc         =	'h0;
    inst_3_start_cyc = 0;
    //@(posedge clock); 
    while(io_inst_ready!=='d1)begin
        inst_3_start_cyc = inst_3_start_cyc + 1;
        if (inst_3_start_cyc > 'd500)begin
            $display("Inst_3 wait too long!!!");
            $finish;
        end
        @(negedge clock);      
    end
    @(negedge clock);
    io_inst_valid                           =   'h0;
    io_inst_bits_acc_addr                   =   'h1d;
    io_inst_bits_acc_stride                 =   'h5;
    io_inst_bits_acc_zero                   =   'h1;

    io_inst_bits_spad_addr                  =   'h5a;
    io_inst_bits_spad_stride                =   'h1a;
    io_inst_bits_spad_revInput              =   'h1;
    io_inst_bits_spad_revOutput             =   'h1;
    io_inst_bits_spad_delayOutput           =   'h0;
    
    io_inst_bits_header_semId               =   'h15;
    io_inst_bits_header_releaseValid        =   'h1;
    io_inst_bits_header_releaseSemValue     =   'h7;
    io_inst_bits_header_func                =   'h1d;
    io_inst_bits_header_waitPrevAcc         =	'h0;
   
    @(negedge clock);
    inst_3_lat_cyc = 0;
    while(io_busy!=='d0)begin
        @(negedge clock);
        inst_3_lat_cyc = inst_3_lat_cyc +1;
        if (inst_3_lat_cyc > 'd500)begin
            $display("Inst_3 lat too long!!!");
            $finish;
        end
    end
end
endtask





integer inst_4_start_cyc;
integer inst_4_lat_cyc;
task   inst_4;
begin
   @(negedge clock);
    io_inst_valid                           =   'h1;
    io_inst_bits_acc_addr                   =   'h0;
    io_inst_bits_acc_stride                 =   'h1;
    io_inst_bits_acc_zero                   =   'h0;

    io_inst_bits_spad_addr                  =   'h0;
    io_inst_bits_spad_stride                =   'h0;
    io_inst_bits_spad_revInput              =   'h0;
    io_inst_bits_spad_revOutput             =   'h0;
    io_inst_bits_spad_delayOutput           =   'h0;

    io_inst_bits_header_semId               =   'h0;
    io_inst_bits_header_releaseValid        =   'h0;
    io_inst_bits_header_releaseSemValue     =   'h0;
    io_inst_bits_header_func                =   'h3;
    io_inst_bits_header_waitPrevAcc         =	'h1;
    inst_4_start_cyc = 0;
    //@(posedge clock); 
    while(io_inst_ready!=='d1)begin
        inst_4_start_cyc = inst_4_start_cyc + 1;
        if (inst_4_start_cyc > 'd500)begin
            $display("Inst_4 wait too long!!!");
            $finish;
        end
        @(negedge clock);      
    end
    @(negedge clock);
    io_inst_valid                           =   'h0;
    io_inst_bits_acc_addr                   =   'h1;
    io_inst_bits_acc_stride                 =   'hd;
    io_inst_bits_acc_zero                   =   'h1;

    io_inst_bits_spad_addr                  =   'h43;
    io_inst_bits_spad_stride                =   'h0;
    io_inst_bits_spad_revInput              =   'h1;
    io_inst_bits_spad_revOutput             =   'h1;
    io_inst_bits_spad_delayOutput           =   'h1;
    
    io_inst_bits_header_semId               =   'h1;
    io_inst_bits_header_releaseValid        =   'h1;
    io_inst_bits_header_releaseSemValue     =   'h7;
    io_inst_bits_header_func                =   'h18;
    io_inst_bits_header_waitPrevAcc         =	'h1;
   
    @(negedge clock);
    inst_4_lat_cyc = 0;
    while(io_busy!=='d0)begin
        @(negedge clock);
        inst_4_lat_cyc = inst_4_lat_cyc +1;
        if (inst_4_lat_cyc > 'd500)begin
            $display("Inst_4 lat too long!!!");
            $finish;
        end
    end
end
endtask


integer inst_5_start_cyc;
integer inst_5_lat_cyc;
task   inst_5;
begin
   @(negedge clock);
    io_inst_valid                           =   'h1;
    io_inst_bits_acc_addr                   =   'h1;
    io_inst_bits_acc_stride                 =   'h1;
    io_inst_bits_acc_zero                   =   'h0;

    io_inst_bits_spad_addr                  =   'h0;
    io_inst_bits_spad_stride                =   'h0;
    io_inst_bits_spad_revInput              =   'h0;
    io_inst_bits_spad_revOutput             =   'h0;
    io_inst_bits_spad_delayOutput           =   'h0;

    io_inst_bits_header_semId               =   'h6;
    io_inst_bits_header_releaseValid        =   'h1;
    io_inst_bits_header_releaseSemValue     =   'h1;
    io_inst_bits_header_func                =   'h4;
    io_inst_bits_header_waitPrevAcc         =	'h1;
    inst_5_start_cyc = 0;
    //@(posedge clock); 
    while(io_inst_ready!=='d1)begin
        inst_5_start_cyc = inst_5_start_cyc + 1;
        if (inst_5_start_cyc > 'd500)begin
            $display("Inst_5 wait too long!!!");
            $finish;
        end
        @(negedge clock);      
    end
    @(negedge clock);
    io_inst_valid                           =   'h0;
    io_inst_bits_acc_addr                   =   'hf;
    io_inst_bits_acc_stride                 =   'hf;
    io_inst_bits_acc_zero                   =   'h0;

    io_inst_bits_spad_addr                  =   'h3d;
    io_inst_bits_spad_stride                =   'h11;
    io_inst_bits_spad_revInput              =   'h0;
    io_inst_bits_spad_revOutput             =   'h0;
    io_inst_bits_spad_delayOutput           =   'h0;
    
    io_inst_bits_header_semId               =   'hd;
    io_inst_bits_header_releaseValid        =   'h0;
    io_inst_bits_header_releaseSemValue     =   'h3;
    io_inst_bits_header_func                =   'h9;
    io_inst_bits_header_waitPrevAcc         =	'h1;
   
    @(negedge clock);
    inst_5_lat_cyc = 0;
    while(io_busy!=='d0)begin
        @(negedge clock);
        inst_5_lat_cyc = inst_5_lat_cyc +1;
        if (inst_5_lat_cyc > 'd500)begin
            $display("Inst_5 lat too long!!!");
            $finish;
        end
    end
end
endtask



assign io_spad_write_0_valid            =    io_spad_write_valid_reg        [0];
assign io_spad_write_0_addr             =    io_spad_write_addr_reg         [0];
assign io_spad_write_0_subBankIdx       =    io_spad_write_subBankIdx_reg   [0];
assign io_spad_write_0_data_0           =    io_spad_write_data_0_reg       [0];
assign io_spad_write_0_data_1           =    io_spad_write_data_1_reg       [0];
assign io_spad_write_0_data_2           =    io_spad_write_data_2_reg       [0];
assign io_spad_write_0_data_3           =    io_spad_write_data_3_reg       [0];

assign io_spad_write_1_valid            =    io_spad_write_valid_reg        [1];
assign io_spad_write_1_addr             =    io_spad_write_addr_reg         [1];
assign io_spad_write_1_subBankIdx       =    io_spad_write_subBankIdx_reg   [1];
assign io_spad_write_1_data_0           =    io_spad_write_data_0_reg       [1];
assign io_spad_write_1_data_1           =    io_spad_write_data_1_reg       [1];
assign io_spad_write_1_data_2           =    io_spad_write_data_2_reg       [1];
assign io_spad_write_1_data_3           =    io_spad_write_data_3_reg       [1];

assign io_spad_write_2_valid            =    io_spad_write_valid_reg        [2];
assign io_spad_write_2_addr             =    io_spad_write_addr_reg         [2];
assign io_spad_write_2_subBankIdx       =    io_spad_write_subBankIdx_reg   [2];
assign io_spad_write_2_data_0           =    io_spad_write_data_0_reg       [2];
assign io_spad_write_2_data_1           =    io_spad_write_data_1_reg       [2];
assign io_spad_write_2_data_2           =    io_spad_write_data_2_reg       [2];
assign io_spad_write_2_data_3           =    io_spad_write_data_3_reg       [2];

assign io_spad_write_3_valid            =    io_spad_write_valid_reg        [3];
assign io_spad_write_3_addr             =    io_spad_write_addr_reg         [3];
assign io_spad_write_3_subBankIdx       =    io_spad_write_subBankIdx_reg   [3];
assign io_spad_write_3_data_0           =    io_spad_write_data_0_reg       [3];
assign io_spad_write_3_data_1           =    io_spad_write_data_1_reg       [3];
assign io_spad_write_3_data_2           =    io_spad_write_data_2_reg       [3];
assign io_spad_write_3_data_3           =    io_spad_write_data_3_reg       [3];

assign io_spad_write_4_valid            =    io_spad_write_valid_reg        [4];
assign io_spad_write_4_addr             =    io_spad_write_addr_reg         [4];
assign io_spad_write_4_subBankIdx       =    io_spad_write_subBankIdx_reg   [4];
assign io_spad_write_4_data_0           =    io_spad_write_data_0_reg       [4];
assign io_spad_write_4_data_1           =    io_spad_write_data_1_reg       [4];
assign io_spad_write_4_data_2           =    io_spad_write_data_2_reg       [4];
assign io_spad_write_4_data_3           =    io_spad_write_data_3_reg       [4];

assign io_spad_write_5_valid            =    io_spad_write_valid_reg        [5];
assign io_spad_write_5_addr             =    io_spad_write_addr_reg         [5];
assign io_spad_write_5_subBankIdx       =    io_spad_write_subBankIdx_reg   [5];
assign io_spad_write_5_data_0           =    io_spad_write_data_0_reg       [5];
assign io_spad_write_5_data_1           =    io_spad_write_data_1_reg       [5];
assign io_spad_write_5_data_2           =    io_spad_write_data_2_reg       [5];
assign io_spad_write_5_data_3           =    io_spad_write_data_3_reg       [5];

assign io_spad_write_6_valid            =    io_spad_write_valid_reg        [6];
assign io_spad_write_6_addr             =    io_spad_write_addr_reg         [6];
assign io_spad_write_6_subBankIdx       =    io_spad_write_subBankIdx_reg   [6];
assign io_spad_write_6_data_0           =    io_spad_write_data_0_reg       [6];
assign io_spad_write_6_data_1           =    io_spad_write_data_1_reg       [6];
assign io_spad_write_6_data_2           =    io_spad_write_data_2_reg       [6];
assign io_spad_write_6_data_3           =    io_spad_write_data_3_reg       [6];

assign io_spad_write_7_valid            =    io_spad_write_valid_reg        [7];
assign io_spad_write_7_addr             =    io_spad_write_addr_reg         [7];
assign io_spad_write_7_subBankIdx       =    io_spad_write_subBankIdx_reg   [7];
assign io_spad_write_7_data_0           =    io_spad_write_data_0_reg       [7];
assign io_spad_write_7_data_1           =    io_spad_write_data_1_reg       [7];
assign io_spad_write_7_data_2           =    io_spad_write_data_2_reg       [7];
assign io_spad_write_7_data_3           =    io_spad_write_data_3_reg       [7];



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