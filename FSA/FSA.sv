
module FSA(	
  input         clock,	
  input         reset,	
  output        io_inst_ready,	
  input         io_inst_valid,	
  input  [4:0]  io_inst_bits_acc_addr,	
  input  [4:0]  io_inst_bits_acc_stride,	
  input         io_inst_bits_acc_zero,	
  input  [6:0]  io_inst_bits_spad_addr,	
  input  [4:0]  io_inst_bits_spad_stride,	
  input         io_inst_bits_spad_revInput,	
  input         io_inst_bits_spad_revOutput,	
  input         io_inst_bits_spad_delayOutput,	
  input  [4:0]  io_inst_bits_header_semId,	
  input         io_inst_bits_header_releaseValid,	
  input  [2:0]  io_inst_bits_header_releaseSemValue,	
  input  [4:0]  io_inst_bits_header_func,	
  input         io_inst_bits_header_waitPrevAcc,	
  output        io_sem_release_valid,	
  output [4:0]  io_sem_release_bits_id,	
  output [2:0]  io_sem_release_bits_value,	
  input         io_spad_write_0_valid,	
  input  [6:0]  io_spad_write_0_addr,	
  input  [1:0]  io_spad_write_0_subBankIdx,	
  input  [15:0] io_spad_write_0_data_0,	
  input  [15:0] io_spad_write_0_data_1,	
  input  [15:0] io_spad_write_0_data_2,	
  input  [15:0] io_spad_write_0_data_3,	
  input         io_spad_write_1_valid,	
  input  [6:0]  io_spad_write_1_addr,	
  output        io_spad_write_1_ready,	
  input  [1:0]  io_spad_write_1_subBankIdx,	
  input  [15:0] io_spad_write_1_data_0,	
  input  [15:0] io_spad_write_1_data_1,	
  input  [15:0] io_spad_write_1_data_2,	
  input  [15:0] io_spad_write_1_data_3,	
  input         io_spad_write_2_valid,	
  input  [6:0]  io_spad_write_2_addr,	
  output        io_spad_write_2_ready,	
  input  [1:0]  io_spad_write_2_subBankIdx,	
  input  [15:0] io_spad_write_2_data_0,	
  input  [15:0] io_spad_write_2_data_1,	
  input  [15:0] io_spad_write_2_data_2,	
  input  [15:0] io_spad_write_2_data_3,	
  input         io_spad_write_3_valid,	
  input  [6:0]  io_spad_write_3_addr,	
  output        io_spad_write_3_ready,	
  input  [1:0]  io_spad_write_3_subBankIdx,	
  input  [15:0] io_spad_write_3_data_0,	
  input  [15:0] io_spad_write_3_data_1,	
  input  [15:0] io_spad_write_3_data_2,	
  input  [15:0] io_spad_write_3_data_3,	
  input         io_spad_write_4_valid,	
  input  [6:0]  io_spad_write_4_addr,	
  output        io_spad_write_4_ready,	
  input  [1:0]  io_spad_write_4_subBankIdx,	
  input  [15:0] io_spad_write_4_data_0,	
  input  [15:0] io_spad_write_4_data_1,	
  input  [15:0] io_spad_write_4_data_2,	
  input  [15:0] io_spad_write_4_data_3,	
  input         io_spad_write_5_valid,	
  input  [6:0]  io_spad_write_5_addr,	
  output        io_spad_write_5_ready,	
  input  [1:0]  io_spad_write_5_subBankIdx,	
  input  [15:0] io_spad_write_5_data_0,	
  input  [15:0] io_spad_write_5_data_1,	
  input  [15:0] io_spad_write_5_data_2,	
  input  [15:0] io_spad_write_5_data_3,	
  input         io_spad_write_6_valid,	
  input  [6:0]  io_spad_write_6_addr,	
  output        io_spad_write_6_ready,	
  input  [1:0]  io_spad_write_6_subBankIdx,	
  input  [15:0] io_spad_write_6_data_0,	
  input  [15:0] io_spad_write_6_data_1,	
  input  [15:0] io_spad_write_6_data_2,	
  input  [15:0] io_spad_write_6_data_3,	
  input         io_spad_write_7_valid,	
  input  [6:0]  io_spad_write_7_addr,	
  output        io_spad_write_7_ready,	
  input  [1:0]  io_spad_write_7_subBankIdx,	
  input  [15:0] io_spad_write_7_data_0,	
  input  [15:0] io_spad_write_7_data_1,	
  input  [15:0] io_spad_write_7_data_2,	
  input  [15:0] io_spad_write_7_data_3,	
  input         io_acc_read_0_valid,	
  input  [4:0]  io_acc_read_0_addr,	
  output        io_acc_read_0_ready,	
  input  [2:0]  io_acc_read_0_subBankIdx,	
  output [31:0] io_acc_read_0_data_0,	
  output [31:0] io_acc_read_0_data_1,	
  input         io_acc_read_1_valid,	
  input  [4:0]  io_acc_read_1_addr,	
  output        io_acc_read_1_ready,	
  input  [2:0]  io_acc_read_1_subBankIdx,	
  output [31:0] io_acc_read_1_data_0,	
  output [31:0] io_acc_read_1_data_1,	
  input         io_acc_read_2_valid,	
  input  [4:0]  io_acc_read_2_addr,	
  output        io_acc_read_2_ready,	
  input  [2:0]  io_acc_read_2_subBankIdx,	
  output [31:0] io_acc_read_2_data_0,	
  output [31:0] io_acc_read_2_data_1,	
  input         io_acc_read_3_valid,	
  input  [4:0]  io_acc_read_3_addr,	
  output        io_acc_read_3_ready,	
  input  [2:0]  io_acc_read_3_subBankIdx,	
  output [31:0] io_acc_read_3_data_0,	
  output [31:0] io_acc_read_3_data_1,	
  input         io_acc_read_4_valid,	
  input  [4:0]  io_acc_read_4_addr,	
  output        io_acc_read_4_ready,	
  input  [2:0]  io_acc_read_4_subBankIdx,	
  output [31:0] io_acc_read_4_data_0,	
  output [31:0] io_acc_read_4_data_1,	
  input         io_acc_read_5_valid,	
  input  [4:0]  io_acc_read_5_addr,	
  output        io_acc_read_5_ready,	
  input  [2:0]  io_acc_read_5_subBankIdx,	
  output [31:0] io_acc_read_5_data_0,	
  output [31:0] io_acc_read_5_data_1,	
  input         io_acc_read_6_valid,	
  input  [4:0]  io_acc_read_6_addr,	
  output        io_acc_read_6_ready,	
  input  [2:0]  io_acc_read_6_subBankIdx,	
  output [31:0] io_acc_read_6_data_0,	
  output [31:0] io_acc_read_6_data_1,	
  input         io_acc_read_7_valid,	
  input  [4:0]  io_acc_read_7_addr,	
  output        io_acc_read_7_ready,	
  input  [2:0]  io_acc_read_7_subBankIdx,	
  output [31:0] io_acc_read_7_data_0,	
  output [31:0] io_acc_read_7_data_1,	
  output        io_busy	
);

  wire [31:0]     _accRAM_sram_io_fullRead_0_data_0;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_1;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_2;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_3;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_4;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_5;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_6;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_7;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_8;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_9;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_10;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_11;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_12;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_13;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_14;	
  wire [31:0]     _accRAM_sram_io_fullRead_0_data_15;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_0;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_1;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_2;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_3;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_4;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_5;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_6;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_7;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_8;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_9;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_10;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_11;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_12;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_13;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_14;	
  wire [15:0]     _spRAM_sram_io_fullRead_0_data_15;	
  wire            _accumulator_io_sram_out_0_sign;	
  wire [7:0]      _accumulator_io_sram_out_0_exp;	
  wire [22:0]     _accumulator_io_sram_out_0_mantissa;	
  wire            _accumulator_io_sram_out_1_sign;	
  wire [7:0]      _accumulator_io_sram_out_1_exp;	
  wire [22:0]     _accumulator_io_sram_out_1_mantissa;	
  wire            _accumulator_io_sram_out_2_sign;	
  wire [7:0]      _accumulator_io_sram_out_2_exp;	
  wire [22:0]     _accumulator_io_sram_out_2_mantissa;	
  wire            _accumulator_io_sram_out_3_sign;	
  wire [7:0]      _accumulator_io_sram_out_3_exp;	
  wire [22:0]     _accumulator_io_sram_out_3_mantissa;	
  wire            _accumulator_io_sram_out_4_sign;	
  wire [7:0]      _accumulator_io_sram_out_4_exp;	
  wire [22:0]     _accumulator_io_sram_out_4_mantissa;	
  wire            _accumulator_io_sram_out_5_sign;	
  wire [7:0]      _accumulator_io_sram_out_5_exp;	
  wire [22:0]     _accumulator_io_sram_out_5_mantissa;	
  wire            _accumulator_io_sram_out_6_sign;	
  wire [7:0]      _accumulator_io_sram_out_6_exp;	
  wire [22:0]     _accumulator_io_sram_out_6_mantissa;	
  wire            _accumulator_io_sram_out_7_sign;	
  wire [7:0]      _accumulator_io_sram_out_7_exp;	
  wire [22:0]     _accumulator_io_sram_out_7_mantissa;	
  wire            _accumulator_io_sram_out_8_sign;	
  wire [7:0]      _accumulator_io_sram_out_8_exp;	
  wire [22:0]     _accumulator_io_sram_out_8_mantissa;	
  wire            _accumulator_io_sram_out_9_sign;	
  wire [7:0]      _accumulator_io_sram_out_9_exp;	
  wire [22:0]     _accumulator_io_sram_out_9_mantissa;	
  wire            _accumulator_io_sram_out_10_sign;	
  wire [7:0]      _accumulator_io_sram_out_10_exp;	
  wire [22:0]     _accumulator_io_sram_out_10_mantissa;	
  wire            _accumulator_io_sram_out_11_sign;	
  wire [7:0]      _accumulator_io_sram_out_11_exp;	
  wire [22:0]     _accumulator_io_sram_out_11_mantissa;	
  wire            _accumulator_io_sram_out_12_sign;	
  wire [7:0]      _accumulator_io_sram_out_12_exp;	
  wire [22:0]     _accumulator_io_sram_out_12_mantissa;	
  wire            _accumulator_io_sram_out_13_sign;	
  wire [7:0]      _accumulator_io_sram_out_13_exp;	
  wire [22:0]     _accumulator_io_sram_out_13_mantissa;	
  wire            _accumulator_io_sram_out_14_sign;	
  wire [7:0]      _accumulator_io_sram_out_14_exp;	
  wire [22:0]     _accumulator_io_sram_out_14_mantissa;	
  wire            _accumulator_io_sram_out_15_sign;	
  wire [7:0]      _accumulator_io_sram_out_15_exp;	
  wire [22:0]     _accumulator_io_sram_out_15_mantissa;	
  wire            _sa_io_acc_out_0_bits_sign;	
  wire [7:0]      _sa_io_acc_out_0_bits_exp;	
  wire [22:0]     _sa_io_acc_out_0_bits_mantissa;	
  wire            _sa_io_acc_out_1_bits_sign;	
  wire [7:0]      _sa_io_acc_out_1_bits_exp;	
  wire [22:0]     _sa_io_acc_out_1_bits_mantissa;	
  wire            _sa_io_acc_out_2_bits_sign;	
  wire [7:0]      _sa_io_acc_out_2_bits_exp;	
  wire [22:0]     _sa_io_acc_out_2_bits_mantissa;	
  wire            _sa_io_acc_out_3_bits_sign;	
  wire [7:0]      _sa_io_acc_out_3_bits_exp;	
  wire [22:0]     _sa_io_acc_out_3_bits_mantissa;	
  wire            _sa_io_acc_out_4_bits_sign;	
  wire [7:0]      _sa_io_acc_out_4_bits_exp;	
  wire [22:0]     _sa_io_acc_out_4_bits_mantissa;	
  wire            _sa_io_acc_out_5_bits_sign;	
  wire [7:0]      _sa_io_acc_out_5_bits_exp;	
  wire [22:0]     _sa_io_acc_out_5_bits_mantissa;	
  wire            _sa_io_acc_out_6_bits_sign;	
  wire [7:0]      _sa_io_acc_out_6_bits_exp;	
  wire [22:0]     _sa_io_acc_out_6_bits_mantissa;	
  wire            _sa_io_acc_out_7_bits_sign;	
  wire [7:0]      _sa_io_acc_out_7_bits_exp;	
  wire [22:0]     _sa_io_acc_out_7_bits_mantissa;	
  wire            _sa_io_acc_out_8_bits_sign;	
  wire [7:0]      _sa_io_acc_out_8_bits_exp;	
  wire [22:0]     _sa_io_acc_out_8_bits_mantissa;	
  wire            _sa_io_acc_out_9_bits_sign;	
  wire [7:0]      _sa_io_acc_out_9_bits_exp;	
  wire [22:0]     _sa_io_acc_out_9_bits_mantissa;	
  wire            _sa_io_acc_out_10_bits_sign;	
  wire [7:0]      _sa_io_acc_out_10_bits_exp;	
  wire [22:0]     _sa_io_acc_out_10_bits_mantissa;	
  wire            _sa_io_acc_out_11_bits_sign;	
  wire [7:0]      _sa_io_acc_out_11_bits_exp;	
  wire [22:0]     _sa_io_acc_out_11_bits_mantissa;	
  wire            _sa_io_acc_out_12_bits_sign;	
  wire [7:0]      _sa_io_acc_out_12_bits_exp;	
  wire [22:0]     _sa_io_acc_out_12_bits_mantissa;	
  wire            _sa_io_acc_out_13_bits_sign;	
  wire [7:0]      _sa_io_acc_out_13_bits_exp;	
  wire [22:0]     _sa_io_acc_out_13_bits_mantissa;	
  wire            _sa_io_acc_out_14_bits_sign;	
  wire [7:0]      _sa_io_acc_out_14_bits_exp;	
  wire [22:0]     _sa_io_acc_out_14_bits_mantissa;	
  wire            _sa_io_acc_out_15_bits_sign;	
  wire [7:0]      _sa_io_acc_out_15_bits_exp;	
  wire [22:0]     _sa_io_acc_out_15_bits_mantissa;	
  wire            _outputDelayer_io_out_0_sign;	
  wire [7:0]      _outputDelayer_io_out_0_exp;	
  wire [22:0]     _outputDelayer_io_out_0_mantissa;	
  wire            _outputDelayer_io_out_1_sign;	
  wire [7:0]      _outputDelayer_io_out_1_exp;	
  wire [22:0]     _outputDelayer_io_out_1_mantissa;	
  wire            _outputDelayer_io_out_2_sign;	
  wire [7:0]      _outputDelayer_io_out_2_exp;	
  wire [22:0]     _outputDelayer_io_out_2_mantissa;	
  wire            _outputDelayer_io_out_3_sign;	
  wire [7:0]      _outputDelayer_io_out_3_exp;	
  wire [22:0]     _outputDelayer_io_out_3_mantissa;	
  wire            _outputDelayer_io_out_4_sign;	
  wire [7:0]      _outputDelayer_io_out_4_exp;	
  wire [22:0]     _outputDelayer_io_out_4_mantissa;	
  wire            _outputDelayer_io_out_5_sign;	
  wire [7:0]      _outputDelayer_io_out_5_exp;	
  wire [22:0]     _outputDelayer_io_out_5_mantissa;	
  wire            _outputDelayer_io_out_6_sign;	
  wire [7:0]      _outputDelayer_io_out_6_exp;	
  wire [22:0]     _outputDelayer_io_out_6_mantissa;	
  wire            _outputDelayer_io_out_7_sign;	
  wire [7:0]      _outputDelayer_io_out_7_exp;	
  wire [22:0]     _outputDelayer_io_out_7_mantissa;	
  wire            _outputDelayer_io_out_8_sign;	
  wire [7:0]      _outputDelayer_io_out_8_exp;	
  wire [22:0]     _outputDelayer_io_out_8_mantissa;	
  wire            _outputDelayer_io_out_9_sign;	
  wire [7:0]      _outputDelayer_io_out_9_exp;	
  wire [22:0]     _outputDelayer_io_out_9_mantissa;	
  wire            _outputDelayer_io_out_10_sign;	
  wire [7:0]      _outputDelayer_io_out_10_exp;	
  wire [22:0]     _outputDelayer_io_out_10_mantissa;	
  wire            _outputDelayer_io_out_11_sign;	
  wire [7:0]      _outputDelayer_io_out_11_exp;	
  wire [22:0]     _outputDelayer_io_out_11_mantissa;	
  wire            _outputDelayer_io_out_12_sign;	
  wire [7:0]      _outputDelayer_io_out_12_exp;	
  wire [22:0]     _outputDelayer_io_out_12_mantissa;	
  wire            _outputDelayer_io_out_13_sign;	
  wire [7:0]      _outputDelayer_io_out_13_exp;	
  wire [22:0]     _outputDelayer_io_out_13_mantissa;	
  wire            _outputDelayer_io_out_14_sign;	
  wire [7:0]      _outputDelayer_io_out_14_exp;	
  wire [22:0]     _outputDelayer_io_out_14_mantissa;	
  wire            _outputDelayer_io_out_15_sign;	
  wire [7:0]      _outputDelayer_io_out_15_exp;	
  wire [22:0]     _outputDelayer_io_out_15_mantissa;	
  wire            _inputDelayer_io_out_0_sign;	
  wire [4:0]      _inputDelayer_io_out_0_exp;	
  wire [9:0]      _inputDelayer_io_out_0_mantissa;	
  wire            _inputDelayer_io_out_1_sign;	
  wire [4:0]      _inputDelayer_io_out_1_exp;	
  wire [9:0]      _inputDelayer_io_out_1_mantissa;	
  wire            _inputDelayer_io_out_2_sign;	
  wire [4:0]      _inputDelayer_io_out_2_exp;	
  wire [9:0]      _inputDelayer_io_out_2_mantissa;	
  wire            _inputDelayer_io_out_3_sign;	
  wire [4:0]      _inputDelayer_io_out_3_exp;	
  wire [9:0]      _inputDelayer_io_out_3_mantissa;	
  wire            _inputDelayer_io_out_4_sign;	
  wire [4:0]      _inputDelayer_io_out_4_exp;	
  wire [9:0]      _inputDelayer_io_out_4_mantissa;	
  wire            _inputDelayer_io_out_5_sign;	
  wire [4:0]      _inputDelayer_io_out_5_exp;	
  wire [9:0]      _inputDelayer_io_out_5_mantissa;	
  wire            _inputDelayer_io_out_6_sign;	
  wire [4:0]      _inputDelayer_io_out_6_exp;	
  wire [9:0]      _inputDelayer_io_out_6_mantissa;	
  wire            _inputDelayer_io_out_7_sign;	
  wire [4:0]      _inputDelayer_io_out_7_exp;	
  wire [9:0]      _inputDelayer_io_out_7_mantissa;	
  wire            _inputDelayer_io_out_8_sign;	
  wire [4:0]      _inputDelayer_io_out_8_exp;	
  wire [9:0]      _inputDelayer_io_out_8_mantissa;	
  wire            _inputDelayer_io_out_9_sign;	
  wire [4:0]      _inputDelayer_io_out_9_exp;	
  wire [9:0]      _inputDelayer_io_out_9_mantissa;	
  wire            _inputDelayer_io_out_10_sign;	
  wire [4:0]      _inputDelayer_io_out_10_exp;	
  wire [9:0]      _inputDelayer_io_out_10_mantissa;	
  wire            _inputDelayer_io_out_11_sign;	
  wire [4:0]      _inputDelayer_io_out_11_exp;	
  wire [9:0]      _inputDelayer_io_out_11_mantissa;	
  wire            _inputDelayer_io_out_12_sign;	
  wire [4:0]      _inputDelayer_io_out_12_exp;	
  wire [9:0]      _inputDelayer_io_out_12_mantissa;	
  wire            _inputDelayer_io_out_13_sign;	
  wire [4:0]      _inputDelayer_io_out_13_exp;	
  wire [9:0]      _inputDelayer_io_out_13_mantissa;	
  wire            _inputDelayer_io_out_14_sign;	
  wire [4:0]      _inputDelayer_io_out_14_exp;	
  wire [9:0]      _inputDelayer_io_out_14_mantissa;	
  wire            _inputDelayer_io_out_15_sign;	
  wire [4:0]      _inputDelayer_io_out_15_exp;	
  wire [9:0]      _inputDelayer_io_out_15_mantissa;	
  wire            _mxControl_io_sp_read_valid;	
  wire            _mxControl_io_sp_read_bits_is_constant;	
  wire [6:0]      _mxControl_io_sp_read_bits_addr;	
  wire            _mxControl_io_sp_read_bits_rev_sram_out;	
  wire            _mxControl_io_sp_read_bits_delay_sram_out;	
  wire            _mxControl_io_sp_read_bits_rev_delayer_out;	
  wire            _mxControl_io_acc_read_valid;	
  wire            _mxControl_io_acc_read_bits_is_constant;	
  wire [4:0]      _mxControl_io_acc_read_bits_addr;	
  wire            _mxControl_io_acc_read_bits_rmw;	
  wire            _mxControl_io_cmp_ctrl_valid;	
  wire [2:0]      _mxControl_io_cmp_ctrl_bits_cmd;	
  wire            _mxControl_io_pe_ctrl_0_valid;	
  wire            _mxControl_io_pe_ctrl_0_bits_mac;	
  wire            _mxControl_io_pe_ctrl_0_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_0_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_0_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_0_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_0_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_0_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_0_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_0_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_1_valid;	
  wire            _mxControl_io_pe_ctrl_1_bits_mac;	
  wire            _mxControl_io_pe_ctrl_1_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_1_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_1_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_1_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_1_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_1_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_1_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_1_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_2_valid;	
  wire            _mxControl_io_pe_ctrl_2_bits_mac;	
  wire            _mxControl_io_pe_ctrl_2_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_2_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_2_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_2_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_2_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_2_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_2_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_2_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_3_valid;	
  wire            _mxControl_io_pe_ctrl_3_bits_mac;	
  wire            _mxControl_io_pe_ctrl_3_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_3_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_3_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_3_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_3_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_3_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_3_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_3_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_4_valid;	
  wire            _mxControl_io_pe_ctrl_4_bits_mac;	
  wire            _mxControl_io_pe_ctrl_4_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_4_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_4_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_4_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_4_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_4_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_4_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_4_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_5_valid;	
  wire            _mxControl_io_pe_ctrl_5_bits_mac;	
  wire            _mxControl_io_pe_ctrl_5_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_5_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_5_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_5_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_5_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_5_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_5_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_5_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_6_valid;	
  wire            _mxControl_io_pe_ctrl_6_bits_mac;	
  wire            _mxControl_io_pe_ctrl_6_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_6_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_6_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_6_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_6_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_6_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_6_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_6_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_7_valid;	
  wire            _mxControl_io_pe_ctrl_7_bits_mac;	
  wire            _mxControl_io_pe_ctrl_7_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_7_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_7_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_7_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_7_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_7_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_7_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_7_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_8_valid;	
  wire            _mxControl_io_pe_ctrl_8_bits_mac;	
  wire            _mxControl_io_pe_ctrl_8_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_8_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_8_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_8_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_8_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_8_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_8_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_8_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_9_valid;	
  wire            _mxControl_io_pe_ctrl_9_bits_mac;	
  wire            _mxControl_io_pe_ctrl_9_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_9_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_9_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_9_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_9_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_9_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_9_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_9_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_10_valid;	
  wire            _mxControl_io_pe_ctrl_10_bits_mac;	
  wire            _mxControl_io_pe_ctrl_10_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_10_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_10_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_10_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_10_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_10_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_10_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_10_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_11_valid;	
  wire            _mxControl_io_pe_ctrl_11_bits_mac;	
  wire            _mxControl_io_pe_ctrl_11_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_11_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_11_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_11_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_11_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_11_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_11_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_11_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_12_valid;	
  wire            _mxControl_io_pe_ctrl_12_bits_mac;	
  wire            _mxControl_io_pe_ctrl_12_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_12_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_12_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_12_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_12_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_12_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_12_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_12_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_13_valid;	
  wire            _mxControl_io_pe_ctrl_13_bits_mac;	
  wire            _mxControl_io_pe_ctrl_13_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_13_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_13_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_13_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_13_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_13_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_13_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_13_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_14_valid;	
  wire            _mxControl_io_pe_ctrl_14_bits_mac;	
  wire            _mxControl_io_pe_ctrl_14_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_14_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_14_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_14_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_14_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_14_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_14_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_14_bits_exp2;	
  wire            _mxControl_io_pe_ctrl_15_valid;	
  wire            _mxControl_io_pe_ctrl_15_bits_mac;	
  wire            _mxControl_io_pe_ctrl_15_bits_acc_ui;	
  wire            _mxControl_io_pe_ctrl_15_bits_load_reg_li;	
  wire            _mxControl_io_pe_ctrl_15_bits_load_reg_ui;	
  wire            _mxControl_io_pe_ctrl_15_bits_flow_lr;	
  wire            _mxControl_io_pe_ctrl_15_bits_flow_ud;	
  wire            _mxControl_io_pe_ctrl_15_bits_flow_du;	
  wire            _mxControl_io_pe_ctrl_15_bits_update_reg;	
  wire            _mxControl_io_pe_ctrl_15_bits_exp2;	
  wire            _mxControl_io_acc_ctrl_valid;	
  wire [2:0]      _mxControl_io_acc_ctrl_bits_cmd;	
  wire [0:0][9:0] _GEN = '{10'h0};
  wire [0:0][4:0] _GEN_0 = '{5'hF};
  wire [7:0][9:0] _GEN_1 = '{10'h1CB, 10'h251, 10'h2E3, 10'h383, 10'h19, 10'h77, 10'hDF, 10'h150};
  wire [7:0][4:0] _GEN_2 = '{5'hD, 5'hD, 5'hD, 5'hD, 5'hE, 5'hE, 5'hE, 5'hE};
  reg  [2:0]      exp2PwlCounter_value;	
  reg  [1:0]      spConstSel;	
  reg             REG_8;	
  reg             inputDelayer_io_in_valid_REG;	
  reg             REG_9;	
  wire [3:0][4:0] _GEN_3 = {_GEN_0, {{_GEN_2[exp2PwlCounter_value]}, {5'hD}, {5'hF}}};	
  wire [4:0]      _GEN_4 = _GEN_3[spConstSel];	
  wire [3:0][9:0] _GEN_5 = {_GEN, {{_GEN_1[exp2PwlCounter_value]}, {10'h1C5}, {10'h0}}};	
  wire [9:0]      _GEN_6 = _GEN_5[spConstSel];	
  reg             inputDelayer_io_in_bits_rev_input_REG;	
  reg             inputDelayer_io_in_bits_delay_output_REG;	
  reg             inputDelayer_io_in_bits_rev_output_REG;	
  reg             REG_10;	
  reg             sram_accRAM_fullWrite_0_valid_REG;	
  reg  [4:0]      sram_accRAM_fullWrite_0_addr_REG;	
  wire            _spConstSel_T_1 = _mxControl_io_sp_read_valid & _mxControl_io_sp_read_bits_is_constant;	
  wire z_test;
  assign z_test = REG_8;
  always @(posedge clock) begin	
    if (reset) begin	
      exp2PwlCounter_value <= 3'h0;	
      REG_8 <= 1'h0;	
      inputDelayer_io_in_valid_REG <= 1'h0;	
      sram_accRAM_fullWrite_0_valid_REG <= 1'h0;	
    end
    else begin	
      if (REG_8)	
        exp2PwlCounter_value <= exp2PwlCounter_value + 3'h1;	
      REG_8 <= _spConstSel_T_1 & _mxControl_io_sp_read_bits_addr[1:0] == 2'h2;	
      inputDelayer_io_in_valid_REG <= _mxControl_io_sp_read_valid;	
      sram_accRAM_fullWrite_0_valid_REG <= _mxControl_io_acc_read_valid & _mxControl_io_acc_read_bits_rmw;	
    end
    if (_spConstSel_T_1)	
      spConstSel <= _mxControl_io_sp_read_bits_addr[1:0];	
    REG_9 <= _mxControl_io_sp_read_bits_is_constant;	
    inputDelayer_io_in_bits_rev_input_REG <= _mxControl_io_sp_read_bits_rev_sram_out;	
    inputDelayer_io_in_bits_delay_output_REG <= _mxControl_io_sp_read_bits_delay_sram_out;	
    inputDelayer_io_in_bits_rev_output_REG <= _mxControl_io_sp_read_bits_rev_delayer_out;	
    REG_10 <= _mxControl_io_acc_read_bits_is_constant;	
    sram_accRAM_fullWrite_0_addr_REG <= _mxControl_io_acc_read_bits_addr;	
  end // always @(posedge)
  
  MatrixEngineController mxControl (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_ready                       (io_inst_ready),
    .io_in_valid                       (io_inst_valid),
    .io_in_bits_acc_addr               (io_inst_bits_acc_addr),
    .io_in_bits_acc_stride             (io_inst_bits_acc_stride),
    .io_in_bits_acc_zero               (io_inst_bits_acc_zero),
    .io_in_bits_spad_addr              (io_inst_bits_spad_addr),
    .io_in_bits_spad_stride            (io_inst_bits_spad_stride),
    .io_in_bits_spad_revInput          (io_inst_bits_spad_revInput),
    .io_in_bits_spad_revOutput         (io_inst_bits_spad_revOutput),
    .io_in_bits_spad_delayOutput       (io_inst_bits_spad_delayOutput),
    .io_in_bits_header_semId           (io_inst_bits_header_semId),
    .io_in_bits_header_releaseValid    (io_inst_bits_header_releaseValid),
    .io_in_bits_header_releaseSemValue (io_inst_bits_header_releaseSemValue),
    .io_in_bits_header_func            (io_inst_bits_header_func),
    .io_in_bits_header_waitPrevAcc     (io_inst_bits_header_waitPrevAcc),
    .io_sp_read_valid                  (_mxControl_io_sp_read_valid),
    .io_sp_read_bits_is_constant       (_mxControl_io_sp_read_bits_is_constant),
    .io_sp_read_bits_addr              (_mxControl_io_sp_read_bits_addr),
    .io_sp_read_bits_rev_sram_out      (_mxControl_io_sp_read_bits_rev_sram_out),
    .io_sp_read_bits_delay_sram_out    (_mxControl_io_sp_read_bits_delay_sram_out),
    .io_sp_read_bits_rev_delayer_out   (_mxControl_io_sp_read_bits_rev_delayer_out),
    .io_acc_read_valid                 (_mxControl_io_acc_read_valid),
    .io_acc_read_bits_is_constant      (_mxControl_io_acc_read_bits_is_constant),
    .io_acc_read_bits_addr             (_mxControl_io_acc_read_bits_addr),
    .io_acc_read_bits_rmw              (_mxControl_io_acc_read_bits_rmw),
    .io_cmp_ctrl_valid                 (_mxControl_io_cmp_ctrl_valid),
    .io_cmp_ctrl_bits_cmd              (_mxControl_io_cmp_ctrl_bits_cmd),
    .io_pe_ctrl_0_valid                (_mxControl_io_pe_ctrl_0_valid),
    .io_pe_ctrl_0_bits_mac             (_mxControl_io_pe_ctrl_0_bits_mac),
    .io_pe_ctrl_0_bits_acc_ui          (_mxControl_io_pe_ctrl_0_bits_acc_ui),
    .io_pe_ctrl_0_bits_load_reg_li     (_mxControl_io_pe_ctrl_0_bits_load_reg_li),
    .io_pe_ctrl_0_bits_load_reg_ui     (_mxControl_io_pe_ctrl_0_bits_load_reg_ui),
    .io_pe_ctrl_0_bits_flow_lr         (_mxControl_io_pe_ctrl_0_bits_flow_lr),
    .io_pe_ctrl_0_bits_flow_ud         (_mxControl_io_pe_ctrl_0_bits_flow_ud),
    .io_pe_ctrl_0_bits_flow_du         (_mxControl_io_pe_ctrl_0_bits_flow_du),
    .io_pe_ctrl_0_bits_update_reg      (_mxControl_io_pe_ctrl_0_bits_update_reg),
    .io_pe_ctrl_0_bits_exp2            (_mxControl_io_pe_ctrl_0_bits_exp2),
    .io_pe_ctrl_1_valid                (_mxControl_io_pe_ctrl_1_valid),
    .io_pe_ctrl_1_bits_mac             (_mxControl_io_pe_ctrl_1_bits_mac),
    .io_pe_ctrl_1_bits_acc_ui          (_mxControl_io_pe_ctrl_1_bits_acc_ui),
    .io_pe_ctrl_1_bits_load_reg_li     (_mxControl_io_pe_ctrl_1_bits_load_reg_li),
    .io_pe_ctrl_1_bits_load_reg_ui     (_mxControl_io_pe_ctrl_1_bits_load_reg_ui),
    .io_pe_ctrl_1_bits_flow_lr         (_mxControl_io_pe_ctrl_1_bits_flow_lr),
    .io_pe_ctrl_1_bits_flow_ud         (_mxControl_io_pe_ctrl_1_bits_flow_ud),
    .io_pe_ctrl_1_bits_flow_du         (_mxControl_io_pe_ctrl_1_bits_flow_du),
    .io_pe_ctrl_1_bits_update_reg      (_mxControl_io_pe_ctrl_1_bits_update_reg),
    .io_pe_ctrl_1_bits_exp2            (_mxControl_io_pe_ctrl_1_bits_exp2),
    .io_pe_ctrl_2_valid                (_mxControl_io_pe_ctrl_2_valid),
    .io_pe_ctrl_2_bits_mac             (_mxControl_io_pe_ctrl_2_bits_mac),
    .io_pe_ctrl_2_bits_acc_ui          (_mxControl_io_pe_ctrl_2_bits_acc_ui),
    .io_pe_ctrl_2_bits_load_reg_li     (_mxControl_io_pe_ctrl_2_bits_load_reg_li),
    .io_pe_ctrl_2_bits_load_reg_ui     (_mxControl_io_pe_ctrl_2_bits_load_reg_ui),
    .io_pe_ctrl_2_bits_flow_lr         (_mxControl_io_pe_ctrl_2_bits_flow_lr),
    .io_pe_ctrl_2_bits_flow_ud         (_mxControl_io_pe_ctrl_2_bits_flow_ud),
    .io_pe_ctrl_2_bits_flow_du         (_mxControl_io_pe_ctrl_2_bits_flow_du),
    .io_pe_ctrl_2_bits_update_reg      (_mxControl_io_pe_ctrl_2_bits_update_reg),
    .io_pe_ctrl_2_bits_exp2            (_mxControl_io_pe_ctrl_2_bits_exp2),
    .io_pe_ctrl_3_valid                (_mxControl_io_pe_ctrl_3_valid),
    .io_pe_ctrl_3_bits_mac             (_mxControl_io_pe_ctrl_3_bits_mac),
    .io_pe_ctrl_3_bits_acc_ui          (_mxControl_io_pe_ctrl_3_bits_acc_ui),
    .io_pe_ctrl_3_bits_load_reg_li     (_mxControl_io_pe_ctrl_3_bits_load_reg_li),
    .io_pe_ctrl_3_bits_load_reg_ui     (_mxControl_io_pe_ctrl_3_bits_load_reg_ui),
    .io_pe_ctrl_3_bits_flow_lr         (_mxControl_io_pe_ctrl_3_bits_flow_lr),
    .io_pe_ctrl_3_bits_flow_ud         (_mxControl_io_pe_ctrl_3_bits_flow_ud),
    .io_pe_ctrl_3_bits_flow_du         (_mxControl_io_pe_ctrl_3_bits_flow_du),
    .io_pe_ctrl_3_bits_update_reg      (_mxControl_io_pe_ctrl_3_bits_update_reg),
    .io_pe_ctrl_3_bits_exp2            (_mxControl_io_pe_ctrl_3_bits_exp2),
    .io_pe_ctrl_4_valid                (_mxControl_io_pe_ctrl_4_valid),
    .io_pe_ctrl_4_bits_mac             (_mxControl_io_pe_ctrl_4_bits_mac),
    .io_pe_ctrl_4_bits_acc_ui          (_mxControl_io_pe_ctrl_4_bits_acc_ui),
    .io_pe_ctrl_4_bits_load_reg_li     (_mxControl_io_pe_ctrl_4_bits_load_reg_li),
    .io_pe_ctrl_4_bits_load_reg_ui     (_mxControl_io_pe_ctrl_4_bits_load_reg_ui),
    .io_pe_ctrl_4_bits_flow_lr         (_mxControl_io_pe_ctrl_4_bits_flow_lr),
    .io_pe_ctrl_4_bits_flow_ud         (_mxControl_io_pe_ctrl_4_bits_flow_ud),
    .io_pe_ctrl_4_bits_flow_du         (_mxControl_io_pe_ctrl_4_bits_flow_du),
    .io_pe_ctrl_4_bits_update_reg      (_mxControl_io_pe_ctrl_4_bits_update_reg),
    .io_pe_ctrl_4_bits_exp2            (_mxControl_io_pe_ctrl_4_bits_exp2),
    .io_pe_ctrl_5_valid                (_mxControl_io_pe_ctrl_5_valid),
    .io_pe_ctrl_5_bits_mac             (_mxControl_io_pe_ctrl_5_bits_mac),
    .io_pe_ctrl_5_bits_acc_ui          (_mxControl_io_pe_ctrl_5_bits_acc_ui),
    .io_pe_ctrl_5_bits_load_reg_li     (_mxControl_io_pe_ctrl_5_bits_load_reg_li),
    .io_pe_ctrl_5_bits_load_reg_ui     (_mxControl_io_pe_ctrl_5_bits_load_reg_ui),
    .io_pe_ctrl_5_bits_flow_lr         (_mxControl_io_pe_ctrl_5_bits_flow_lr),
    .io_pe_ctrl_5_bits_flow_ud         (_mxControl_io_pe_ctrl_5_bits_flow_ud),
    .io_pe_ctrl_5_bits_flow_du         (_mxControl_io_pe_ctrl_5_bits_flow_du),
    .io_pe_ctrl_5_bits_update_reg      (_mxControl_io_pe_ctrl_5_bits_update_reg),
    .io_pe_ctrl_5_bits_exp2            (_mxControl_io_pe_ctrl_5_bits_exp2),
    .io_pe_ctrl_6_valid                (_mxControl_io_pe_ctrl_6_valid),
    .io_pe_ctrl_6_bits_mac             (_mxControl_io_pe_ctrl_6_bits_mac),
    .io_pe_ctrl_6_bits_acc_ui          (_mxControl_io_pe_ctrl_6_bits_acc_ui),
    .io_pe_ctrl_6_bits_load_reg_li     (_mxControl_io_pe_ctrl_6_bits_load_reg_li),
    .io_pe_ctrl_6_bits_load_reg_ui     (_mxControl_io_pe_ctrl_6_bits_load_reg_ui),
    .io_pe_ctrl_6_bits_flow_lr         (_mxControl_io_pe_ctrl_6_bits_flow_lr),
    .io_pe_ctrl_6_bits_flow_ud         (_mxControl_io_pe_ctrl_6_bits_flow_ud),
    .io_pe_ctrl_6_bits_flow_du         (_mxControl_io_pe_ctrl_6_bits_flow_du),
    .io_pe_ctrl_6_bits_update_reg      (_mxControl_io_pe_ctrl_6_bits_update_reg),
    .io_pe_ctrl_6_bits_exp2            (_mxControl_io_pe_ctrl_6_bits_exp2),
    .io_pe_ctrl_7_valid                (_mxControl_io_pe_ctrl_7_valid),
    .io_pe_ctrl_7_bits_mac             (_mxControl_io_pe_ctrl_7_bits_mac),
    .io_pe_ctrl_7_bits_acc_ui          (_mxControl_io_pe_ctrl_7_bits_acc_ui),
    .io_pe_ctrl_7_bits_load_reg_li     (_mxControl_io_pe_ctrl_7_bits_load_reg_li),
    .io_pe_ctrl_7_bits_load_reg_ui     (_mxControl_io_pe_ctrl_7_bits_load_reg_ui),
    .io_pe_ctrl_7_bits_flow_lr         (_mxControl_io_pe_ctrl_7_bits_flow_lr),
    .io_pe_ctrl_7_bits_flow_ud         (_mxControl_io_pe_ctrl_7_bits_flow_ud),
    .io_pe_ctrl_7_bits_flow_du         (_mxControl_io_pe_ctrl_7_bits_flow_du),
    .io_pe_ctrl_7_bits_update_reg      (_mxControl_io_pe_ctrl_7_bits_update_reg),
    .io_pe_ctrl_7_bits_exp2            (_mxControl_io_pe_ctrl_7_bits_exp2),
    .io_pe_ctrl_8_valid                (_mxControl_io_pe_ctrl_8_valid),
    .io_pe_ctrl_8_bits_mac             (_mxControl_io_pe_ctrl_8_bits_mac),
    .io_pe_ctrl_8_bits_acc_ui          (_mxControl_io_pe_ctrl_8_bits_acc_ui),
    .io_pe_ctrl_8_bits_load_reg_li     (_mxControl_io_pe_ctrl_8_bits_load_reg_li),
    .io_pe_ctrl_8_bits_load_reg_ui     (_mxControl_io_pe_ctrl_8_bits_load_reg_ui),
    .io_pe_ctrl_8_bits_flow_lr         (_mxControl_io_pe_ctrl_8_bits_flow_lr),
    .io_pe_ctrl_8_bits_flow_ud         (_mxControl_io_pe_ctrl_8_bits_flow_ud),
    .io_pe_ctrl_8_bits_flow_du         (_mxControl_io_pe_ctrl_8_bits_flow_du),
    .io_pe_ctrl_8_bits_update_reg      (_mxControl_io_pe_ctrl_8_bits_update_reg),
    .io_pe_ctrl_8_bits_exp2            (_mxControl_io_pe_ctrl_8_bits_exp2),
    .io_pe_ctrl_9_valid                (_mxControl_io_pe_ctrl_9_valid),
    .io_pe_ctrl_9_bits_mac             (_mxControl_io_pe_ctrl_9_bits_mac),
    .io_pe_ctrl_9_bits_acc_ui          (_mxControl_io_pe_ctrl_9_bits_acc_ui),
    .io_pe_ctrl_9_bits_load_reg_li     (_mxControl_io_pe_ctrl_9_bits_load_reg_li),
    .io_pe_ctrl_9_bits_load_reg_ui     (_mxControl_io_pe_ctrl_9_bits_load_reg_ui),
    .io_pe_ctrl_9_bits_flow_lr         (_mxControl_io_pe_ctrl_9_bits_flow_lr),
    .io_pe_ctrl_9_bits_flow_ud         (_mxControl_io_pe_ctrl_9_bits_flow_ud),
    .io_pe_ctrl_9_bits_flow_du         (_mxControl_io_pe_ctrl_9_bits_flow_du),
    .io_pe_ctrl_9_bits_update_reg      (_mxControl_io_pe_ctrl_9_bits_update_reg),
    .io_pe_ctrl_9_bits_exp2            (_mxControl_io_pe_ctrl_9_bits_exp2),
    .io_pe_ctrl_10_valid               (_mxControl_io_pe_ctrl_10_valid),
    .io_pe_ctrl_10_bits_mac            (_mxControl_io_pe_ctrl_10_bits_mac),
    .io_pe_ctrl_10_bits_acc_ui         (_mxControl_io_pe_ctrl_10_bits_acc_ui),
    .io_pe_ctrl_10_bits_load_reg_li    (_mxControl_io_pe_ctrl_10_bits_load_reg_li),
    .io_pe_ctrl_10_bits_load_reg_ui    (_mxControl_io_pe_ctrl_10_bits_load_reg_ui),
    .io_pe_ctrl_10_bits_flow_lr        (_mxControl_io_pe_ctrl_10_bits_flow_lr),
    .io_pe_ctrl_10_bits_flow_ud        (_mxControl_io_pe_ctrl_10_bits_flow_ud),
    .io_pe_ctrl_10_bits_flow_du        (_mxControl_io_pe_ctrl_10_bits_flow_du),
    .io_pe_ctrl_10_bits_update_reg     (_mxControl_io_pe_ctrl_10_bits_update_reg),
    .io_pe_ctrl_10_bits_exp2           (_mxControl_io_pe_ctrl_10_bits_exp2),
    .io_pe_ctrl_11_valid               (_mxControl_io_pe_ctrl_11_valid),
    .io_pe_ctrl_11_bits_mac            (_mxControl_io_pe_ctrl_11_bits_mac),
    .io_pe_ctrl_11_bits_acc_ui         (_mxControl_io_pe_ctrl_11_bits_acc_ui),
    .io_pe_ctrl_11_bits_load_reg_li    (_mxControl_io_pe_ctrl_11_bits_load_reg_li),
    .io_pe_ctrl_11_bits_load_reg_ui    (_mxControl_io_pe_ctrl_11_bits_load_reg_ui),
    .io_pe_ctrl_11_bits_flow_lr        (_mxControl_io_pe_ctrl_11_bits_flow_lr),
    .io_pe_ctrl_11_bits_flow_ud        (_mxControl_io_pe_ctrl_11_bits_flow_ud),
    .io_pe_ctrl_11_bits_flow_du        (_mxControl_io_pe_ctrl_11_bits_flow_du),
    .io_pe_ctrl_11_bits_update_reg     (_mxControl_io_pe_ctrl_11_bits_update_reg),
    .io_pe_ctrl_11_bits_exp2           (_mxControl_io_pe_ctrl_11_bits_exp2),
    .io_pe_ctrl_12_valid               (_mxControl_io_pe_ctrl_12_valid),
    .io_pe_ctrl_12_bits_mac            (_mxControl_io_pe_ctrl_12_bits_mac),
    .io_pe_ctrl_12_bits_acc_ui         (_mxControl_io_pe_ctrl_12_bits_acc_ui),
    .io_pe_ctrl_12_bits_load_reg_li    (_mxControl_io_pe_ctrl_12_bits_load_reg_li),
    .io_pe_ctrl_12_bits_load_reg_ui    (_mxControl_io_pe_ctrl_12_bits_load_reg_ui),
    .io_pe_ctrl_12_bits_flow_lr        (_mxControl_io_pe_ctrl_12_bits_flow_lr),
    .io_pe_ctrl_12_bits_flow_ud        (_mxControl_io_pe_ctrl_12_bits_flow_ud),
    .io_pe_ctrl_12_bits_flow_du        (_mxControl_io_pe_ctrl_12_bits_flow_du),
    .io_pe_ctrl_12_bits_update_reg     (_mxControl_io_pe_ctrl_12_bits_update_reg),
    .io_pe_ctrl_12_bits_exp2           (_mxControl_io_pe_ctrl_12_bits_exp2),
    .io_pe_ctrl_13_valid               (_mxControl_io_pe_ctrl_13_valid),
    .io_pe_ctrl_13_bits_mac            (_mxControl_io_pe_ctrl_13_bits_mac),
    .io_pe_ctrl_13_bits_acc_ui         (_mxControl_io_pe_ctrl_13_bits_acc_ui),
    .io_pe_ctrl_13_bits_load_reg_li    (_mxControl_io_pe_ctrl_13_bits_load_reg_li),
    .io_pe_ctrl_13_bits_load_reg_ui    (_mxControl_io_pe_ctrl_13_bits_load_reg_ui),
    .io_pe_ctrl_13_bits_flow_lr        (_mxControl_io_pe_ctrl_13_bits_flow_lr),
    .io_pe_ctrl_13_bits_flow_ud        (_mxControl_io_pe_ctrl_13_bits_flow_ud),
    .io_pe_ctrl_13_bits_flow_du        (_mxControl_io_pe_ctrl_13_bits_flow_du),
    .io_pe_ctrl_13_bits_update_reg     (_mxControl_io_pe_ctrl_13_bits_update_reg),
    .io_pe_ctrl_13_bits_exp2           (_mxControl_io_pe_ctrl_13_bits_exp2),
    .io_pe_ctrl_14_valid               (_mxControl_io_pe_ctrl_14_valid),
    .io_pe_ctrl_14_bits_mac            (_mxControl_io_pe_ctrl_14_bits_mac),
    .io_pe_ctrl_14_bits_acc_ui         (_mxControl_io_pe_ctrl_14_bits_acc_ui),
    .io_pe_ctrl_14_bits_load_reg_li    (_mxControl_io_pe_ctrl_14_bits_load_reg_li),
    .io_pe_ctrl_14_bits_load_reg_ui    (_mxControl_io_pe_ctrl_14_bits_load_reg_ui),
    .io_pe_ctrl_14_bits_flow_lr        (_mxControl_io_pe_ctrl_14_bits_flow_lr),
    .io_pe_ctrl_14_bits_flow_ud        (_mxControl_io_pe_ctrl_14_bits_flow_ud),
    .io_pe_ctrl_14_bits_flow_du        (_mxControl_io_pe_ctrl_14_bits_flow_du),
    .io_pe_ctrl_14_bits_update_reg     (_mxControl_io_pe_ctrl_14_bits_update_reg),
    .io_pe_ctrl_14_bits_exp2           (_mxControl_io_pe_ctrl_14_bits_exp2),
    .io_pe_ctrl_15_valid               (_mxControl_io_pe_ctrl_15_valid),
    .io_pe_ctrl_15_bits_mac            (_mxControl_io_pe_ctrl_15_bits_mac),
    .io_pe_ctrl_15_bits_acc_ui         (_mxControl_io_pe_ctrl_15_bits_acc_ui),
    .io_pe_ctrl_15_bits_load_reg_li    (_mxControl_io_pe_ctrl_15_bits_load_reg_li),
    .io_pe_ctrl_15_bits_load_reg_ui    (_mxControl_io_pe_ctrl_15_bits_load_reg_ui),
    .io_pe_ctrl_15_bits_flow_lr        (_mxControl_io_pe_ctrl_15_bits_flow_lr),
    .io_pe_ctrl_15_bits_flow_ud        (_mxControl_io_pe_ctrl_15_bits_flow_ud),
    .io_pe_ctrl_15_bits_flow_du        (_mxControl_io_pe_ctrl_15_bits_flow_du),
    .io_pe_ctrl_15_bits_update_reg     (_mxControl_io_pe_ctrl_15_bits_update_reg),
    .io_pe_ctrl_15_bits_exp2           (_mxControl_io_pe_ctrl_15_bits_exp2),
    .io_acc_ctrl_valid                 (_mxControl_io_acc_ctrl_valid),
    .io_acc_ctrl_bits_cmd              (_mxControl_io_acc_ctrl_bits_cmd),
    .io_sem_release_valid              (io_sem_release_valid),
    .io_sem_release_bits_id            (io_sem_release_bits_id),
    .io_sem_release_bits_value         (io_sem_release_bits_value),
    .io_busy                           (io_busy)
  );	
  InputDelayer inputDelayer (	
    .clock                       (clock),
    .io_in_valid                 (inputDelayer_io_in_valid_REG),	
    .io_in_bits_data_0_sign      (~REG_9 & _spRAM_sram_io_fullRead_0_data_0[15]),	
    .io_in_bits_data_0_exp       (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_0[14:10]),	
    .io_in_bits_data_0_mantissa  (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_0[9:0]),	
    .io_in_bits_data_1_sign      (~REG_9 & _spRAM_sram_io_fullRead_0_data_1[15]),	
    .io_in_bits_data_1_exp       (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_1[14:10]),	
    .io_in_bits_data_1_mantissa  (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_1[9:0]),	
    .io_in_bits_data_2_sign      (~REG_9 & _spRAM_sram_io_fullRead_0_data_2[15]),	
    .io_in_bits_data_2_exp       (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_2[14:10]),	
    .io_in_bits_data_2_mantissa  (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_2[9:0]),	
    .io_in_bits_data_3_sign      (~REG_9 & _spRAM_sram_io_fullRead_0_data_3[15]),	
    .io_in_bits_data_3_exp       (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_3[14:10]),	
    .io_in_bits_data_3_mantissa  (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_3[9:0]),	
    .io_in_bits_data_4_sign      (~REG_9 & _spRAM_sram_io_fullRead_0_data_4[15]),	
    .io_in_bits_data_4_exp       (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_4[14:10]),	
    .io_in_bits_data_4_mantissa  (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_4[9:0]),	
    .io_in_bits_data_5_sign      (~REG_9 & _spRAM_sram_io_fullRead_0_data_5[15]),	
    .io_in_bits_data_5_exp       (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_5[14:10]),	
    .io_in_bits_data_5_mantissa  (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_5[9:0]),	
    .io_in_bits_data_6_sign      (~REG_9 & _spRAM_sram_io_fullRead_0_data_6[15]),	
    .io_in_bits_data_6_exp       (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_6[14:10]),	
    .io_in_bits_data_6_mantissa  (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_6[9:0]),	
    .io_in_bits_data_7_sign      (~REG_9 & _spRAM_sram_io_fullRead_0_data_7[15]),	
    .io_in_bits_data_7_exp       (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_7[14:10]),	
    .io_in_bits_data_7_mantissa  (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_7[9:0]),	
    .io_in_bits_data_8_sign      (~REG_9 & _spRAM_sram_io_fullRead_0_data_8[15]),	
    .io_in_bits_data_8_exp       (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_8[14:10]),	
    .io_in_bits_data_8_mantissa  (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_8[9:0]),	
    .io_in_bits_data_9_sign      (~REG_9 & _spRAM_sram_io_fullRead_0_data_9[15]),	
    .io_in_bits_data_9_exp       (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_9[14:10]),	
    .io_in_bits_data_9_mantissa  (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_9[9:0]),	
    .io_in_bits_data_10_sign     (~REG_9 & _spRAM_sram_io_fullRead_0_data_10[15]),	
    .io_in_bits_data_10_exp      (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_10[14:10]),	
    .io_in_bits_data_10_mantissa (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_10[9:0]),	
    .io_in_bits_data_11_sign     (~REG_9 & _spRAM_sram_io_fullRead_0_data_11[15]),	
    .io_in_bits_data_11_exp      (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_11[14:10]),	
    .io_in_bits_data_11_mantissa (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_11[9:0]),	
    .io_in_bits_data_12_sign     (~REG_9 & _spRAM_sram_io_fullRead_0_data_12[15]),	
    .io_in_bits_data_12_exp      (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_12[14:10]),	
    .io_in_bits_data_12_mantissa (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_12[9:0]),	
    .io_in_bits_data_13_sign     (~REG_9 & _spRAM_sram_io_fullRead_0_data_13[15]),	
    .io_in_bits_data_13_exp      (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_13[14:10]),	
    .io_in_bits_data_13_mantissa (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_13[9:0]),	
    .io_in_bits_data_14_sign     (~REG_9 & _spRAM_sram_io_fullRead_0_data_14[15]),	
    .io_in_bits_data_14_exp      (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_14[14:10]),	
    .io_in_bits_data_14_mantissa (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_14[9:0]),	
    .io_in_bits_data_15_sign     (~REG_9 & _spRAM_sram_io_fullRead_0_data_15[15]),	
    .io_in_bits_data_15_exp      (REG_9 ? _GEN_4 : _spRAM_sram_io_fullRead_0_data_15[14:10]),	
    .io_in_bits_data_15_mantissa (REG_9 ? _GEN_6 : _spRAM_sram_io_fullRead_0_data_15[9:0]),	
    .io_in_bits_rev_input        (inputDelayer_io_in_bits_rev_input_REG),	
    .io_in_bits_delay_output     (inputDelayer_io_in_bits_delay_output_REG),	
    .io_in_bits_rev_output       (inputDelayer_io_in_bits_rev_output_REG),	
    .io_out_0_sign               (_inputDelayer_io_out_0_sign),
    .io_out_0_exp                (_inputDelayer_io_out_0_exp),
    .io_out_0_mantissa           (_inputDelayer_io_out_0_mantissa),
    .io_out_1_sign               (_inputDelayer_io_out_1_sign),
    .io_out_1_exp                (_inputDelayer_io_out_1_exp),
    .io_out_1_mantissa           (_inputDelayer_io_out_1_mantissa),
    .io_out_2_sign               (_inputDelayer_io_out_2_sign),
    .io_out_2_exp                (_inputDelayer_io_out_2_exp),
    .io_out_2_mantissa           (_inputDelayer_io_out_2_mantissa),
    .io_out_3_sign               (_inputDelayer_io_out_3_sign),
    .io_out_3_exp                (_inputDelayer_io_out_3_exp),
    .io_out_3_mantissa           (_inputDelayer_io_out_3_mantissa),
    .io_out_4_sign               (_inputDelayer_io_out_4_sign),
    .io_out_4_exp                (_inputDelayer_io_out_4_exp),
    .io_out_4_mantissa           (_inputDelayer_io_out_4_mantissa),
    .io_out_5_sign               (_inputDelayer_io_out_5_sign),
    .io_out_5_exp                (_inputDelayer_io_out_5_exp),
    .io_out_5_mantissa           (_inputDelayer_io_out_5_mantissa),
    .io_out_6_sign               (_inputDelayer_io_out_6_sign),
    .io_out_6_exp                (_inputDelayer_io_out_6_exp),
    .io_out_6_mantissa           (_inputDelayer_io_out_6_mantissa),
    .io_out_7_sign               (_inputDelayer_io_out_7_sign),
    .io_out_7_exp                (_inputDelayer_io_out_7_exp),
    .io_out_7_mantissa           (_inputDelayer_io_out_7_mantissa),
    .io_out_8_sign               (_inputDelayer_io_out_8_sign),
    .io_out_8_exp                (_inputDelayer_io_out_8_exp),
    .io_out_8_mantissa           (_inputDelayer_io_out_8_mantissa),
    .io_out_9_sign               (_inputDelayer_io_out_9_sign),
    .io_out_9_exp                (_inputDelayer_io_out_9_exp),
    .io_out_9_mantissa           (_inputDelayer_io_out_9_mantissa),
    .io_out_10_sign              (_inputDelayer_io_out_10_sign),
    .io_out_10_exp               (_inputDelayer_io_out_10_exp),
    .io_out_10_mantissa          (_inputDelayer_io_out_10_mantissa),
    .io_out_11_sign              (_inputDelayer_io_out_11_sign),
    .io_out_11_exp               (_inputDelayer_io_out_11_exp),
    .io_out_11_mantissa          (_inputDelayer_io_out_11_mantissa),
    .io_out_12_sign              (_inputDelayer_io_out_12_sign),
    .io_out_12_exp               (_inputDelayer_io_out_12_exp),
    .io_out_12_mantissa          (_inputDelayer_io_out_12_mantissa),
    .io_out_13_sign              (_inputDelayer_io_out_13_sign),
    .io_out_13_exp               (_inputDelayer_io_out_13_exp),
    .io_out_13_mantissa          (_inputDelayer_io_out_13_mantissa),
    .io_out_14_sign              (_inputDelayer_io_out_14_sign),
    .io_out_14_exp               (_inputDelayer_io_out_14_exp),
    .io_out_14_mantissa          (_inputDelayer_io_out_14_mantissa),
    .io_out_15_sign              (_inputDelayer_io_out_15_sign),
    .io_out_15_exp               (_inputDelayer_io_out_15_exp),
    .io_out_15_mantissa          (_inputDelayer_io_out_15_mantissa)
  );	
  OutputDelayer outputDelayer (	
    .clock              (clock),
    .io_in_0_sign       (_sa_io_acc_out_0_bits_sign),	
    .io_in_0_exp        (_sa_io_acc_out_0_bits_exp),	
    .io_in_0_mantissa   (_sa_io_acc_out_0_bits_mantissa),	
    .io_in_1_sign       (_sa_io_acc_out_1_bits_sign),	
    .io_in_1_exp        (_sa_io_acc_out_1_bits_exp),	
    .io_in_1_mantissa   (_sa_io_acc_out_1_bits_mantissa),	
    .io_in_2_sign       (_sa_io_acc_out_2_bits_sign),	
    .io_in_2_exp        (_sa_io_acc_out_2_bits_exp),	
    .io_in_2_mantissa   (_sa_io_acc_out_2_bits_mantissa),	
    .io_in_3_sign       (_sa_io_acc_out_3_bits_sign),	
    .io_in_3_exp        (_sa_io_acc_out_3_bits_exp),	
    .io_in_3_mantissa   (_sa_io_acc_out_3_bits_mantissa),	
    .io_in_4_sign       (_sa_io_acc_out_4_bits_sign),	
    .io_in_4_exp        (_sa_io_acc_out_4_bits_exp),	
    .io_in_4_mantissa   (_sa_io_acc_out_4_bits_mantissa),	
    .io_in_5_sign       (_sa_io_acc_out_5_bits_sign),	
    .io_in_5_exp        (_sa_io_acc_out_5_bits_exp),	
    .io_in_5_mantissa   (_sa_io_acc_out_5_bits_mantissa),	
    .io_in_6_sign       (_sa_io_acc_out_6_bits_sign),	
    .io_in_6_exp        (_sa_io_acc_out_6_bits_exp),	
    .io_in_6_mantissa   (_sa_io_acc_out_6_bits_mantissa),	
    .io_in_7_sign       (_sa_io_acc_out_7_bits_sign),	
    .io_in_7_exp        (_sa_io_acc_out_7_bits_exp),	
    .io_in_7_mantissa   (_sa_io_acc_out_7_bits_mantissa),	
    .io_in_8_sign       (_sa_io_acc_out_8_bits_sign),	
    .io_in_8_exp        (_sa_io_acc_out_8_bits_exp),	
    .io_in_8_mantissa   (_sa_io_acc_out_8_bits_mantissa),	
    .io_in_9_sign       (_sa_io_acc_out_9_bits_sign),	
    .io_in_9_exp        (_sa_io_acc_out_9_bits_exp),	
    .io_in_9_mantissa   (_sa_io_acc_out_9_bits_mantissa),	
    .io_in_10_sign      (_sa_io_acc_out_10_bits_sign),	
    .io_in_10_exp       (_sa_io_acc_out_10_bits_exp),	
    .io_in_10_mantissa  (_sa_io_acc_out_10_bits_mantissa),	
    .io_in_11_sign      (_sa_io_acc_out_11_bits_sign),	
    .io_in_11_exp       (_sa_io_acc_out_11_bits_exp),	
    .io_in_11_mantissa  (_sa_io_acc_out_11_bits_mantissa),	
    .io_in_12_sign      (_sa_io_acc_out_12_bits_sign),	
    .io_in_12_exp       (_sa_io_acc_out_12_bits_exp),	
    .io_in_12_mantissa  (_sa_io_acc_out_12_bits_mantissa),	
    .io_in_13_sign      (_sa_io_acc_out_13_bits_sign),	
    .io_in_13_exp       (_sa_io_acc_out_13_bits_exp),	
    .io_in_13_mantissa  (_sa_io_acc_out_13_bits_mantissa),	
    .io_in_14_sign      (_sa_io_acc_out_14_bits_sign),	
    .io_in_14_exp       (_sa_io_acc_out_14_bits_exp),	
    .io_in_14_mantissa  (_sa_io_acc_out_14_bits_mantissa),	
    .io_in_15_sign      (_sa_io_acc_out_15_bits_sign),	
    .io_in_15_exp       (_sa_io_acc_out_15_bits_exp),	
    .io_in_15_mantissa  (_sa_io_acc_out_15_bits_mantissa),	
    .io_out_0_sign      (_outputDelayer_io_out_0_sign),
    .io_out_0_exp       (_outputDelayer_io_out_0_exp),
    .io_out_0_mantissa  (_outputDelayer_io_out_0_mantissa),
    .io_out_1_sign      (_outputDelayer_io_out_1_sign),
    .io_out_1_exp       (_outputDelayer_io_out_1_exp),
    .io_out_1_mantissa  (_outputDelayer_io_out_1_mantissa),
    .io_out_2_sign      (_outputDelayer_io_out_2_sign),
    .io_out_2_exp       (_outputDelayer_io_out_2_exp),
    .io_out_2_mantissa  (_outputDelayer_io_out_2_mantissa),
    .io_out_3_sign      (_outputDelayer_io_out_3_sign),
    .io_out_3_exp       (_outputDelayer_io_out_3_exp),
    .io_out_3_mantissa  (_outputDelayer_io_out_3_mantissa),
    .io_out_4_sign      (_outputDelayer_io_out_4_sign),
    .io_out_4_exp       (_outputDelayer_io_out_4_exp),
    .io_out_4_mantissa  (_outputDelayer_io_out_4_mantissa),
    .io_out_5_sign      (_outputDelayer_io_out_5_sign),
    .io_out_5_exp       (_outputDelayer_io_out_5_exp),
    .io_out_5_mantissa  (_outputDelayer_io_out_5_mantissa),
    .io_out_6_sign      (_outputDelayer_io_out_6_sign),
    .io_out_6_exp       (_outputDelayer_io_out_6_exp),
    .io_out_6_mantissa  (_outputDelayer_io_out_6_mantissa),
    .io_out_7_sign      (_outputDelayer_io_out_7_sign),
    .io_out_7_exp       (_outputDelayer_io_out_7_exp),
    .io_out_7_mantissa  (_outputDelayer_io_out_7_mantissa),
    .io_out_8_sign      (_outputDelayer_io_out_8_sign),
    .io_out_8_exp       (_outputDelayer_io_out_8_exp),
    .io_out_8_mantissa  (_outputDelayer_io_out_8_mantissa),
    .io_out_9_sign      (_outputDelayer_io_out_9_sign),
    .io_out_9_exp       (_outputDelayer_io_out_9_exp),
    .io_out_9_mantissa  (_outputDelayer_io_out_9_mantissa),
    .io_out_10_sign     (_outputDelayer_io_out_10_sign),
    .io_out_10_exp      (_outputDelayer_io_out_10_exp),
    .io_out_10_mantissa (_outputDelayer_io_out_10_mantissa),
    .io_out_11_sign     (_outputDelayer_io_out_11_sign),
    .io_out_11_exp      (_outputDelayer_io_out_11_exp),
    .io_out_11_mantissa (_outputDelayer_io_out_11_mantissa),
    .io_out_12_sign     (_outputDelayer_io_out_12_sign),
    .io_out_12_exp      (_outputDelayer_io_out_12_exp),
    .io_out_12_mantissa (_outputDelayer_io_out_12_mantissa),
    .io_out_13_sign     (_outputDelayer_io_out_13_sign),
    .io_out_13_exp      (_outputDelayer_io_out_13_exp),
    .io_out_13_mantissa (_outputDelayer_io_out_13_mantissa),
    .io_out_14_sign     (_outputDelayer_io_out_14_sign),
    .io_out_14_exp      (_outputDelayer_io_out_14_exp),
    .io_out_14_mantissa (_outputDelayer_io_out_14_mantissa),
    .io_out_15_sign     (_outputDelayer_io_out_15_sign),
    .io_out_15_exp      (_outputDelayer_io_out_15_exp),
    .io_out_15_mantissa (_outputDelayer_io_out_15_mantissa)
  );	
  SystolicArray sa (	
    .clock                          (clock),
    .reset                          (reset),
    .io_cmp_ctrl_valid              (_mxControl_io_cmp_ctrl_valid),	
    .io_cmp_ctrl_bits_cmd           (_mxControl_io_cmp_ctrl_bits_cmd),	
    .io_pe_ctrl_0_valid             (_mxControl_io_pe_ctrl_0_valid),	
    .io_pe_ctrl_0_bits_mac          (_mxControl_io_pe_ctrl_0_bits_mac),	
    .io_pe_ctrl_0_bits_acc_ui       (_mxControl_io_pe_ctrl_0_bits_acc_ui),	
    .io_pe_ctrl_0_bits_load_reg_li  (_mxControl_io_pe_ctrl_0_bits_load_reg_li),	
    .io_pe_ctrl_0_bits_load_reg_ui  (_mxControl_io_pe_ctrl_0_bits_load_reg_ui),	
    .io_pe_ctrl_0_bits_flow_lr      (_mxControl_io_pe_ctrl_0_bits_flow_lr),	
    .io_pe_ctrl_0_bits_flow_ud      (_mxControl_io_pe_ctrl_0_bits_flow_ud),	
    .io_pe_ctrl_0_bits_flow_du      (_mxControl_io_pe_ctrl_0_bits_flow_du),	
    .io_pe_ctrl_0_bits_update_reg   (_mxControl_io_pe_ctrl_0_bits_update_reg),	
    .io_pe_ctrl_0_bits_exp2         (_mxControl_io_pe_ctrl_0_bits_exp2),	
    .io_pe_ctrl_1_valid             (_mxControl_io_pe_ctrl_1_valid),	
    .io_pe_ctrl_1_bits_mac          (_mxControl_io_pe_ctrl_1_bits_mac),	
    .io_pe_ctrl_1_bits_acc_ui       (_mxControl_io_pe_ctrl_1_bits_acc_ui),	
    .io_pe_ctrl_1_bits_load_reg_li  (_mxControl_io_pe_ctrl_1_bits_load_reg_li),	
    .io_pe_ctrl_1_bits_load_reg_ui  (_mxControl_io_pe_ctrl_1_bits_load_reg_ui),	
    .io_pe_ctrl_1_bits_flow_lr      (_mxControl_io_pe_ctrl_1_bits_flow_lr),	
    .io_pe_ctrl_1_bits_flow_ud      (_mxControl_io_pe_ctrl_1_bits_flow_ud),	
    .io_pe_ctrl_1_bits_flow_du      (_mxControl_io_pe_ctrl_1_bits_flow_du),	
    .io_pe_ctrl_1_bits_update_reg   (_mxControl_io_pe_ctrl_1_bits_update_reg),	
    .io_pe_ctrl_1_bits_exp2         (_mxControl_io_pe_ctrl_1_bits_exp2),	
    .io_pe_ctrl_2_valid             (_mxControl_io_pe_ctrl_2_valid),	
    .io_pe_ctrl_2_bits_mac          (_mxControl_io_pe_ctrl_2_bits_mac),	
    .io_pe_ctrl_2_bits_acc_ui       (_mxControl_io_pe_ctrl_2_bits_acc_ui),	
    .io_pe_ctrl_2_bits_load_reg_li  (_mxControl_io_pe_ctrl_2_bits_load_reg_li),	
    .io_pe_ctrl_2_bits_load_reg_ui  (_mxControl_io_pe_ctrl_2_bits_load_reg_ui),	
    .io_pe_ctrl_2_bits_flow_lr      (_mxControl_io_pe_ctrl_2_bits_flow_lr),	
    .io_pe_ctrl_2_bits_flow_ud      (_mxControl_io_pe_ctrl_2_bits_flow_ud),	
    .io_pe_ctrl_2_bits_flow_du      (_mxControl_io_pe_ctrl_2_bits_flow_du),	
    .io_pe_ctrl_2_bits_update_reg   (_mxControl_io_pe_ctrl_2_bits_update_reg),	
    .io_pe_ctrl_2_bits_exp2         (_mxControl_io_pe_ctrl_2_bits_exp2),	
    .io_pe_ctrl_3_valid             (_mxControl_io_pe_ctrl_3_valid),	
    .io_pe_ctrl_3_bits_mac          (_mxControl_io_pe_ctrl_3_bits_mac),	
    .io_pe_ctrl_3_bits_acc_ui       (_mxControl_io_pe_ctrl_3_bits_acc_ui),	
    .io_pe_ctrl_3_bits_load_reg_li  (_mxControl_io_pe_ctrl_3_bits_load_reg_li),	
    .io_pe_ctrl_3_bits_load_reg_ui  (_mxControl_io_pe_ctrl_3_bits_load_reg_ui),	
    .io_pe_ctrl_3_bits_flow_lr      (_mxControl_io_pe_ctrl_3_bits_flow_lr),	
    .io_pe_ctrl_3_bits_flow_ud      (_mxControl_io_pe_ctrl_3_bits_flow_ud),	
    .io_pe_ctrl_3_bits_flow_du      (_mxControl_io_pe_ctrl_3_bits_flow_du),	
    .io_pe_ctrl_3_bits_update_reg   (_mxControl_io_pe_ctrl_3_bits_update_reg),	
    .io_pe_ctrl_3_bits_exp2         (_mxControl_io_pe_ctrl_3_bits_exp2),	
    .io_pe_ctrl_4_valid             (_mxControl_io_pe_ctrl_4_valid),	
    .io_pe_ctrl_4_bits_mac          (_mxControl_io_pe_ctrl_4_bits_mac),	
    .io_pe_ctrl_4_bits_acc_ui       (_mxControl_io_pe_ctrl_4_bits_acc_ui),	
    .io_pe_ctrl_4_bits_load_reg_li  (_mxControl_io_pe_ctrl_4_bits_load_reg_li),	
    .io_pe_ctrl_4_bits_load_reg_ui  (_mxControl_io_pe_ctrl_4_bits_load_reg_ui),	
    .io_pe_ctrl_4_bits_flow_lr      (_mxControl_io_pe_ctrl_4_bits_flow_lr),	
    .io_pe_ctrl_4_bits_flow_ud      (_mxControl_io_pe_ctrl_4_bits_flow_ud),	
    .io_pe_ctrl_4_bits_flow_du      (_mxControl_io_pe_ctrl_4_bits_flow_du),	
    .io_pe_ctrl_4_bits_update_reg   (_mxControl_io_pe_ctrl_4_bits_update_reg),	
    .io_pe_ctrl_4_bits_exp2         (_mxControl_io_pe_ctrl_4_bits_exp2),	
    .io_pe_ctrl_5_valid             (_mxControl_io_pe_ctrl_5_valid),	
    .io_pe_ctrl_5_bits_mac          (_mxControl_io_pe_ctrl_5_bits_mac),	
    .io_pe_ctrl_5_bits_acc_ui       (_mxControl_io_pe_ctrl_5_bits_acc_ui),	
    .io_pe_ctrl_5_bits_load_reg_li  (_mxControl_io_pe_ctrl_5_bits_load_reg_li),	
    .io_pe_ctrl_5_bits_load_reg_ui  (_mxControl_io_pe_ctrl_5_bits_load_reg_ui),	
    .io_pe_ctrl_5_bits_flow_lr      (_mxControl_io_pe_ctrl_5_bits_flow_lr),	
    .io_pe_ctrl_5_bits_flow_ud      (_mxControl_io_pe_ctrl_5_bits_flow_ud),	
    .io_pe_ctrl_5_bits_flow_du      (_mxControl_io_pe_ctrl_5_bits_flow_du),	
    .io_pe_ctrl_5_bits_update_reg   (_mxControl_io_pe_ctrl_5_bits_update_reg),	
    .io_pe_ctrl_5_bits_exp2         (_mxControl_io_pe_ctrl_5_bits_exp2),	
    .io_pe_ctrl_6_valid             (_mxControl_io_pe_ctrl_6_valid),	
    .io_pe_ctrl_6_bits_mac          (_mxControl_io_pe_ctrl_6_bits_mac),	
    .io_pe_ctrl_6_bits_acc_ui       (_mxControl_io_pe_ctrl_6_bits_acc_ui),	
    .io_pe_ctrl_6_bits_load_reg_li  (_mxControl_io_pe_ctrl_6_bits_load_reg_li),	
    .io_pe_ctrl_6_bits_load_reg_ui  (_mxControl_io_pe_ctrl_6_bits_load_reg_ui),	
    .io_pe_ctrl_6_bits_flow_lr      (_mxControl_io_pe_ctrl_6_bits_flow_lr),	
    .io_pe_ctrl_6_bits_flow_ud      (_mxControl_io_pe_ctrl_6_bits_flow_ud),	
    .io_pe_ctrl_6_bits_flow_du      (_mxControl_io_pe_ctrl_6_bits_flow_du),	
    .io_pe_ctrl_6_bits_update_reg   (_mxControl_io_pe_ctrl_6_bits_update_reg),	
    .io_pe_ctrl_6_bits_exp2         (_mxControl_io_pe_ctrl_6_bits_exp2),	
    .io_pe_ctrl_7_valid             (_mxControl_io_pe_ctrl_7_valid),	
    .io_pe_ctrl_7_bits_mac          (_mxControl_io_pe_ctrl_7_bits_mac),	
    .io_pe_ctrl_7_bits_acc_ui       (_mxControl_io_pe_ctrl_7_bits_acc_ui),	
    .io_pe_ctrl_7_bits_load_reg_li  (_mxControl_io_pe_ctrl_7_bits_load_reg_li),	
    .io_pe_ctrl_7_bits_load_reg_ui  (_mxControl_io_pe_ctrl_7_bits_load_reg_ui),	
    .io_pe_ctrl_7_bits_flow_lr      (_mxControl_io_pe_ctrl_7_bits_flow_lr),	
    .io_pe_ctrl_7_bits_flow_ud      (_mxControl_io_pe_ctrl_7_bits_flow_ud),	
    .io_pe_ctrl_7_bits_flow_du      (_mxControl_io_pe_ctrl_7_bits_flow_du),	
    .io_pe_ctrl_7_bits_update_reg   (_mxControl_io_pe_ctrl_7_bits_update_reg),	
    .io_pe_ctrl_7_bits_exp2         (_mxControl_io_pe_ctrl_7_bits_exp2),	
    .io_pe_ctrl_8_valid             (_mxControl_io_pe_ctrl_8_valid),	
    .io_pe_ctrl_8_bits_mac          (_mxControl_io_pe_ctrl_8_bits_mac),	
    .io_pe_ctrl_8_bits_acc_ui       (_mxControl_io_pe_ctrl_8_bits_acc_ui),	
    .io_pe_ctrl_8_bits_load_reg_li  (_mxControl_io_pe_ctrl_8_bits_load_reg_li),	
    .io_pe_ctrl_8_bits_load_reg_ui  (_mxControl_io_pe_ctrl_8_bits_load_reg_ui),	
    .io_pe_ctrl_8_bits_flow_lr      (_mxControl_io_pe_ctrl_8_bits_flow_lr),	
    .io_pe_ctrl_8_bits_flow_ud      (_mxControl_io_pe_ctrl_8_bits_flow_ud),	
    .io_pe_ctrl_8_bits_flow_du      (_mxControl_io_pe_ctrl_8_bits_flow_du),	
    .io_pe_ctrl_8_bits_update_reg   (_mxControl_io_pe_ctrl_8_bits_update_reg),	
    .io_pe_ctrl_8_bits_exp2         (_mxControl_io_pe_ctrl_8_bits_exp2),	
    .io_pe_ctrl_9_valid             (_mxControl_io_pe_ctrl_9_valid),	
    .io_pe_ctrl_9_bits_mac          (_mxControl_io_pe_ctrl_9_bits_mac),	
    .io_pe_ctrl_9_bits_acc_ui       (_mxControl_io_pe_ctrl_9_bits_acc_ui),	
    .io_pe_ctrl_9_bits_load_reg_li  (_mxControl_io_pe_ctrl_9_bits_load_reg_li),	
    .io_pe_ctrl_9_bits_load_reg_ui  (_mxControl_io_pe_ctrl_9_bits_load_reg_ui),	
    .io_pe_ctrl_9_bits_flow_lr      (_mxControl_io_pe_ctrl_9_bits_flow_lr),	
    .io_pe_ctrl_9_bits_flow_ud      (_mxControl_io_pe_ctrl_9_bits_flow_ud),	
    .io_pe_ctrl_9_bits_flow_du      (_mxControl_io_pe_ctrl_9_bits_flow_du),	
    .io_pe_ctrl_9_bits_update_reg   (_mxControl_io_pe_ctrl_9_bits_update_reg),	
    .io_pe_ctrl_9_bits_exp2         (_mxControl_io_pe_ctrl_9_bits_exp2),	
    .io_pe_ctrl_10_valid            (_mxControl_io_pe_ctrl_10_valid),	
    .io_pe_ctrl_10_bits_mac         (_mxControl_io_pe_ctrl_10_bits_mac),	
    .io_pe_ctrl_10_bits_acc_ui      (_mxControl_io_pe_ctrl_10_bits_acc_ui),	
    .io_pe_ctrl_10_bits_load_reg_li (_mxControl_io_pe_ctrl_10_bits_load_reg_li),	
    .io_pe_ctrl_10_bits_load_reg_ui (_mxControl_io_pe_ctrl_10_bits_load_reg_ui),	
    .io_pe_ctrl_10_bits_flow_lr     (_mxControl_io_pe_ctrl_10_bits_flow_lr),	
    .io_pe_ctrl_10_bits_flow_ud     (_mxControl_io_pe_ctrl_10_bits_flow_ud),	
    .io_pe_ctrl_10_bits_flow_du     (_mxControl_io_pe_ctrl_10_bits_flow_du),	
    .io_pe_ctrl_10_bits_update_reg  (_mxControl_io_pe_ctrl_10_bits_update_reg),	
    .io_pe_ctrl_10_bits_exp2        (_mxControl_io_pe_ctrl_10_bits_exp2),	
    .io_pe_ctrl_11_valid            (_mxControl_io_pe_ctrl_11_valid),	
    .io_pe_ctrl_11_bits_mac         (_mxControl_io_pe_ctrl_11_bits_mac),	
    .io_pe_ctrl_11_bits_acc_ui      (_mxControl_io_pe_ctrl_11_bits_acc_ui),	
    .io_pe_ctrl_11_bits_load_reg_li (_mxControl_io_pe_ctrl_11_bits_load_reg_li),	
    .io_pe_ctrl_11_bits_load_reg_ui (_mxControl_io_pe_ctrl_11_bits_load_reg_ui),	
    .io_pe_ctrl_11_bits_flow_lr     (_mxControl_io_pe_ctrl_11_bits_flow_lr),	
    .io_pe_ctrl_11_bits_flow_ud     (_mxControl_io_pe_ctrl_11_bits_flow_ud),	
    .io_pe_ctrl_11_bits_flow_du     (_mxControl_io_pe_ctrl_11_bits_flow_du),	
    .io_pe_ctrl_11_bits_update_reg  (_mxControl_io_pe_ctrl_11_bits_update_reg),	
    .io_pe_ctrl_11_bits_exp2        (_mxControl_io_pe_ctrl_11_bits_exp2),	
    .io_pe_ctrl_12_valid            (_mxControl_io_pe_ctrl_12_valid),	
    .io_pe_ctrl_12_bits_mac         (_mxControl_io_pe_ctrl_12_bits_mac),	
    .io_pe_ctrl_12_bits_acc_ui      (_mxControl_io_pe_ctrl_12_bits_acc_ui),	
    .io_pe_ctrl_12_bits_load_reg_li (_mxControl_io_pe_ctrl_12_bits_load_reg_li),	
    .io_pe_ctrl_12_bits_load_reg_ui (_mxControl_io_pe_ctrl_12_bits_load_reg_ui),	
    .io_pe_ctrl_12_bits_flow_lr     (_mxControl_io_pe_ctrl_12_bits_flow_lr),	
    .io_pe_ctrl_12_bits_flow_ud     (_mxControl_io_pe_ctrl_12_bits_flow_ud),	
    .io_pe_ctrl_12_bits_flow_du     (_mxControl_io_pe_ctrl_12_bits_flow_du),	
    .io_pe_ctrl_12_bits_update_reg  (_mxControl_io_pe_ctrl_12_bits_update_reg),	
    .io_pe_ctrl_12_bits_exp2        (_mxControl_io_pe_ctrl_12_bits_exp2),	
    .io_pe_ctrl_13_valid            (_mxControl_io_pe_ctrl_13_valid),	
    .io_pe_ctrl_13_bits_mac         (_mxControl_io_pe_ctrl_13_bits_mac),	
    .io_pe_ctrl_13_bits_acc_ui      (_mxControl_io_pe_ctrl_13_bits_acc_ui),	
    .io_pe_ctrl_13_bits_load_reg_li (_mxControl_io_pe_ctrl_13_bits_load_reg_li),	
    .io_pe_ctrl_13_bits_load_reg_ui (_mxControl_io_pe_ctrl_13_bits_load_reg_ui),	
    .io_pe_ctrl_13_bits_flow_lr     (_mxControl_io_pe_ctrl_13_bits_flow_lr),	
    .io_pe_ctrl_13_bits_flow_ud     (_mxControl_io_pe_ctrl_13_bits_flow_ud),	
    .io_pe_ctrl_13_bits_flow_du     (_mxControl_io_pe_ctrl_13_bits_flow_du),	
    .io_pe_ctrl_13_bits_update_reg  (_mxControl_io_pe_ctrl_13_bits_update_reg),	
    .io_pe_ctrl_13_bits_exp2        (_mxControl_io_pe_ctrl_13_bits_exp2),	
    .io_pe_ctrl_14_valid            (_mxControl_io_pe_ctrl_14_valid),	
    .io_pe_ctrl_14_bits_mac         (_mxControl_io_pe_ctrl_14_bits_mac),	
    .io_pe_ctrl_14_bits_acc_ui      (_mxControl_io_pe_ctrl_14_bits_acc_ui),	
    .io_pe_ctrl_14_bits_load_reg_li (_mxControl_io_pe_ctrl_14_bits_load_reg_li),	
    .io_pe_ctrl_14_bits_load_reg_ui (_mxControl_io_pe_ctrl_14_bits_load_reg_ui),	
    .io_pe_ctrl_14_bits_flow_lr     (_mxControl_io_pe_ctrl_14_bits_flow_lr),	
    .io_pe_ctrl_14_bits_flow_ud     (_mxControl_io_pe_ctrl_14_bits_flow_ud),	
    .io_pe_ctrl_14_bits_flow_du     (_mxControl_io_pe_ctrl_14_bits_flow_du),	
    .io_pe_ctrl_14_bits_update_reg  (_mxControl_io_pe_ctrl_14_bits_update_reg),	
    .io_pe_ctrl_14_bits_exp2        (_mxControl_io_pe_ctrl_14_bits_exp2),	
    .io_pe_ctrl_15_valid            (_mxControl_io_pe_ctrl_15_valid),	
    .io_pe_ctrl_15_bits_mac         (_mxControl_io_pe_ctrl_15_bits_mac),	
    .io_pe_ctrl_15_bits_acc_ui      (_mxControl_io_pe_ctrl_15_bits_acc_ui),	
    .io_pe_ctrl_15_bits_load_reg_li (_mxControl_io_pe_ctrl_15_bits_load_reg_li),	
    .io_pe_ctrl_15_bits_load_reg_ui (_mxControl_io_pe_ctrl_15_bits_load_reg_ui),	
    .io_pe_ctrl_15_bits_flow_lr     (_mxControl_io_pe_ctrl_15_bits_flow_lr),	
    .io_pe_ctrl_15_bits_flow_ud     (_mxControl_io_pe_ctrl_15_bits_flow_ud),	
    .io_pe_ctrl_15_bits_flow_du     (_mxControl_io_pe_ctrl_15_bits_flow_du),	
    .io_pe_ctrl_15_bits_update_reg  (_mxControl_io_pe_ctrl_15_bits_update_reg),	
    .io_pe_ctrl_15_bits_exp2        (_mxControl_io_pe_ctrl_15_bits_exp2),	
    .io_pe_data_0_sign              (_inputDelayer_io_out_0_sign),	
    .io_pe_data_0_exp               (_inputDelayer_io_out_0_exp),	
    .io_pe_data_0_mantissa          (_inputDelayer_io_out_0_mantissa),	
    .io_pe_data_1_sign              (_inputDelayer_io_out_1_sign),	
    .io_pe_data_1_exp               (_inputDelayer_io_out_1_exp),	
    .io_pe_data_1_mantissa          (_inputDelayer_io_out_1_mantissa),	
    .io_pe_data_2_sign              (_inputDelayer_io_out_2_sign),	
    .io_pe_data_2_exp               (_inputDelayer_io_out_2_exp),	
    .io_pe_data_2_mantissa          (_inputDelayer_io_out_2_mantissa),	
    .io_pe_data_3_sign              (_inputDelayer_io_out_3_sign),	
    .io_pe_data_3_exp               (_inputDelayer_io_out_3_exp),	
    .io_pe_data_3_mantissa          (_inputDelayer_io_out_3_mantissa),	
    .io_pe_data_4_sign              (_inputDelayer_io_out_4_sign),	
    .io_pe_data_4_exp               (_inputDelayer_io_out_4_exp),	
    .io_pe_data_4_mantissa          (_inputDelayer_io_out_4_mantissa),	
    .io_pe_data_5_sign              (_inputDelayer_io_out_5_sign),	
    .io_pe_data_5_exp               (_inputDelayer_io_out_5_exp),	
    .io_pe_data_5_mantissa          (_inputDelayer_io_out_5_mantissa),	
    .io_pe_data_6_sign              (_inputDelayer_io_out_6_sign),	
    .io_pe_data_6_exp               (_inputDelayer_io_out_6_exp),	
    .io_pe_data_6_mantissa          (_inputDelayer_io_out_6_mantissa),	
    .io_pe_data_7_sign              (_inputDelayer_io_out_7_sign),	
    .io_pe_data_7_exp               (_inputDelayer_io_out_7_exp),	
    .io_pe_data_7_mantissa          (_inputDelayer_io_out_7_mantissa),	
    .io_pe_data_8_sign              (_inputDelayer_io_out_8_sign),	
    .io_pe_data_8_exp               (_inputDelayer_io_out_8_exp),	
    .io_pe_data_8_mantissa          (_inputDelayer_io_out_8_mantissa),	
    .io_pe_data_9_sign              (_inputDelayer_io_out_9_sign),	
    .io_pe_data_9_exp               (_inputDelayer_io_out_9_exp),	
    .io_pe_data_9_mantissa          (_inputDelayer_io_out_9_mantissa),	
    .io_pe_data_10_sign             (_inputDelayer_io_out_10_sign),	
    .io_pe_data_10_exp              (_inputDelayer_io_out_10_exp),	
    .io_pe_data_10_mantissa         (_inputDelayer_io_out_10_mantissa),	
    .io_pe_data_11_sign             (_inputDelayer_io_out_11_sign),	
    .io_pe_data_11_exp              (_inputDelayer_io_out_11_exp),	
    .io_pe_data_11_mantissa         (_inputDelayer_io_out_11_mantissa),	
    .io_pe_data_12_sign             (_inputDelayer_io_out_12_sign),	
    .io_pe_data_12_exp              (_inputDelayer_io_out_12_exp),	
    .io_pe_data_12_mantissa         (_inputDelayer_io_out_12_mantissa),	
    .io_pe_data_13_sign             (_inputDelayer_io_out_13_sign),	
    .io_pe_data_13_exp              (_inputDelayer_io_out_13_exp),	
    .io_pe_data_13_mantissa         (_inputDelayer_io_out_13_mantissa),	
    .io_pe_data_14_sign             (_inputDelayer_io_out_14_sign),	
    .io_pe_data_14_exp              (_inputDelayer_io_out_14_exp),	
    .io_pe_data_14_mantissa         (_inputDelayer_io_out_14_mantissa),	
    .io_pe_data_15_sign             (_inputDelayer_io_out_15_sign),	
    .io_pe_data_15_exp              (_inputDelayer_io_out_15_exp),	
    .io_pe_data_15_mantissa         (_inputDelayer_io_out_15_mantissa),	
    .io_acc_out_0_bits_sign         (_sa_io_acc_out_0_bits_sign),
    .io_acc_out_0_bits_exp          (_sa_io_acc_out_0_bits_exp),
    .io_acc_out_0_bits_mantissa     (_sa_io_acc_out_0_bits_mantissa),
    .io_acc_out_1_bits_sign         (_sa_io_acc_out_1_bits_sign),
    .io_acc_out_1_bits_exp          (_sa_io_acc_out_1_bits_exp),
    .io_acc_out_1_bits_mantissa     (_sa_io_acc_out_1_bits_mantissa),
    .io_acc_out_2_bits_sign         (_sa_io_acc_out_2_bits_sign),
    .io_acc_out_2_bits_exp          (_sa_io_acc_out_2_bits_exp),
    .io_acc_out_2_bits_mantissa     (_sa_io_acc_out_2_bits_mantissa),
    .io_acc_out_3_bits_sign         (_sa_io_acc_out_3_bits_sign),
    .io_acc_out_3_bits_exp          (_sa_io_acc_out_3_bits_exp),
    .io_acc_out_3_bits_mantissa     (_sa_io_acc_out_3_bits_mantissa),
    .io_acc_out_4_bits_sign         (_sa_io_acc_out_4_bits_sign),
    .io_acc_out_4_bits_exp          (_sa_io_acc_out_4_bits_exp),
    .io_acc_out_4_bits_mantissa     (_sa_io_acc_out_4_bits_mantissa),
    .io_acc_out_5_bits_sign         (_sa_io_acc_out_5_bits_sign),
    .io_acc_out_5_bits_exp          (_sa_io_acc_out_5_bits_exp),
    .io_acc_out_5_bits_mantissa     (_sa_io_acc_out_5_bits_mantissa),
    .io_acc_out_6_bits_sign         (_sa_io_acc_out_6_bits_sign),
    .io_acc_out_6_bits_exp          (_sa_io_acc_out_6_bits_exp),
    .io_acc_out_6_bits_mantissa     (_sa_io_acc_out_6_bits_mantissa),
    .io_acc_out_7_bits_sign         (_sa_io_acc_out_7_bits_sign),
    .io_acc_out_7_bits_exp          (_sa_io_acc_out_7_bits_exp),
    .io_acc_out_7_bits_mantissa     (_sa_io_acc_out_7_bits_mantissa),
    .io_acc_out_8_bits_sign         (_sa_io_acc_out_8_bits_sign),
    .io_acc_out_8_bits_exp          (_sa_io_acc_out_8_bits_exp),
    .io_acc_out_8_bits_mantissa     (_sa_io_acc_out_8_bits_mantissa),
    .io_acc_out_9_bits_sign         (_sa_io_acc_out_9_bits_sign),
    .io_acc_out_9_bits_exp          (_sa_io_acc_out_9_bits_exp),
    .io_acc_out_9_bits_mantissa     (_sa_io_acc_out_9_bits_mantissa),
    .io_acc_out_10_bits_sign        (_sa_io_acc_out_10_bits_sign),
    .io_acc_out_10_bits_exp         (_sa_io_acc_out_10_bits_exp),
    .io_acc_out_10_bits_mantissa    (_sa_io_acc_out_10_bits_mantissa),
    .io_acc_out_11_bits_sign        (_sa_io_acc_out_11_bits_sign),
    .io_acc_out_11_bits_exp         (_sa_io_acc_out_11_bits_exp),
    .io_acc_out_11_bits_mantissa    (_sa_io_acc_out_11_bits_mantissa),
    .io_acc_out_12_bits_sign        (_sa_io_acc_out_12_bits_sign),
    .io_acc_out_12_bits_exp         (_sa_io_acc_out_12_bits_exp),
    .io_acc_out_12_bits_mantissa    (_sa_io_acc_out_12_bits_mantissa),
    .io_acc_out_13_bits_sign        (_sa_io_acc_out_13_bits_sign),
    .io_acc_out_13_bits_exp         (_sa_io_acc_out_13_bits_exp),
    .io_acc_out_13_bits_mantissa    (_sa_io_acc_out_13_bits_mantissa),
    .io_acc_out_14_bits_sign        (_sa_io_acc_out_14_bits_sign),
    .io_acc_out_14_bits_exp         (_sa_io_acc_out_14_bits_exp),
    .io_acc_out_14_bits_mantissa    (_sa_io_acc_out_14_bits_mantissa),
    .io_acc_out_15_bits_sign        (_sa_io_acc_out_15_bits_sign),
    .io_acc_out_15_bits_exp         (_sa_io_acc_out_15_bits_exp),
    .io_acc_out_15_bits_mantissa    (_sa_io_acc_out_15_bits_mantissa)
  );	
  Accumulator accumulator (	
    .clock                   (clock),
    .reset                   (reset),
    .io_ctrl_in_valid        (_mxControl_io_acc_ctrl_valid),	
    .io_ctrl_in_bits_cmd     (_mxControl_io_acc_ctrl_bits_cmd),	
    .io_sa_in_0_sign         (_outputDelayer_io_out_0_sign),	
    .io_sa_in_0_exp          (_outputDelayer_io_out_0_exp),	
    .io_sa_in_0_mantissa     (_outputDelayer_io_out_0_mantissa),	
    .io_sa_in_1_sign         (_outputDelayer_io_out_1_sign),	
    .io_sa_in_1_exp          (_outputDelayer_io_out_1_exp),	
    .io_sa_in_1_mantissa     (_outputDelayer_io_out_1_mantissa),	
    .io_sa_in_2_sign         (_outputDelayer_io_out_2_sign),	
    .io_sa_in_2_exp          (_outputDelayer_io_out_2_exp),	
    .io_sa_in_2_mantissa     (_outputDelayer_io_out_2_mantissa),	
    .io_sa_in_3_sign         (_outputDelayer_io_out_3_sign),	
    .io_sa_in_3_exp          (_outputDelayer_io_out_3_exp),	
    .io_sa_in_3_mantissa     (_outputDelayer_io_out_3_mantissa),	
    .io_sa_in_4_sign         (_outputDelayer_io_out_4_sign),	
    .io_sa_in_4_exp          (_outputDelayer_io_out_4_exp),	
    .io_sa_in_4_mantissa     (_outputDelayer_io_out_4_mantissa),	
    .io_sa_in_5_sign         (_outputDelayer_io_out_5_sign),	
    .io_sa_in_5_exp          (_outputDelayer_io_out_5_exp),	
    .io_sa_in_5_mantissa     (_outputDelayer_io_out_5_mantissa),	
    .io_sa_in_6_sign         (_outputDelayer_io_out_6_sign),	
    .io_sa_in_6_exp          (_outputDelayer_io_out_6_exp),	
    .io_sa_in_6_mantissa     (_outputDelayer_io_out_6_mantissa),	
    .io_sa_in_7_sign         (_outputDelayer_io_out_7_sign),	
    .io_sa_in_7_exp          (_outputDelayer_io_out_7_exp),	
    .io_sa_in_7_mantissa     (_outputDelayer_io_out_7_mantissa),	
    .io_sa_in_8_sign         (_outputDelayer_io_out_8_sign),	
    .io_sa_in_8_exp          (_outputDelayer_io_out_8_exp),	
    .io_sa_in_8_mantissa     (_outputDelayer_io_out_8_mantissa),	
    .io_sa_in_9_sign         (_outputDelayer_io_out_9_sign),	
    .io_sa_in_9_exp          (_outputDelayer_io_out_9_exp),	
    .io_sa_in_9_mantissa     (_outputDelayer_io_out_9_mantissa),	
    .io_sa_in_10_sign        (_outputDelayer_io_out_10_sign),	
    .io_sa_in_10_exp         (_outputDelayer_io_out_10_exp),	
    .io_sa_in_10_mantissa    (_outputDelayer_io_out_10_mantissa),	
    .io_sa_in_11_sign        (_outputDelayer_io_out_11_sign),	
    .io_sa_in_11_exp         (_outputDelayer_io_out_11_exp),	
    .io_sa_in_11_mantissa    (_outputDelayer_io_out_11_mantissa),	
    .io_sa_in_12_sign        (_outputDelayer_io_out_12_sign),	
    .io_sa_in_12_exp         (_outputDelayer_io_out_12_exp),	
    .io_sa_in_12_mantissa    (_outputDelayer_io_out_12_mantissa),	
    .io_sa_in_13_sign        (_outputDelayer_io_out_13_sign),	
    .io_sa_in_13_exp         (_outputDelayer_io_out_13_exp),	
    .io_sa_in_13_mantissa    (_outputDelayer_io_out_13_mantissa),	
    .io_sa_in_14_sign        (_outputDelayer_io_out_14_sign),	
    .io_sa_in_14_exp         (_outputDelayer_io_out_14_exp),	
    .io_sa_in_14_mantissa    (_outputDelayer_io_out_14_mantissa),	
    .io_sa_in_15_sign        (_outputDelayer_io_out_15_sign),	
    .io_sa_in_15_exp         (_outputDelayer_io_out_15_exp),	
    .io_sa_in_15_mantissa    (_outputDelayer_io_out_15_mantissa),	
    .io_sram_in_0_sign       (~REG_10 & _accRAM_sram_io_fullRead_0_data_0[31]),	
    .io_sram_in_0_exp        (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_0[30:23]),	
    .io_sram_in_0_mantissa   (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_0[22:0]),	
    .io_sram_in_1_sign       (~REG_10 & _accRAM_sram_io_fullRead_0_data_1[31]),	
    .io_sram_in_1_exp        (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_1[30:23]),	
    .io_sram_in_1_mantissa   (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_1[22:0]),	
    .io_sram_in_2_sign       (~REG_10 & _accRAM_sram_io_fullRead_0_data_2[31]),	
    .io_sram_in_2_exp        (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_2[30:23]),	
    .io_sram_in_2_mantissa   (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_2[22:0]),	
    .io_sram_in_3_sign       (~REG_10 & _accRAM_sram_io_fullRead_0_data_3[31]),	
    .io_sram_in_3_exp        (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_3[30:23]),	
    .io_sram_in_3_mantissa   (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_3[22:0]),	
    .io_sram_in_4_sign       (~REG_10 & _accRAM_sram_io_fullRead_0_data_4[31]),	
    .io_sram_in_4_exp        (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_4[30:23]),	
    .io_sram_in_4_mantissa   (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_4[22:0]),	
    .io_sram_in_5_sign       (~REG_10 & _accRAM_sram_io_fullRead_0_data_5[31]),	
    .io_sram_in_5_exp        (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_5[30:23]),	
    .io_sram_in_5_mantissa   (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_5[22:0]),	
    .io_sram_in_6_sign       (~REG_10 & _accRAM_sram_io_fullRead_0_data_6[31]),	
    .io_sram_in_6_exp        (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_6[30:23]),	
    .io_sram_in_6_mantissa   (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_6[22:0]),	
    .io_sram_in_7_sign       (~REG_10 & _accRAM_sram_io_fullRead_0_data_7[31]),	
    .io_sram_in_7_exp        (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_7[30:23]),	
    .io_sram_in_7_mantissa   (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_7[22:0]),	
    .io_sram_in_8_sign       (~REG_10 & _accRAM_sram_io_fullRead_0_data_8[31]),	
    .io_sram_in_8_exp        (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_8[30:23]),	
    .io_sram_in_8_mantissa   (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_8[22:0]),	
    .io_sram_in_9_sign       (~REG_10 & _accRAM_sram_io_fullRead_0_data_9[31]),	
    .io_sram_in_9_exp        (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_9[30:23]),	
    .io_sram_in_9_mantissa   (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_9[22:0]),	
    .io_sram_in_10_sign      (~REG_10 & _accRAM_sram_io_fullRead_0_data_10[31]),	
    .io_sram_in_10_exp       (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_10[30:23]),	
    .io_sram_in_10_mantissa  (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_10[22:0]),	
    .io_sram_in_11_sign      (~REG_10 & _accRAM_sram_io_fullRead_0_data_11[31]),	
    .io_sram_in_11_exp       (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_11[30:23]),	
    .io_sram_in_11_mantissa  (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_11[22:0]),	
    .io_sram_in_12_sign      (~REG_10 & _accRAM_sram_io_fullRead_0_data_12[31]),	
    .io_sram_in_12_exp       (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_12[30:23]),	
    .io_sram_in_12_mantissa  (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_12[22:0]),	
    .io_sram_in_13_sign      (~REG_10 & _accRAM_sram_io_fullRead_0_data_13[31]),	
    .io_sram_in_13_exp       (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_13[30:23]),	
    .io_sram_in_13_mantissa  (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_13[22:0]),	
    .io_sram_in_14_sign      (~REG_10 & _accRAM_sram_io_fullRead_0_data_14[31]),	
    .io_sram_in_14_exp       (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_14[30:23]),	
    .io_sram_in_14_mantissa  (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_14[22:0]),	
    .io_sram_in_15_sign      (~REG_10 & _accRAM_sram_io_fullRead_0_data_15[31]),	
    .io_sram_in_15_exp       (REG_10 ? 8'h0 : _accRAM_sram_io_fullRead_0_data_15[30:23]),	
    .io_sram_in_15_mantissa  (REG_10 ? 23'h0 : _accRAM_sram_io_fullRead_0_data_15[22:0]),	
    .io_sram_out_0_sign      (_accumulator_io_sram_out_0_sign),
    .io_sram_out_0_exp       (_accumulator_io_sram_out_0_exp),
    .io_sram_out_0_mantissa  (_accumulator_io_sram_out_0_mantissa),
    .io_sram_out_1_sign      (_accumulator_io_sram_out_1_sign),
    .io_sram_out_1_exp       (_accumulator_io_sram_out_1_exp),
    .io_sram_out_1_mantissa  (_accumulator_io_sram_out_1_mantissa),
    .io_sram_out_2_sign      (_accumulator_io_sram_out_2_sign),
    .io_sram_out_2_exp       (_accumulator_io_sram_out_2_exp),
    .io_sram_out_2_mantissa  (_accumulator_io_sram_out_2_mantissa),
    .io_sram_out_3_sign      (_accumulator_io_sram_out_3_sign),
    .io_sram_out_3_exp       (_accumulator_io_sram_out_3_exp),
    .io_sram_out_3_mantissa  (_accumulator_io_sram_out_3_mantissa),
    .io_sram_out_4_sign      (_accumulator_io_sram_out_4_sign),
    .io_sram_out_4_exp       (_accumulator_io_sram_out_4_exp),
    .io_sram_out_4_mantissa  (_accumulator_io_sram_out_4_mantissa),
    .io_sram_out_5_sign      (_accumulator_io_sram_out_5_sign),
    .io_sram_out_5_exp       (_accumulator_io_sram_out_5_exp),
    .io_sram_out_5_mantissa  (_accumulator_io_sram_out_5_mantissa),
    .io_sram_out_6_sign      (_accumulator_io_sram_out_6_sign),
    .io_sram_out_6_exp       (_accumulator_io_sram_out_6_exp),
    .io_sram_out_6_mantissa  (_accumulator_io_sram_out_6_mantissa),
    .io_sram_out_7_sign      (_accumulator_io_sram_out_7_sign),
    .io_sram_out_7_exp       (_accumulator_io_sram_out_7_exp),
    .io_sram_out_7_mantissa  (_accumulator_io_sram_out_7_mantissa),
    .io_sram_out_8_sign      (_accumulator_io_sram_out_8_sign),
    .io_sram_out_8_exp       (_accumulator_io_sram_out_8_exp),
    .io_sram_out_8_mantissa  (_accumulator_io_sram_out_8_mantissa),
    .io_sram_out_9_sign      (_accumulator_io_sram_out_9_sign),
    .io_sram_out_9_exp       (_accumulator_io_sram_out_9_exp),
    .io_sram_out_9_mantissa  (_accumulator_io_sram_out_9_mantissa),
    .io_sram_out_10_sign     (_accumulator_io_sram_out_10_sign),
    .io_sram_out_10_exp      (_accumulator_io_sram_out_10_exp),
    .io_sram_out_10_mantissa (_accumulator_io_sram_out_10_mantissa),
    .io_sram_out_11_sign     (_accumulator_io_sram_out_11_sign),
    .io_sram_out_11_exp      (_accumulator_io_sram_out_11_exp),
    .io_sram_out_11_mantissa (_accumulator_io_sram_out_11_mantissa),
    .io_sram_out_12_sign     (_accumulator_io_sram_out_12_sign),
    .io_sram_out_12_exp      (_accumulator_io_sram_out_12_exp),
    .io_sram_out_12_mantissa (_accumulator_io_sram_out_12_mantissa),
    .io_sram_out_13_sign     (_accumulator_io_sram_out_13_sign),
    .io_sram_out_13_exp      (_accumulator_io_sram_out_13_exp),
    .io_sram_out_13_mantissa (_accumulator_io_sram_out_13_mantissa),
    .io_sram_out_14_sign     (_accumulator_io_sram_out_14_sign),
    .io_sram_out_14_exp      (_accumulator_io_sram_out_14_exp),
    .io_sram_out_14_mantissa (_accumulator_io_sram_out_14_mantissa),
    .io_sram_out_15_sign     (_accumulator_io_sram_out_15_sign),
    .io_sram_out_15_exp      (_accumulator_io_sram_out_15_exp),
    .io_sram_out_15_mantissa (_accumulator_io_sram_out_15_mantissa)
  );	
  ScratchPadSRAM spRAM_sram (	
    .clock                       (clock),
    .io_fullRead_0_valid         (_mxControl_io_sp_read_valid & ~_mxControl_io_sp_read_bits_is_constant),	
    .io_fullRead_0_addr          (_mxControl_io_sp_read_bits_addr),	
    .io_fullRead_0_data_0        (_spRAM_sram_io_fullRead_0_data_0),
    .io_fullRead_0_data_1        (_spRAM_sram_io_fullRead_0_data_1),
    .io_fullRead_0_data_2        (_spRAM_sram_io_fullRead_0_data_2),
    .io_fullRead_0_data_3        (_spRAM_sram_io_fullRead_0_data_3),
    .io_fullRead_0_data_4        (_spRAM_sram_io_fullRead_0_data_4),
    .io_fullRead_0_data_5        (_spRAM_sram_io_fullRead_0_data_5),
    .io_fullRead_0_data_6        (_spRAM_sram_io_fullRead_0_data_6),
    .io_fullRead_0_data_7        (_spRAM_sram_io_fullRead_0_data_7),
    .io_fullRead_0_data_8        (_spRAM_sram_io_fullRead_0_data_8),
    .io_fullRead_0_data_9        (_spRAM_sram_io_fullRead_0_data_9),
    .io_fullRead_0_data_10       (_spRAM_sram_io_fullRead_0_data_10),
    .io_fullRead_0_data_11       (_spRAM_sram_io_fullRead_0_data_11),
    .io_fullRead_0_data_12       (_spRAM_sram_io_fullRead_0_data_12),
    .io_fullRead_0_data_13       (_spRAM_sram_io_fullRead_0_data_13),
    .io_fullRead_0_data_14       (_spRAM_sram_io_fullRead_0_data_14),
    .io_fullRead_0_data_15       (_spRAM_sram_io_fullRead_0_data_15),
    .io_narrowWrite_0_valid      (io_spad_write_0_valid),
    .io_narrowWrite_0_addr       (io_spad_write_0_addr),
    .io_narrowWrite_0_subBankIdx (io_spad_write_0_subBankIdx),
    .io_narrowWrite_0_data_0     (io_spad_write_0_data_0),
    .io_narrowWrite_0_data_1     (io_spad_write_0_data_1),
    .io_narrowWrite_0_data_2     (io_spad_write_0_data_2),
    .io_narrowWrite_0_data_3     (io_spad_write_0_data_3),
    .io_narrowWrite_1_valid      (io_spad_write_1_valid),
    .io_narrowWrite_1_addr       (io_spad_write_1_addr),
    .io_narrowWrite_1_ready      (io_spad_write_1_ready),
    .io_narrowWrite_1_subBankIdx (io_spad_write_1_subBankIdx),
    .io_narrowWrite_1_data_0     (io_spad_write_1_data_0),
    .io_narrowWrite_1_data_1     (io_spad_write_1_data_1),
    .io_narrowWrite_1_data_2     (io_spad_write_1_data_2),
    .io_narrowWrite_1_data_3     (io_spad_write_1_data_3),
    .io_narrowWrite_2_valid      (io_spad_write_2_valid),
    .io_narrowWrite_2_addr       (io_spad_write_2_addr),
    .io_narrowWrite_2_ready      (io_spad_write_2_ready),
    .io_narrowWrite_2_subBankIdx (io_spad_write_2_subBankIdx),
    .io_narrowWrite_2_data_0     (io_spad_write_2_data_0),
    .io_narrowWrite_2_data_1     (io_spad_write_2_data_1),
    .io_narrowWrite_2_data_2     (io_spad_write_2_data_2),
    .io_narrowWrite_2_data_3     (io_spad_write_2_data_3),
    .io_narrowWrite_3_valid      (io_spad_write_3_valid),
    .io_narrowWrite_3_addr       (io_spad_write_3_addr),
    .io_narrowWrite_3_ready      (io_spad_write_3_ready),
    .io_narrowWrite_3_subBankIdx (io_spad_write_3_subBankIdx),
    .io_narrowWrite_3_data_0     (io_spad_write_3_data_0),
    .io_narrowWrite_3_data_1     (io_spad_write_3_data_1),
    .io_narrowWrite_3_data_2     (io_spad_write_3_data_2),
    .io_narrowWrite_3_data_3     (io_spad_write_3_data_3),
    .io_narrowWrite_4_valid      (io_spad_write_4_valid),
    .io_narrowWrite_4_addr       (io_spad_write_4_addr),
    .io_narrowWrite_4_ready      (io_spad_write_4_ready),
    .io_narrowWrite_4_subBankIdx (io_spad_write_4_subBankIdx),
    .io_narrowWrite_4_data_0     (io_spad_write_4_data_0),
    .io_narrowWrite_4_data_1     (io_spad_write_4_data_1),
    .io_narrowWrite_4_data_2     (io_spad_write_4_data_2),
    .io_narrowWrite_4_data_3     (io_spad_write_4_data_3),
    .io_narrowWrite_5_valid      (io_spad_write_5_valid),
    .io_narrowWrite_5_addr       (io_spad_write_5_addr),
    .io_narrowWrite_5_ready      (io_spad_write_5_ready),
    .io_narrowWrite_5_subBankIdx (io_spad_write_5_subBankIdx),
    .io_narrowWrite_5_data_0     (io_spad_write_5_data_0),
    .io_narrowWrite_5_data_1     (io_spad_write_5_data_1),
    .io_narrowWrite_5_data_2     (io_spad_write_5_data_2),
    .io_narrowWrite_5_data_3     (io_spad_write_5_data_3),
    .io_narrowWrite_6_valid      (io_spad_write_6_valid),
    .io_narrowWrite_6_addr       (io_spad_write_6_addr),
    .io_narrowWrite_6_ready      (io_spad_write_6_ready),
    .io_narrowWrite_6_subBankIdx (io_spad_write_6_subBankIdx),
    .io_narrowWrite_6_data_0     (io_spad_write_6_data_0),
    .io_narrowWrite_6_data_1     (io_spad_write_6_data_1),
    .io_narrowWrite_6_data_2     (io_spad_write_6_data_2),
    .io_narrowWrite_6_data_3     (io_spad_write_6_data_3),
    .io_narrowWrite_7_valid      (io_spad_write_7_valid),
    .io_narrowWrite_7_addr       (io_spad_write_7_addr),
    .io_narrowWrite_7_ready      (io_spad_write_7_ready),
    .io_narrowWrite_7_subBankIdx (io_spad_write_7_subBankIdx),
    .io_narrowWrite_7_data_0     (io_spad_write_7_data_0),
    .io_narrowWrite_7_data_1     (io_spad_write_7_data_1),
    .io_narrowWrite_7_data_2     (io_spad_write_7_data_2),
    .io_narrowWrite_7_data_3     (io_spad_write_7_data_3)
  );	
  AccumulationSRAM accRAM_sram (	
    .clock                      (clock),
    .io_fullRead_0_valid        (_mxControl_io_acc_read_valid & ~_mxControl_io_acc_read_bits_is_constant),	
    .io_fullRead_0_addr         (_mxControl_io_acc_read_bits_addr),	
    .io_fullRead_0_data_0       (_accRAM_sram_io_fullRead_0_data_0),
    .io_fullRead_0_data_1       (_accRAM_sram_io_fullRead_0_data_1),
    .io_fullRead_0_data_2       (_accRAM_sram_io_fullRead_0_data_2),
    .io_fullRead_0_data_3       (_accRAM_sram_io_fullRead_0_data_3),
    .io_fullRead_0_data_4       (_accRAM_sram_io_fullRead_0_data_4),
    .io_fullRead_0_data_5       (_accRAM_sram_io_fullRead_0_data_5),
    .io_fullRead_0_data_6       (_accRAM_sram_io_fullRead_0_data_6),
    .io_fullRead_0_data_7       (_accRAM_sram_io_fullRead_0_data_7),
    .io_fullRead_0_data_8       (_accRAM_sram_io_fullRead_0_data_8),
    .io_fullRead_0_data_9       (_accRAM_sram_io_fullRead_0_data_9),
    .io_fullRead_0_data_10      (_accRAM_sram_io_fullRead_0_data_10),
    .io_fullRead_0_data_11      (_accRAM_sram_io_fullRead_0_data_11),
    .io_fullRead_0_data_12      (_accRAM_sram_io_fullRead_0_data_12),
    .io_fullRead_0_data_13      (_accRAM_sram_io_fullRead_0_data_13),
    .io_fullRead_0_data_14      (_accRAM_sram_io_fullRead_0_data_14),
    .io_fullRead_0_data_15      (_accRAM_sram_io_fullRead_0_data_15),
    .io_fullWrite_0_valid       (sram_accRAM_fullWrite_0_valid_REG),	
    .io_fullWrite_0_addr        (sram_accRAM_fullWrite_0_addr_REG),	
    .io_fullWrite_0_data_0      ({_accumulator_io_sram_out_0_sign, _accumulator_io_sram_out_0_exp, _accumulator_io_sram_out_0_mantissa}),	
    .io_fullWrite_0_data_1      ({_accumulator_io_sram_out_1_sign, _accumulator_io_sram_out_1_exp, _accumulator_io_sram_out_1_mantissa}),	
    .io_fullWrite_0_data_2      ({_accumulator_io_sram_out_2_sign, _accumulator_io_sram_out_2_exp, _accumulator_io_sram_out_2_mantissa}),	
    .io_fullWrite_0_data_3      ({_accumulator_io_sram_out_3_sign, _accumulator_io_sram_out_3_exp, _accumulator_io_sram_out_3_mantissa}),	
    .io_fullWrite_0_data_4      ({_accumulator_io_sram_out_4_sign, _accumulator_io_sram_out_4_exp, _accumulator_io_sram_out_4_mantissa}),	
    .io_fullWrite_0_data_5      ({_accumulator_io_sram_out_5_sign, _accumulator_io_sram_out_5_exp, _accumulator_io_sram_out_5_mantissa}),	
    .io_fullWrite_0_data_6      ({_accumulator_io_sram_out_6_sign, _accumulator_io_sram_out_6_exp, _accumulator_io_sram_out_6_mantissa}),	
    .io_fullWrite_0_data_7      ({_accumulator_io_sram_out_7_sign, _accumulator_io_sram_out_7_exp, _accumulator_io_sram_out_7_mantissa}),	
    .io_fullWrite_0_data_8      ({_accumulator_io_sram_out_8_sign, _accumulator_io_sram_out_8_exp, _accumulator_io_sram_out_8_mantissa}),	
    .io_fullWrite_0_data_9      ({_accumulator_io_sram_out_9_sign, _accumulator_io_sram_out_9_exp, _accumulator_io_sram_out_9_mantissa}),	
    .io_fullWrite_0_data_10     ({_accumulator_io_sram_out_10_sign, _accumulator_io_sram_out_10_exp, _accumulator_io_sram_out_10_mantissa}),	
    .io_fullWrite_0_data_11     ({_accumulator_io_sram_out_11_sign, _accumulator_io_sram_out_11_exp, _accumulator_io_sram_out_11_mantissa}),	
    .io_fullWrite_0_data_12     ({_accumulator_io_sram_out_12_sign, _accumulator_io_sram_out_12_exp, _accumulator_io_sram_out_12_mantissa}),	
    .io_fullWrite_0_data_13     ({_accumulator_io_sram_out_13_sign, _accumulator_io_sram_out_13_exp, _accumulator_io_sram_out_13_mantissa}),	
    .io_fullWrite_0_data_14     ({_accumulator_io_sram_out_14_sign, _accumulator_io_sram_out_14_exp, _accumulator_io_sram_out_14_mantissa}),	
    .io_fullWrite_0_data_15     ({_accumulator_io_sram_out_15_sign, _accumulator_io_sram_out_15_exp, _accumulator_io_sram_out_15_mantissa}),	
    .io_narrowRead_0_valid      (io_acc_read_0_valid),
    .io_narrowRead_0_addr       (io_acc_read_0_addr),
    .io_narrowRead_0_ready      (io_acc_read_0_ready),
    .io_narrowRead_0_subBankIdx (io_acc_read_0_subBankIdx),
    .io_narrowRead_0_data_0     (io_acc_read_0_data_0),
    .io_narrowRead_0_data_1     (io_acc_read_0_data_1),
    .io_narrowRead_1_valid      (io_acc_read_1_valid),
    .io_narrowRead_1_addr       (io_acc_read_1_addr),
    .io_narrowRead_1_ready      (io_acc_read_1_ready),
    .io_narrowRead_1_subBankIdx (io_acc_read_1_subBankIdx),
    .io_narrowRead_1_data_0     (io_acc_read_1_data_0),
    .io_narrowRead_1_data_1     (io_acc_read_1_data_1),
    .io_narrowRead_2_valid      (io_acc_read_2_valid),
    .io_narrowRead_2_addr       (io_acc_read_2_addr),
    .io_narrowRead_2_ready      (io_acc_read_2_ready),
    .io_narrowRead_2_subBankIdx (io_acc_read_2_subBankIdx),
    .io_narrowRead_2_data_0     (io_acc_read_2_data_0),
    .io_narrowRead_2_data_1     (io_acc_read_2_data_1),
    .io_narrowRead_3_valid      (io_acc_read_3_valid),
    .io_narrowRead_3_addr       (io_acc_read_3_addr),
    .io_narrowRead_3_ready      (io_acc_read_3_ready),
    .io_narrowRead_3_subBankIdx (io_acc_read_3_subBankIdx),
    .io_narrowRead_3_data_0     (io_acc_read_3_data_0),
    .io_narrowRead_3_data_1     (io_acc_read_3_data_1),
    .io_narrowRead_4_valid      (io_acc_read_4_valid),
    .io_narrowRead_4_addr       (io_acc_read_4_addr),
    .io_narrowRead_4_ready      (io_acc_read_4_ready),
    .io_narrowRead_4_subBankIdx (io_acc_read_4_subBankIdx),
    .io_narrowRead_4_data_0     (io_acc_read_4_data_0),
    .io_narrowRead_4_data_1     (io_acc_read_4_data_1),
    .io_narrowRead_5_valid      (io_acc_read_5_valid),
    .io_narrowRead_5_addr       (io_acc_read_5_addr),
    .io_narrowRead_5_ready      (io_acc_read_5_ready),
    .io_narrowRead_5_subBankIdx (io_acc_read_5_subBankIdx),
    .io_narrowRead_5_data_0     (io_acc_read_5_data_0),
    .io_narrowRead_5_data_1     (io_acc_read_5_data_1),
    .io_narrowRead_6_valid      (io_acc_read_6_valid),
    .io_narrowRead_6_addr       (io_acc_read_6_addr),
    .io_narrowRead_6_ready      (io_acc_read_6_ready),
    .io_narrowRead_6_subBankIdx (io_acc_read_6_subBankIdx),
    .io_narrowRead_6_data_0     (io_acc_read_6_data_0),
    .io_narrowRead_6_data_1     (io_acc_read_6_data_1),
    .io_narrowRead_7_valid      (io_acc_read_7_valid),
    .io_narrowRead_7_addr       (io_acc_read_7_addr),
    .io_narrowRead_7_ready      (io_acc_read_7_ready),
    .io_narrowRead_7_subBankIdx (io_acc_read_7_subBankIdx),
    .io_narrowRead_7_data_0     (io_acc_read_7_data_0),
    .io_narrowRead_7_data_1     (io_acc_read_7_data_1)
  );	
endmodule

