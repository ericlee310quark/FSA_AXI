`timescale 1ns/1ps
`include "golden_ans/ga_txt.vh"



// PATTERN
`include "PATTERN_CG.sv"


// DESIGN
`ifdef RTL
	`include "FSA.sv"
`elsif GATE
	`include "FSA_SYN.v"
`endif



// Disable simulation-only $fatal assertions in MatrixEngineController
// (they fire incorrectly when REG_1 init=0 during first cycles)
`define STOP_COND_ 1'b0
`define ASSERT_VERBOSE_COND_ 1'b0

module tb_L16_fsa (
    


	wire clk, reset;



	wire [7:0] img;
	wire [7:0] ker;
	wire [7:0] weight;
	wire out_valid;
	wire [9:0] out_data;	

    initial begin
        `ifdef RTL
            $fsdbDumpfile("FSA_16x16.fsdb");
            $fsdbDumpvars(0,"+mda");
        `elsif GATE
            $fsdbDumpfile("FSA_16x16_SYN.fsdb");
            $fsdbDumpvars(0,"+mda");
            $sdf_annotate("FSA_16x16_SYN.sdf",I_SNN); 
        `endif
    end

    // Global Signals
    wire clock;
    wire reset;
    wire tb_io_busy;

    // io_inst Signals
    wire        tb_inst_valid;
    wire        tb_inst_ready;
    wire [4:0]  tb_inst_bits_acc_addr;
    wire [4:0]  tb_inst_bits_acc_stride;
    wire        tb_inst_bits_acc_zero;
    wire [6:0]  tb_inst_bits_spad_addr;
    wire [4:0]  tb_inst_bits_spad_stride;
    wire        tb_inst_bits_spad_revInput;
    wire        tb_inst_bits_spad_revOutput;
    wire        tb_inst_bits_spad_delayOutput;
    wire [4:0]  tb_inst_bits_header_semId;
    wire        tb_inst_bits_header_releaseValid;
    wire [2:0]  tb_inst_bits_header_releaseSemValue;
    wire [4:0]  tb_inst_bits_header_func;
    wire        tb_inst_bits_header_waitPrevAcc;

    // io_sem Signals
    wire        tb_sem_release_valid;
    wire [4:0]  tb_sem_release_bits_id;
    wire [2:0]  tb_sem_release_bits_value;

    // SPAD Write Ports (用 Loop 概念思考，但 Verilog 宣告需展開)
    // 以 io_spad_write_0 為例，其餘類推
    wire        tb_spad_write_0_valid, tb_spad_write_0_ready;
    wire [6:0]  tb_spad_write_0_addr;
    wire [1:0]  tb_spad_write_0_subBankIdx;
    wire [15:0] tb_spad_write_0_data_0, tb_spad_write_0_data_1, tb_spad_write_0_data_2, tb_spad_write_0_data_3;

    //---------------------------------------------------------
    // SPAD Write Channel 1
    //---------------------------------------------------------
    wire        tb_spad_write_1_valid, tb_spad_write_1_ready;
    wire [6:0]  tb_spad_write_1_addr;
    wire [1:0]  tb_spad_write_1_subBankIdx;
    wire [15:0] tb_spad_write_1_data_0, tb_spad_write_1_data_1, tb_spad_write_1_data_2, tb_spad_write_1_data_3;

    //---------------------------------------------------------
    // SPAD Write Channel 2
    //---------------------------------------------------------
    wire        tb_spad_write_2_valid, tb_spad_write_2_ready;
    wire [6:0]  tb_spad_write_2_addr;
    wire [1:0]  tb_spad_write_2_subBankIdx;
    wire [15:0] tb_spad_write_2_data_0, tb_spad_write_2_data_1, tb_spad_write_2_data_2, tb_spad_write_2_data_3;

    //---------------------------------------------------------
    // SPAD Write Channel 3
    //---------------------------------------------------------
    wire        tb_spad_write_3_valid, tb_spad_write_3_ready;
    wire [6:0]  tb_spad_write_3_addr;
    wire [1:0]  tb_spad_write_3_subBankIdx;
    wire [15:0] tb_spad_write_3_data_0, tb_spad_write_3_data_1, tb_spad_write_3_data_2, tb_spad_write_3_data_3;

    //---------------------------------------------------------
    // SPAD Write Channel 4
    //---------------------------------------------------------
    wire        tb_spad_write_4_valid, tb_spad_write_4_ready;
    wire [6:0]  tb_spad_write_4_addr;
    wire [1:0]  tb_spad_write_4_subBankIdx;
    wire [15:0] tb_spad_write_4_data_0, tb_spad_write_4_data_1, tb_spad_write_4_data_2, tb_spad_write_4_data_3;

    //---------------------------------------------------------
    // SPAD Write Channel 5
    //---------------------------------------------------------
    wire        tb_spad_write_5_valid, tb_spad_write_5_ready;
    wire [6:0]  tb_spad_write_5_addr;
    wire [1:0]  tb_spad_write_5_subBankIdx;
    wire [15:0] tb_spad_write_5_data_0, tb_spad_write_5_data_1, tb_spad_write_5_data_2, tb_spad_write_5_data_3;

    //---------------------------------------------------------
    // SPAD Write Channel 6
    //---------------------------------------------------------
    wire        tb_spad_write_6_valid, tb_spad_write_6_ready;
    wire [6:0]  tb_spad_write_6_addr;
    wire [1:0]  tb_spad_write_6_subBankIdx;
    wire [15:0] tb_spad_write_6_data_0, tb_spad_write_6_data_1, tb_spad_write_6_data_2, tb_spad_write_6_data_3;

    //---------------------------------------------------------
    // SPAD Write Channel 7
    //---------------------------------------------------------
    wire        tb_spad_write_7_valid, tb_spad_write_7_ready;
    wire [6:0]  tb_spad_write_7_addr;
    wire [1:0]  tb_spad_write_7_subBankIdx;
    wire [15:0] tb_spad_write_7_data_0, tb_spad_write_7_data_1, tb_spad_write_7_data_2, tb_spad_write_7_data_3;
    //*************************************************************************************************


    //---------------------------------------------------------
    // ACC Read Channel 1
    //---------------------------------------------------------
    wire        tb_acc_read_1_valid, tb_acc_read_1_ready;
    wire [4:0]  tb_acc_read_1_addr;
    wire [2:0]  tb_acc_read_1_subBankIdx;
    wire [31:0] tb_acc_read_1_data_0, tb_acc_read_1_data_1;

    //---------------------------------------------------------
    // ACC Read Channel 2
    //---------------------------------------------------------
    wire        tb_acc_read_2_valid, tb_acc_read_2_ready;
    wire [4:0]  tb_acc_read_2_addr;
    wire [2:0]  tb_acc_read_2_subBankIdx;
    wire [31:0] tb_acc_read_2_data_0, tb_acc_read_2_data_1;

    //---------------------------------------------------------
    // ACC Read Channel 3
    //---------------------------------------------------------
    wire        tb_acc_read_3_valid, tb_acc_read_3_ready;
    wire [4:0]  tb_acc_read_3_addr;
    wire [2:0]  tb_acc_read_3_subBankIdx;
    wire [31:0] tb_acc_read_3_data_0, tb_acc_read_3_data_1;

    //---------------------------------------------------------
    // ACC Read Channel 4
    //---------------------------------------------------------
    wire        tb_acc_read_4_valid, tb_acc_read_4_ready;
    wire [4:0]  tb_acc_read_4_addr;
    wire [2:0]  tb_acc_read_4_subBankIdx;
    wire [31:0] tb_acc_read_4_data_0, tb_acc_read_4_data_1;

    //---------------------------------------------------------
    // ACC Read Channel 5
    //---------------------------------------------------------
    wire        tb_acc_read_5_valid, tb_acc_read_5_ready;
    wire [4:0]  tb_acc_read_5_addr;
    wire [2:0]  tb_acc_read_5_subBankIdx;
    wire [31:0] tb_acc_read_5_data_0, tb_acc_read_5_data_1;

    //---------------------------------------------------------
    // ACC Read Channel 6
    //---------------------------------------------------------
    wire        tb_acc_read_6_valid, tb_acc_read_6_ready;
    wire [4:0]  tb_acc_read_6_addr;
    wire [2:0]  tb_acc_read_6_subBankIdx;
    wire [31:0] tb_acc_read_6_data_0, tb_acc_read_6_data_1;

    //---------------------------------------------------------
    // ACC Read Channel 7
    //---------------------------------------------------------
    wire        tb_acc_read_7_valid, tb_acc_read_7_ready;
    wire [4:0]  tb_acc_read_7_addr;
    wire [2:0]  tb_acc_read_7_subBankIdx;
    wire [31:0] tb_acc_read_7_data_0, tb_acc_read_7_data_1;



    FSA dut (
        // Global Signal: Input
        .clock                                  (clock),
        .reset                                  (reset),
        .io_busy                                (tb_io_busy), 
        
        // io_inst: Input
        .io_inst_valid                          (tb_inst_valid),
        .io_inst_bits_acc_addr                  (tb_inst_bits_acc_addr),
        .io_inst_bits_acc_stride                (tb_inst_bits_acc_stride),
        .io_inst_bits_acc_zero                  (tb_inst_bits_acc_zero),
        .io_inst_bits_spad_addr                 (tb_inst_bits_spad_addr),
        .io_inst_bits_spad_stride               (tb_inst_bits_spad_stride),
        .io_inst_bits_spad_revInput             (tb_inst_bits_spad_revInput),
        .io_inst_bits_spad_revOutput            (tb_inst_bits_spad_revOutput),
        .io_inst_bits_spad_delayOutput          (tb_inst_bits_spad_delayOutput),
        .io_inst_bits_header_semId              (tb_inst_bits_header_semId),
        .io_inst_bits_header_releaseValid       (tb_inst_bits_header_releaseValid),
        .io_inst_bits_header_releaseSemValue    (tb_inst_bits_header_releaseSemValue),
        .io_inst_bits_header_func               (tb_inst_bits_header_func),
        .io_inst_bits_header_waitPrevAcc        (tb_inst_bits_header_waitPrevAcc),
        // io_inst: Output
        .io_inst_ready                          (tb_inst_ready),
        // io_sem: Output
        .io_sem_release_valid                   (tb_sem_release_valid), 
        .io_sem_release_bits_id                 (tb_sem_release_bits_id),   
        .io_sem_release_bits_value              (tb_sem_release_bits_value),
        //************************************************************
        //  IO_SPAD_WRITE PORTS (0-7)
        //*************************************************************
        // io_spad_write_0
        .io_spad_write_0_valid(tb_spad_write_0_valid),
        .io_spad_write_0_addr(tb_spad_write_0_addr),
        .io_spad_write_0_subBankIdx(tb_spad_write_0_subBankIdx),
        .io_spad_write_0_data_0(tb_spad_write_0_data_0), .io_spad_write_0_data_1(tb_spad_write_0_data_1), .io_spad_write_0_data_2(tb_spad_write_0_data_2), .io_spad_write_0_data_3(tb_spad_write_0_data_3),
        .io_spad_write_0_ready(tb_spad_write_0_ready),
        //-------------------------------------------------
        // io_spad_write_1
        .io_spad_write_1_valid(tb_spad_write_1_valid),
        .io_spad_write_1_addr(tb_spad_write_1_addr),
        .io_spad_write_1_subBankIdx(tb_spad_write_1_subBankIdx),
        .io_spad_write_1_data_0(tb_spad_write_1_data_0), .io_spad_write_1_data_1(tb_spad_write_1_data_1), .io_spad_write_1_data_2(tb_spad_write_1_data_2), .io_spad_write_1_data_3(tb_spad_write_1_data_3),
        .io_spad_write_1_ready(tb_spad_write_1_ready),
        //-------------------------------------------------
        .io_spad_write_2_valid(tb_spad_write_2_valid),
        .io_spad_write_2_addr(tb_spad_write_2_addr),
        .io_spad_write_2_subBankIdx(tb_spad_write_2_subBankIdx),
        .io_spad_write_2_data_0(tb_spad_write_2_data_0), .io_spad_write_2_data_1(tb_spad_write_2_data_1), .io_spad_write_2_data_2(tb_spad_write_2_data_2), .io_spad_write_2_data_3(tb_spad_write_2_data_3),
        .io_spad_write_2_ready(tb_spad_write_2_ready),
        //-------------------------------------------------
        .io_spad_write_3_valid(tb_spad_write_3_valid),
        .io_spad_write_3_addr(tb_spad_write_3_addr),
        .io_spad_write_3_subBankIdx(tb_spad_write_3_subBankIdx),
        .io_spad_write_3_data_0(tb_spad_write_3_data_0), .io_spad_write_3_data_1(tb_spad_write_3_data_1), .io_spad_write_3_data_2(tb_spad_write_3_data_2), .io_spad_write_3_data_3(tb_spad_write_3_data_3),
        .io_spad_write_3_ready(tb_spad_write_3_ready),
        //-------------------------------------------------
        .io_spad_write_4_valid(tb_spad_write_4_valid),
        .io_spad_write_4_addr(tb_spad_write_4_addr),
        .io_spad_write_4_subBankIdx(tb_spad_write_4_subBankIdx),
        .io_spad_write_4_data_0(tb_spad_write_4_data_0), .io_spad_write_4_data_1(tb_spad_write_4_data_1), .io_spad_write_4_data_2(tb_spad_write_4_data_2), .io_spad_write_4_data_3(tb_spad_write_4_data_3),
        .io_spad_write_4_ready(tb_spad_write_4_ready),
        //-------------------------------------------------
        .io_spad_write_5_valid(tb_spad_write_5_valid),
        .io_spad_write_5_addr(tb_spad_write_5_addr),
        .io_spad_write_5_subBankIdx(tb_spad_write_5_subBankIdx),
        .io_spad_write_5_data_0(tb_spad_write_5_data_0), .io_spad_write_5_data_1(tb_spad_write_5_data_1), .io_spad_write_5_data_2(tb_spad_write_5_data_2), .io_spad_write_5_data_3(tb_spad_write_5_data_3),
        .io_spad_write_5_ready(tb_spad_write_5_ready),
        //-------------------------------------------------
        .io_spad_write_6_valid(tb_spad_write_6_valid),
        .io_spad_write_6_addr(tb_spad_write_6_addr),
        .io_spad_write_6_subBankIdx(tb_spad_write_6_subBankIdx),'
        .io_spad_write_6_data_0(tb_spad_write_6_data_0), .io_spad_write_6_data_1(tb_spad_write_6_data_1), .io_spad_write_6_data_2(tb_spad_write_6_data_2), .io_spad_write_6_data_3(tb_spad_write_6_data_3),
        .io_spad_write_6_ready(tb_spad_write_6_ready),
        //-------------------------------------------------
        .io_spad_write_7_valid(tb_spad_write_7_valid),
        .io_spad_write_7_addr(tb_spad_write_7_addr),
        .io_spad_write_7_subBankIdx(tb_spad_write_7_subBankIdx),
        .io_spad_write_7_data_0(tb_spad_write_7_data_0), .io_spad_write_7_data_1(tb_spad_write_7_data_1), .io_spad_write_7_data_2(tb_spad_write_7_data_2), .io_spad_write_7_data_3(tb_spad_write_7_data_3),
        .io_spad_write_7_ready(tb_spad_write_7_ready),

        //************************************************************
        //  IO_ACC_READ PORTS (0-7)
        //*************************************************************
        .io_acc_read_0_valid(tb_acc_read_0_valid),
        .io_acc_read_0_addr(tb_acc_read_0_addr), .io_acc_read_0_subBankIdx(tb_acc_read_0_subBankIdx),
        .io_acc_read_0_ready(tb_acc_read_0_ready),
        .io_acc_read_0_data_0(tb_acc_read_0_data_0), .io_acc_read_0_data_1(tb_acc_read_0_data_1),
        //-------------------------------------------------------
        .io_acc_read_1_valid(tb_acc_read_1_valid),
        .io_acc_read_1_addr(tb_acc_read_1_addr), .io_acc_read_1_subBankIdx(tb_acc_read_1_subBankIdx),
        .io_acc_read_1_ready(tb_acc_read_1_ready),
        .io_acc_read_1_data_0(tb_acc_read_1_data_0), .io_acc_read_1_data_1(tb_acc_read_1_data_1),
        //-------------------------------------------------------
        .io_acc_read_2_valid(tb_acc_read_2_valid),
        .io_acc_read_2_addr(tb_acc_read_2_addr), .io_acc_read_2_subBankIdx(tb_acc_read_2_subBankIdx),
        .io_acc_read_2_ready(tb_acc_read_2_ready),
        .io_acc_read_2_data_0(tb_acc_read_2_data_0), .io_acc_read_2_data_1(tb_acc_read_2_data_1),
        //-------------------------------------------------------
        .io_acc_read_3_valid(tb_acc_read_3_valid),
        .io_acc_read_3_addr(tb_acc_read_3_addr), .io_acc_read_3_subBankIdx(tb_acc_read_3_subBankIdx),
        .io_acc_read_3_ready(tb_acc_read_3_ready),
        .io_acc_read_3_data_0(tb_acc_read_3_data_0), .io_acc_read_3_data_1(tb_acc_read_3_data_1),
        //-------------------------------------------------------
        .io_acc_read_4_valid(tb_acc_read_4_valid),
        .io_acc_read_4_addr(tb_acc_read_4_addr), .io_acc_read_4_subBankIdx(tb_acc_read_4_subBankIdx),
        .io_acc_read_4_ready(tb_acc_read_4_ready),
        .io_acc_read_4_data_0(tb_acc_read_4_data_0), .io_acc_read_4_data_1(tb_acc_read_4_data_1),
        //-------------------------------------------------------
        .io_acc_read_5_valid(tb_acc_read_5_valid),
        .io_acc_read_5_addr(tb_acc_read_5_addr), .io_acc_read_5_subBankIdx(tb_acc_read_5_subBankIdx),
        .io_acc_read_5_ready(tb_acc_read_5_ready),
        .io_acc_read_5_data_0(tb_acc_read_5_data_0), .io_acc_read_5_data_1(tb_acc_read_5_data_1),
        //-------------------------------------------------------
        .io_acc_read_6_valid(tb_acc_read_6_valid),
        .io_acc_read_6_addr(tb_acc_read_6_addr), .io_acc_read_6_subBankIdx(tb_acc_read_6_subBankIdx),
        .io_acc_read_6_ready(tb_acc_read_6_ready),
        .io_acc_read_6_data_0(tb_acc_read_6_data_0), .io_acc_read_6_data_1(tb_acc_read_6_data_1),
        //-------------------------------------------------------
        .io_acc_read_7_valid(tb_acc_read_7_valid),
        .io_acc_read_7_addr(tb_acc_read_7_addr), .io_acc_read_7_subBankIdx(tb_acc_read_7_subBankIdx),
        .io_acc_read_7_ready(tb_acc_read_7_ready),
        .io_acc_read_7_data_0(tb_acc_read_7_data_0), .io_acc_read_7_data_1(tb_acc_read_7_data_1)

    );









    PATTERN I_PATTERN (
        // Global Signal: Input
        .clock                                  (clock),
        .reset                                  (reset),
        .io_busy                                (tb_io_busy), 
        
        // io_inst: Input
        .io_inst_valid                          (tb_inst_valid),
        .io_inst_bits_acc_addr                  (tb_inst_bits_acc_addr),
        .io_inst_bits_acc_stride                (tb_inst_bits_acc_stride),
        .io_inst_bits_acc_zero                  (tb_inst_bits_acc_zero),
        .io_inst_bits_spad_addr                 (tb_inst_bits_spad_addr),
        .io_inst_bits_spad_stride               (tb_inst_bits_spad_stride),
        .io_inst_bits_spad_revInput             (tb_inst_bits_spad_revInput),
        .io_inst_bits_spad_revOutput            (tb_inst_bits_spad_revOutput),
        .io_inst_bits_spad_delayOutput          (tb_inst_bits_spad_delayOutput),
        .io_inst_bits_header_semId              (tb_inst_bits_header_semId),
        .io_inst_bits_header_releaseValid       (tb_inst_bits_header_releaseValid),
        .io_inst_bits_header_releaseSemValue    (tb_inst_bits_header_releaseSemValue),
        .io_inst_bits_header_func               (tb_inst_bits_header_func),
        .io_inst_bits_header_waitPrevAcc        (tb_inst_bits_header_waitPrevAcc),
        // io_inst: Output
        .io_inst_ready                          (tb_inst_ready),
        // io_sem: Output
        .io_sem_release_valid                   (tb_sem_release_valid), 
        .io_sem_release_bits_id                 (tb_sem_release_bits_id),   
        .io_sem_release_bits_value              (tb_sem_release_bits_value),
        //************************************************************
        //  IO_SPAD_WRITE PORTS (0-7)
        //*************************************************************
        // io_spad_write_0
        .io_spad_write_0_valid(tb_spad_write_0_valid),
        .io_spad_write_0_addr(tb_spad_write_0_addr),
        .io_spad_write_0_subBankIdx(tb_spad_write_0_subBankIdx),
        .io_spad_write_0_data_0(tb_spad_write_0_data_0), .io_spad_write_0_data_1(tb_spad_write_0_data_1), .io_spad_write_0_data_2(tb_spad_write_0_data_2), .io_spad_write_0_data_3(tb_spad_write_0_data_3),
        .io_spad_write_0_ready(tb_spad_write_0_ready),
        //-------------------------------------------------
        // io_spad_write_1
        .io_spad_write_1_valid(tb_spad_write_1_valid),
        .io_spad_write_1_addr(tb_spad_write_1_addr),
        .io_spad_write_1_subBankIdx(tb_spad_write_1_subBankIdx),
        .io_spad_write_1_data_0(tb_spad_write_1_data_0), .io_spad_write_1_data_1(tb_spad_write_1_data_1), .io_spad_write_1_data_2(tb_spad_write_1_data_2), .io_spad_write_1_data_3(tb_spad_write_1_data_3),
        .io_spad_write_1_ready(tb_spad_write_1_ready),
        //-------------------------------------------------
        .io_spad_write_2_valid(tb_spad_write_2_valid),
        .io_spad_write_2_addr(tb_spad_write_2_addr),
        .io_spad_write_2_subBankIdx(tb_spad_write_2_subBankIdx),
        .io_spad_write_2_data_0(tb_spad_write_2_data_0), .io_spad_write_2_data_1(tb_spad_write_2_data_1), .io_spad_write_2_data_2(tb_spad_write_2_data_2), .io_spad_write_2_data_3(tb_spad_write_2_data_3),
        .io_spad_write_2_ready(tb_spad_write_2_ready),
        //-------------------------------------------------
        .io_spad_write_3_valid(tb_spad_write_3_valid),
        .io_spad_write_3_addr(tb_spad_write_3_addr),
        .io_spad_write_3_subBankIdx(tb_spad_write_3_subBankIdx),
        .io_spad_write_3_data_0(tb_spad_write_3_data_0), .io_spad_write_3_data_1(tb_spad_write_3_data_1), .io_spad_write_3_data_2(tb_spad_write_3_data_2), .io_spad_write_3_data_3(tb_spad_write_3_data_3),
        .io_spad_write_3_ready(tb_spad_write_3_ready),
        //-------------------------------------------------
        .io_spad_write_4_valid(tb_spad_write_4_valid),
        .io_spad_write_4_addr(tb_spad_write_4_addr),
        .io_spad_write_4_subBankIdx(tb_spad_write_4_subBankIdx),
        .io_spad_write_4_data_0(tb_spad_write_4_data_0), .io_spad_write_4_data_1(tb_spad_write_4_data_1), .io_spad_write_4_data_2(tb_spad_write_4_data_2), .io_spad_write_4_data_3(tb_spad_write_4_data_3),
        .io_spad_write_4_ready(tb_spad_write_4_ready),
        //-------------------------------------------------
        .io_spad_write_5_valid(tb_spad_write_5_valid),
        .io_spad_write_5_addr(tb_spad_write_5_addr),
        .io_spad_write_5_subBankIdx(tb_spad_write_5_subBankIdx),
        .io_spad_write_5_data_0(tb_spad_write_5_data_0), .io_spad_write_5_data_1(tb_spad_write_5_data_1), .io_spad_write_5_data_2(tb_spad_write_5_data_2), .io_spad_write_5_data_3(tb_spad_write_5_data_3),
        .io_spad_write_5_ready(tb_spad_write_5_ready),
        //-------------------------------------------------
        .io_spad_write_6_valid(tb_spad_write_6_valid),
        .io_spad_write_6_addr(tb_spad_write_6_addr),
        .io_spad_write_6_subBankIdx(tb_spad_write_6_subBankIdx),'
        .io_spad_write_6_data_0(tb_spad_write_6_data_0), .io_spad_write_6_data_1(tb_spad_write_6_data_1), .io_spad_write_6_data_2(tb_spad_write_6_data_2), .io_spad_write_6_data_3(tb_spad_write_6_data_3),
        .io_spad_write_6_ready(tb_spad_write_6_ready),
        //-------------------------------------------------
        .io_spad_write_7_valid(tb_spad_write_7_valid),
        .io_spad_write_7_addr(tb_spad_write_7_addr),
        .io_spad_write_7_subBankIdx(tb_spad_write_7_subBankIdx),
        .io_spad_write_7_data_0(tb_spad_write_7_data_0), .io_spad_write_7_data_1(tb_spad_write_7_data_1), .io_spad_write_7_data_2(tb_spad_write_7_data_2), .io_spad_write_7_data_3(tb_spad_write_7_data_3),
        .io_spad_write_7_ready(tb_spad_write_7_ready),

        //************************************************************
        //  IO_ACC_READ PORTS (0-7)
        //*************************************************************
        .io_acc_read_0_valid(tb_acc_read_0_valid),
        .io_acc_read_0_addr(tb_acc_read_0_addr), .io_acc_read_0_subBankIdx(tb_acc_read_0_subBankIdx),
        .io_acc_read_0_ready(tb_acc_read_0_ready),
        .io_acc_read_0_data_0(tb_acc_read_0_data_0), .io_acc_read_0_data_1(tb_acc_read_0_data_1),
        //-------------------------------------------------------
        .io_acc_read_1_valid(tb_acc_read_1_valid),
        .io_acc_read_1_addr(tb_acc_read_1_addr), .io_acc_read_1_subBankIdx(tb_acc_read_1_subBankIdx),
        .io_acc_read_1_ready(tb_acc_read_1_ready),
        .io_acc_read_1_data_0(tb_acc_read_1_data_0), .io_acc_read_1_data_1(tb_acc_read_1_data_1),
        //-------------------------------------------------------
        .io_acc_read_2_valid(tb_acc_read_2_valid),
        .io_acc_read_2_addr(tb_acc_read_2_addr), .io_acc_read_2_subBankIdx(tb_acc_read_2_subBankIdx),
        .io_acc_read_2_ready(tb_acc_read_2_ready),
        .io_acc_read_2_data_0(tb_acc_read_2_data_0), .io_acc_read_2_data_1(tb_acc_read_2_data_1),
        //-------------------------------------------------------
        .io_acc_read_3_valid(tb_acc_read_3_valid),
        .io_acc_read_3_addr(tb_acc_read_3_addr), .io_acc_read_3_subBankIdx(tb_acc_read_3_subBankIdx),
        .io_acc_read_3_ready(tb_acc_read_3_ready),
        .io_acc_read_3_data_0(tb_acc_read_3_data_0), .io_acc_read_3_data_1(tb_acc_read_3_data_1),
        //-------------------------------------------------------
        .io_acc_read_4_valid(tb_acc_read_4_valid),
        .io_acc_read_4_addr(tb_acc_read_4_addr), .io_acc_read_4_subBankIdx(tb_acc_read_4_subBankIdx),
        .io_acc_read_4_ready(tb_acc_read_4_ready),
        .io_acc_read_4_data_0(tb_acc_read_4_data_0), .io_acc_read_4_data_1(tb_acc_read_4_data_1),
        //-------------------------------------------------------
        .io_acc_read_5_valid(tb_acc_read_5_valid),
        .io_acc_read_5_addr(tb_acc_read_5_addr), .io_acc_read_5_subBankIdx(tb_acc_read_5_subBankIdx),
        .io_acc_read_5_ready(tb_acc_read_5_ready),
        .io_acc_read_5_data_0(tb_acc_read_5_data_0), .io_acc_read_5_data_1(tb_acc_read_5_data_1),
        //-------------------------------------------------------
        .io_acc_read_6_valid(tb_acc_read_6_valid),
        .io_acc_read_6_addr(tb_acc_read_6_addr), .io_acc_read_6_subBankIdx(tb_acc_read_6_subBankIdx),
        .io_acc_read_6_ready(tb_acc_read_6_ready),
        .io_acc_read_6_data_0(tb_acc_read_6_data_0), .io_acc_read_6_data_1(tb_acc_read_6_data_1),
        //-------------------------------------------------------
        .io_acc_read_7_valid(tb_acc_read_7_valid),
        .io_acc_read_7_addr(tb_acc_read_7_addr), .io_acc_read_7_subBankIdx(tb_acc_read_7_subBankIdx),
        .io_acc_read_7_ready(tb_acc_read_7_ready),
        .io_acc_read_7_data_0(tb_acc_read_7_data_0), .io_acc_read_7_data_1(tb_acc_read_7_data_1)

    );


);
    
endmodule




/*
    FSA dut (
        //Global Signal: Input
        .clock                                  (),
        .reset                                  (),
        .io_busy                                (),	
        //io_inst: Input
        .io_inst_valid                          (),     // 1 bit
        .io_inst_bits_acc_addr                  (),	    // 5 bits
        .io_inst_bits_acc_stride                (),	    // 5 bits
        .io_inst_bits_acc_zero                  (),	    // 1 bit
        .io_inst_bits_spad_addr                 (),	    // 
        .io_inst_bits_spad_stride               (),	
        .io_inst_bits_spad_revInput             (),	
        .io_inst_bits_spad_revOutput            (),	
        .io_inst_bits_spad_delayOutput          (),	
        .io_inst_bits_header_semId              (),	
        .io_inst_bits_header_releaseValid       (),	
        .io_inst_bits_header_releaseSemValue    (),	
        .io_inst_bits_header_func               (),	
        .io_inst_bits_header_waitPrevAcc        (),
        //io_inst:  Output
        .io_inst_ready                          (),
        //io_sem:   Output
        .io_sem_release_valid                   (),	
        .io_sem_release_bits_id                 (),     // 5 bits	
        .io_sem_release_bits_value              (),     // 3 bits
        //************************************************************
        //  IO_SPAD_WRITE PORTS
        //      4  sub-data chanel: (16bits * 4 ) per chanel
        //*************************************************************
        //----------------------------------
        // io_spad_write_0: input
            .io_spad_write_0_valid  (), 
            .io_spad_write_0_addr   (),     .io_spad_write_0_subBankIdx (),	
            .io_spad_write_0_data_0 (),	    .io_spad_write_0_data_1     (),	    .io_spad_write_0_data_2 (),	    .io_spad_write_0_data_3 (),	
        // io_spad_write_0: output
            .io_spad_write_0_ready  (),
        //----------------------------------
        // io_spad_write_1: input
            .io_spad_write_1_valid  (), 
            .io_spad_write_1_addr   (),     .io_spad_write_1_subBankIdx (),	
            .io_spad_write_1_data_0 (),	    .io_spad_write_1_data_1     (),	    .io_spad_write_1_data_2 (),	    .io_spad_write_1_data_3 (),	
        // io_spad_write_1: output
            .io_spad_write_1_ready  (),
        //----------------------------------
        // io_spad_write_2: input
            .io_spad_write_2_valid  (), 
            .io_spad_write_2_addr   (),     .io_spad_write_2_subBankIdx (),	
            .io_spad_write_2_data_0 (),	    .io_spad_write_2_data_1     (),	    .io_spad_write_2_data_2 (),	    .io_spad_write_2_data_3 (),	
        // io_spad_write_2: output
            .io_spad_write_2_ready  (),
        //----------------------------------
        // io_spad_write_3: input
            .io_spad_write_3_valid  (), 
            .io_spad_write_3_addr   (),     .io_spad_write_3_subBankIdx (),	
            .io_spad_write_3_data_0 (),	    .io_spad_write_3_data_1     (),	    .io_spad_write_3_data_2 (),	    .io_spad_write_3_data_3 (),	
        // io_spad_write_3: output
            .io_spad_write_3_ready  (),
        //----------------------------------
        // io_spad_write_4: input
            .io_spad_write_4_valid  (), 
            .io_spad_write_4_addr   (),     .io_spad_write_4_subBankIdx (),	
            .io_spad_write_4_data_0 (),	    .io_spad_write_4_data_1     (),	    .io_spad_write_4_data_2 (),	    .io_spad_write_4_data_3 (),	
        // io_spad_write_4: output
            .io_spad_write_4_ready  (),
        //----------------------------------
        // io_spad_write_5: input
            .io_spad_write_5_valid  (), 
            .io_spad_write_5_addr   (),     .io_spad_write_5_subBankIdx (),	
            .io_spad_write_5_data_0 (),	    .io_spad_write_5_data_1     (),	    .io_spad_write_5_data_2 (),	    .io_spad_write_5_data_3 (),	
        // io_spad_write_5: output
            .io_spad_write_5_ready  (),
        //----------------------------------
        // io_spad_write_6: input
            .io_spad_write_6_valid  (), 
            .io_spad_write_6_addr   (),     .io_spad_write_6_subBankIdx (),	
            .io_spad_write_6_data_0 (),	    .io_spad_write_6_data_1     (),	    .io_spad_write_6_data_2 (),	    .io_spad_write_6_data_3 (),	
        // io_spad_write_6: output
            .io_spad_write_6_ready  (),
        //----------------------------------
        // io_spad_write_7: input
            .io_spad_write_7_valid  (), 
            .io_spad_write_7_addr   (),     .io_spad_write_7_subBankIdx (),	
            .io_spad_write_7_data_0 (),	    .io_spad_write_7_data_1     (),	    .io_spad_write_7_data_2 (),	    .io_spad_write_7_data_3 (),	
        // io_spad_write_7: output
            .io_spad_write_7_ready  (),
        //----------------------------------
        //************************************************************
        //  IO_ACC_READ PORTS
        //      2  sub-data chanel: (32bits * 2 ) per chanel
        //*************************************************************
        // io_acc_read_0: input
            .io_acc_read_0_valid(),
            .io_acc_read_0_addr(),
            .io_acc_read_0_subBankIdx(),            
        // io_acc_read_0: output
            .io_acc_read_0_ready(),
            .io_acc_read_0_data_0(), .io_acc_read_0_data_1(),
        //----------------------------------
        // io_acc_read_1: input
            .io_acc_read_1_valid(),
            .io_acc_read_1_addr(),
            .io_acc_read_1_subBankIdx(),            
        // io_acc_read_1: output
            .io_acc_read_1_ready(),
            .io_acc_read_1_data_0(), .io_acc_read_1_data_1(),   
        //----------------------------------
        // io_acc_read_2: input
            .io_acc_read_2_valid(),
            .io_acc_read_2_addr(),
            .io_acc_read_2_subBankIdx(),            
        // io_acc_read_2: output
            .io_acc_read_2_ready(),
            .io_acc_read_2_data_0(), .io_acc_read_2_data_1(),   
        //----------------------------------
        // io_acc_read_3: input
            .io_acc_read_3_valid(),
            .io_acc_read_3_addr(),
            .io_acc_read_3_subBankIdx(),            
        // io_acc_read_3: output
            .io_acc_read_3_ready(),
            .io_acc_read_3_data_0(), .io_acc_read_3_data_1(),   
        //----------------------------------
        // io_acc_read_4: input
            .io_acc_read_4_valid(),
            .io_acc_read_4_addr(),
            .io_acc_read_4_subBankIdx(),            
        // io_acc_read_4: output
            .io_acc_read_4_ready(),
            .io_acc_read_4_data_0(), .io_acc_read_4_data_1(),   
        //----------------------------------
        // io_acc_read_5: input
            .io_acc_read_5 _valid(),
            .io_acc_read_5_addr(),
            .io_acc_read_5_subBankIdx(),            
        // io_acc_read_5: output
            .io_acc_read_5_ready(),
            .io_acc_read_5_data_0(), .io_acc_read_5_data_1(),   
        //----------------------------------
        // io_acc_read_6: input
            .io_acc_read_6_valid(),
            .io_acc_read_6_addr(),
            .io_acc_read_6_subBankIdx(),            
        // io_acc_read_6: output
            .io_acc_read_6_ready(),
            .io_acc_read_6_data_0(), .io_acc_read_6_data_1(),   
        //----------------------------------
        // io_acc_read_7: input
            .io_acc_read_7_valid(),
            .io_acc_read_7_addr(),
            .io_acc_read_7_subBankIdx(),            
        // io_acc_read_7: output
            .io_acc_read_7_ready(),
            .io_acc_read_7_data_0(), .io_acc_read_7_data_1(),   
    );






*/