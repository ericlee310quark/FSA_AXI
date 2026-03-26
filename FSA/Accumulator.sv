
module Accumulator(	
  input         clock,	
  input         reset,	
  input         io_ctrl_in_valid,	
  input  [2:0]  io_ctrl_in_bits_cmd,	
  input         io_sa_in_0_sign,	
  input  [7:0]  io_sa_in_0_exp,	
  input  [22:0] io_sa_in_0_mantissa,	
  input         io_sa_in_1_sign,	
  input  [7:0]  io_sa_in_1_exp,	
  input  [22:0] io_sa_in_1_mantissa,	
  input         io_sa_in_2_sign,	
  input  [7:0]  io_sa_in_2_exp,	
  input  [22:0] io_sa_in_2_mantissa,	
  input         io_sa_in_3_sign,	
  input  [7:0]  io_sa_in_3_exp,	
  input  [22:0] io_sa_in_3_mantissa,	
  input         io_sa_in_4_sign,	
  input  [7:0]  io_sa_in_4_exp,	
  input  [22:0] io_sa_in_4_mantissa,	
  input         io_sa_in_5_sign,	
  input  [7:0]  io_sa_in_5_exp,	
  input  [22:0] io_sa_in_5_mantissa,	
  input         io_sa_in_6_sign,	
  input  [7:0]  io_sa_in_6_exp,	
  input  [22:0] io_sa_in_6_mantissa,	
  input         io_sa_in_7_sign,	
  input  [7:0]  io_sa_in_7_exp,	
  input  [22:0] io_sa_in_7_mantissa,	
  input         io_sa_in_8_sign,	
  input  [7:0]  io_sa_in_8_exp,	
  input  [22:0] io_sa_in_8_mantissa,	
  input         io_sa_in_9_sign,	
  input  [7:0]  io_sa_in_9_exp,	
  input  [22:0] io_sa_in_9_mantissa,	
  input         io_sa_in_10_sign,	
  input  [7:0]  io_sa_in_10_exp,	
  input  [22:0] io_sa_in_10_mantissa,	
  input         io_sa_in_11_sign,	
  input  [7:0]  io_sa_in_11_exp,	
  input  [22:0] io_sa_in_11_mantissa,	
  input         io_sa_in_12_sign,	
  input  [7:0]  io_sa_in_12_exp,	
  input  [22:0] io_sa_in_12_mantissa,	
  input         io_sa_in_13_sign,	
  input  [7:0]  io_sa_in_13_exp,	
  input  [22:0] io_sa_in_13_mantissa,	
  input         io_sa_in_14_sign,	
  input  [7:0]  io_sa_in_14_exp,	
  input  [22:0] io_sa_in_14_mantissa,	
  input         io_sa_in_15_sign,	
  input  [7:0]  io_sa_in_15_exp,	
  input  [22:0] io_sa_in_15_mantissa,	
  input         io_sram_in_0_sign,	
  input  [7:0]  io_sram_in_0_exp,	
  input  [22:0] io_sram_in_0_mantissa,	
  input         io_sram_in_1_sign,	
  input  [7:0]  io_sram_in_1_exp,	
  input  [22:0] io_sram_in_1_mantissa,	
  input         io_sram_in_2_sign,	
  input  [7:0]  io_sram_in_2_exp,	
  input  [22:0] io_sram_in_2_mantissa,	
  input         io_sram_in_3_sign,	
  input  [7:0]  io_sram_in_3_exp,	
  input  [22:0] io_sram_in_3_mantissa,	
  input         io_sram_in_4_sign,	
  input  [7:0]  io_sram_in_4_exp,	
  input  [22:0] io_sram_in_4_mantissa,	
  input         io_sram_in_5_sign,	
  input  [7:0]  io_sram_in_5_exp,	
  input  [22:0] io_sram_in_5_mantissa,	
  input         io_sram_in_6_sign,	
  input  [7:0]  io_sram_in_6_exp,	
  input  [22:0] io_sram_in_6_mantissa,	
  input         io_sram_in_7_sign,	
  input  [7:0]  io_sram_in_7_exp,	
  input  [22:0] io_sram_in_7_mantissa,	
  input         io_sram_in_8_sign,	
  input  [7:0]  io_sram_in_8_exp,	
  input  [22:0] io_sram_in_8_mantissa,	
  input         io_sram_in_9_sign,	
  input  [7:0]  io_sram_in_9_exp,	
  input  [22:0] io_sram_in_9_mantissa,	
  input         io_sram_in_10_sign,	
  input  [7:0]  io_sram_in_10_exp,	
  input  [22:0] io_sram_in_10_mantissa,	
  input         io_sram_in_11_sign,	
  input  [7:0]  io_sram_in_11_exp,	
  input  [22:0] io_sram_in_11_mantissa,	
  input         io_sram_in_12_sign,	
  input  [7:0]  io_sram_in_12_exp,	
  input  [22:0] io_sram_in_12_mantissa,	
  input         io_sram_in_13_sign,	
  input  [7:0]  io_sram_in_13_exp,	
  input  [22:0] io_sram_in_13_mantissa,	
  input         io_sram_in_14_sign,	
  input  [7:0]  io_sram_in_14_exp,	
  input  [22:0] io_sram_in_14_mantissa,	
  input         io_sram_in_15_sign,	
  input  [7:0]  io_sram_in_15_exp,	
  input  [22:0] io_sram_in_15_mantissa,	
  output        io_sram_out_0_sign,	
  output [7:0]  io_sram_out_0_exp,	
  output [22:0] io_sram_out_0_mantissa,	
  output        io_sram_out_1_sign,	
  output [7:0]  io_sram_out_1_exp,	
  output [22:0] io_sram_out_1_mantissa,	
  output        io_sram_out_2_sign,	
  output [7:0]  io_sram_out_2_exp,	
  output [22:0] io_sram_out_2_mantissa,	
  output        io_sram_out_3_sign,	
  output [7:0]  io_sram_out_3_exp,	
  output [22:0] io_sram_out_3_mantissa,	
  output        io_sram_out_4_sign,	
  output [7:0]  io_sram_out_4_exp,	
  output [22:0] io_sram_out_4_mantissa,	
  output        io_sram_out_5_sign,	
  output [7:0]  io_sram_out_5_exp,	
  output [22:0] io_sram_out_5_mantissa,	
  output        io_sram_out_6_sign,	
  output [7:0]  io_sram_out_6_exp,	
  output [22:0] io_sram_out_6_mantissa,	
  output        io_sram_out_7_sign,	
  output [7:0]  io_sram_out_7_exp,	
  output [22:0] io_sram_out_7_mantissa,	
  output        io_sram_out_8_sign,	
  output [7:0]  io_sram_out_8_exp,	
  output [22:0] io_sram_out_8_mantissa,	
  output        io_sram_out_9_sign,	
  output [7:0]  io_sram_out_9_exp,	
  output [22:0] io_sram_out_9_mantissa,	
  output        io_sram_out_10_sign,	
  output [7:0]  io_sram_out_10_exp,	
  output [22:0] io_sram_out_10_mantissa,	
  output        io_sram_out_11_sign,	
  output [7:0]  io_sram_out_11_exp,	
  output [22:0] io_sram_out_11_mantissa,	
  output        io_sram_out_12_sign,	
  output [7:0]  io_sram_out_12_exp,	
  output [22:0] io_sram_out_12_mantissa,	
  output        io_sram_out_13_sign,	
  output [7:0]  io_sram_out_13_exp,	
  output [22:0] io_sram_out_13_mantissa,	
  output        io_sram_out_14_sign,	
  output [7:0]  io_sram_out_14_exp,	
  output [22:0] io_sram_out_14_mantissa,	
  output        io_sram_out_15_sign,	
  output [7:0]  io_sram_out_15_exp,	
  output [22:0] io_sram_out_15_mantissa	
);

  wire        _accUnit_15_io_out_accType_sign;	
  wire [7:0]  _accUnit_15_io_out_accType_exp;	
  wire [22:0] _accUnit_15_io_out_accType_mantissa;	
  wire        _accUnit_15_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_14_io_out_accType_sign;	
  wire [7:0]  _accUnit_14_io_out_accType_exp;	
  wire [22:0] _accUnit_14_io_out_accType_mantissa;	
  wire        _accUnit_14_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_13_io_out_accType_sign;	
  wire [7:0]  _accUnit_13_io_out_accType_exp;	
  wire [22:0] _accUnit_13_io_out_accType_mantissa;	
  wire        _accUnit_13_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_12_io_out_accType_sign;	
  wire [7:0]  _accUnit_12_io_out_accType_exp;	
  wire [22:0] _accUnit_12_io_out_accType_mantissa;	
  wire        _accUnit_12_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_11_io_out_accType_sign;	
  wire [7:0]  _accUnit_11_io_out_accType_exp;	
  wire [22:0] _accUnit_11_io_out_accType_mantissa;	
  wire        _accUnit_11_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_10_io_out_accType_sign;	
  wire [7:0]  _accUnit_10_io_out_accType_exp;	
  wire [22:0] _accUnit_10_io_out_accType_mantissa;	
  wire        _accUnit_10_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_9_io_out_accType_sign;	
  wire [7:0]  _accUnit_9_io_out_accType_exp;	
  wire [22:0] _accUnit_9_io_out_accType_mantissa;	
  wire        _accUnit_9_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_8_io_out_accType_sign;	
  wire [7:0]  _accUnit_8_io_out_accType_exp;	
  wire [22:0] _accUnit_8_io_out_accType_mantissa;	
  wire        _accUnit_8_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_7_io_out_accType_sign;	
  wire [7:0]  _accUnit_7_io_out_accType_exp;	
  wire [22:0] _accUnit_7_io_out_accType_mantissa;	
  wire        _accUnit_7_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_6_io_out_accType_sign;	
  wire [7:0]  _accUnit_6_io_out_accType_exp;	
  wire [22:0] _accUnit_6_io_out_accType_mantissa;	
  wire        _accUnit_6_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_5_io_out_accType_sign;	
  wire [7:0]  _accUnit_5_io_out_accType_exp;	
  wire [22:0] _accUnit_5_io_out_accType_mantissa;	
  wire        _accUnit_5_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_4_io_out_accType_sign;	
  wire [7:0]  _accUnit_4_io_out_accType_exp;	
  wire [22:0] _accUnit_4_io_out_accType_mantissa;	
  wire        _accUnit_4_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_3_io_out_accType_sign;	
  wire [7:0]  _accUnit_3_io_out_accType_exp;	
  wire [22:0] _accUnit_3_io_out_accType_mantissa;	
  wire        _accUnit_3_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_2_io_out_accType_sign;	
  wire [7:0]  _accUnit_2_io_out_accType_exp;	
  wire [22:0] _accUnit_2_io_out_accType_mantissa;	
  wire        _accUnit_2_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_1_io_out_accType_sign;	
  wire [7:0]  _accUnit_1_io_out_accType_exp;	
  wire [22:0] _accUnit_1_io_out_accType_mantissa;	
  wire        _accUnit_1_multiCycleIO_reciprocal_out_valid;	
  wire        _accUnit_0_io_out_accType_sign;	
  wire [7:0]  _accUnit_0_io_out_accType_exp;	
  wire [22:0] _accUnit_0_io_out_accType_mantissa;	
  wire        _accUnit_0_multiCycleIO_reciprocal_out_valid;	
  reg         scale_0_sign;	
  reg  [7:0]  scale_0_exp;	
  reg  [22:0] scale_0_mantissa;	
  reg         scale_1_sign;	
  reg  [7:0]  scale_1_exp;	
  reg  [22:0] scale_1_mantissa;	
  reg         scale_2_sign;	
  reg  [7:0]  scale_2_exp;	
  reg  [22:0] scale_2_mantissa;	
  reg         scale_3_sign;	
  reg  [7:0]  scale_3_exp;	
  reg  [22:0] scale_3_mantissa;	
  reg         scale_4_sign;	
  reg  [7:0]  scale_4_exp;	
  reg  [22:0] scale_4_mantissa;	
  reg         scale_5_sign;	
  reg  [7:0]  scale_5_exp;	
  reg  [22:0] scale_5_mantissa;	
  reg         scale_6_sign;	
  reg  [7:0]  scale_6_exp;	
  reg  [22:0] scale_6_mantissa;	
  reg         scale_7_sign;	
  reg  [7:0]  scale_7_exp;	
  reg  [22:0] scale_7_mantissa;	
  reg         scale_8_sign;	
  reg  [7:0]  scale_8_exp;	
  reg  [22:0] scale_8_mantissa;	
  reg         scale_9_sign;	
  reg  [7:0]  scale_9_exp;	
  reg  [22:0] scale_9_mantissa;	
  reg         scale_10_sign;	
  reg  [7:0]  scale_10_exp;	
  reg  [22:0] scale_10_mantissa;	
  reg         scale_11_sign;	
  reg  [7:0]  scale_11_exp;	
  reg  [22:0] scale_11_mantissa;	
  reg         scale_12_sign;	
  reg  [7:0]  scale_12_exp;	
  reg  [22:0] scale_12_mantissa;	
  reg         scale_13_sign;	
  reg  [7:0]  scale_13_exp;	
  reg  [22:0] scale_13_mantissa;	
  reg         scale_14_sign;	
  reg  [7:0]  scale_14_exp;	
  reg  [22:0] scale_14_mantissa;	
  reg         scale_15_sign;	
  reg  [7:0]  scale_15_exp;	
  reg  [22:0] scale_15_mantissa;	
  wire        exp_s1 = io_ctrl_in_bits_cmd == 3'h0;	
  wire        exp_s2 = io_ctrl_in_bits_cmd == 3'h1;	
  wire        acc_sa = io_ctrl_in_bits_cmd == 3'h2;	
  wire        accUnit_9_multiCycleIO_reciprocal_in_valid = io_ctrl_in_valid & io_ctrl_in_bits_cmd == 3'h5;	
  wire        set = io_ctrl_in_bits_cmd == 3'h4;	
  wire        _GEN = exp_s1 | exp_s2;	
  always @(posedge clock) begin	
    if (io_ctrl_in_valid) begin	
      if (_GEN | _accUnit_0_multiCycleIO_reciprocal_out_valid) begin	
        scale_0_sign <= _accUnit_0_io_out_accType_sign;	
        scale_0_exp <= _accUnit_0_io_out_accType_exp;	
        scale_0_mantissa <= _accUnit_0_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_0_sign <= io_sram_in_0_sign;	
        scale_0_exp <= io_sram_in_0_exp;	
        scale_0_mantissa <= io_sram_in_0_mantissa;	
      end
      if (_GEN | _accUnit_1_multiCycleIO_reciprocal_out_valid) begin	
        scale_1_sign <= _accUnit_1_io_out_accType_sign;	
        scale_1_exp <= _accUnit_1_io_out_accType_exp;	
        scale_1_mantissa <= _accUnit_1_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_1_sign <= io_sram_in_1_sign;	
        scale_1_exp <= io_sram_in_1_exp;	
        scale_1_mantissa <= io_sram_in_1_mantissa;	
      end
      if (_GEN | _accUnit_2_multiCycleIO_reciprocal_out_valid) begin	
        scale_2_sign <= _accUnit_2_io_out_accType_sign;	
        scale_2_exp <= _accUnit_2_io_out_accType_exp;	
        scale_2_mantissa <= _accUnit_2_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_2_sign <= io_sram_in_2_sign;	
        scale_2_exp <= io_sram_in_2_exp;	
        scale_2_mantissa <= io_sram_in_2_mantissa;	
      end
      if (_GEN | _accUnit_3_multiCycleIO_reciprocal_out_valid) begin	
        scale_3_sign <= _accUnit_3_io_out_accType_sign;	
        scale_3_exp <= _accUnit_3_io_out_accType_exp;	
        scale_3_mantissa <= _accUnit_3_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_3_sign <= io_sram_in_3_sign;	
        scale_3_exp <= io_sram_in_3_exp;	
        scale_3_mantissa <= io_sram_in_3_mantissa;	
      end
      if (_GEN | _accUnit_4_multiCycleIO_reciprocal_out_valid) begin	
        scale_4_sign <= _accUnit_4_io_out_accType_sign;	
        scale_4_exp <= _accUnit_4_io_out_accType_exp;	
        scale_4_mantissa <= _accUnit_4_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_4_sign <= io_sram_in_4_sign;	
        scale_4_exp <= io_sram_in_4_exp;	
        scale_4_mantissa <= io_sram_in_4_mantissa;	
      end
      if (_GEN | _accUnit_5_multiCycleIO_reciprocal_out_valid) begin	
        scale_5_sign <= _accUnit_5_io_out_accType_sign;	
        scale_5_exp <= _accUnit_5_io_out_accType_exp;	
        scale_5_mantissa <= _accUnit_5_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_5_sign <= io_sram_in_5_sign;	
        scale_5_exp <= io_sram_in_5_exp;	
        scale_5_mantissa <= io_sram_in_5_mantissa;	
      end
      if (_GEN | _accUnit_6_multiCycleIO_reciprocal_out_valid) begin	
        scale_6_sign <= _accUnit_6_io_out_accType_sign;	
        scale_6_exp <= _accUnit_6_io_out_accType_exp;	
        scale_6_mantissa <= _accUnit_6_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_6_sign <= io_sram_in_6_sign;	
        scale_6_exp <= io_sram_in_6_exp;	
        scale_6_mantissa <= io_sram_in_6_mantissa;	
      end
      if (_GEN | _accUnit_7_multiCycleIO_reciprocal_out_valid) begin	
        scale_7_sign <= _accUnit_7_io_out_accType_sign;	
        scale_7_exp <= _accUnit_7_io_out_accType_exp;	
        scale_7_mantissa <= _accUnit_7_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_7_sign <= io_sram_in_7_sign;	
        scale_7_exp <= io_sram_in_7_exp;	
        scale_7_mantissa <= io_sram_in_7_mantissa;	
      end
      if (_GEN | _accUnit_8_multiCycleIO_reciprocal_out_valid) begin	
        scale_8_sign <= _accUnit_8_io_out_accType_sign;	
        scale_8_exp <= _accUnit_8_io_out_accType_exp;	
        scale_8_mantissa <= _accUnit_8_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_8_sign <= io_sram_in_8_sign;	
        scale_8_exp <= io_sram_in_8_exp;	
        scale_8_mantissa <= io_sram_in_8_mantissa;	
      end
      if (_GEN | _accUnit_9_multiCycleIO_reciprocal_out_valid) begin	
        scale_9_sign <= _accUnit_9_io_out_accType_sign;	
        scale_9_exp <= _accUnit_9_io_out_accType_exp;	
        scale_9_mantissa <= _accUnit_9_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_9_sign <= io_sram_in_9_sign;	
        scale_9_exp <= io_sram_in_9_exp;	
        scale_9_mantissa <= io_sram_in_9_mantissa;	
      end
      if (_GEN | _accUnit_10_multiCycleIO_reciprocal_out_valid) begin	
        scale_10_sign <= _accUnit_10_io_out_accType_sign;	
        scale_10_exp <= _accUnit_10_io_out_accType_exp;	
        scale_10_mantissa <= _accUnit_10_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_10_sign <= io_sram_in_10_sign;	
        scale_10_exp <= io_sram_in_10_exp;	
        scale_10_mantissa <= io_sram_in_10_mantissa;	
      end
      if (_GEN | _accUnit_11_multiCycleIO_reciprocal_out_valid) begin	
        scale_11_sign <= _accUnit_11_io_out_accType_sign;	
        scale_11_exp <= _accUnit_11_io_out_accType_exp;	
        scale_11_mantissa <= _accUnit_11_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_11_sign <= io_sram_in_11_sign;	
        scale_11_exp <= io_sram_in_11_exp;	
        scale_11_mantissa <= io_sram_in_11_mantissa;	
      end
      if (_GEN | _accUnit_12_multiCycleIO_reciprocal_out_valid) begin	
        scale_12_sign <= _accUnit_12_io_out_accType_sign;	
        scale_12_exp <= _accUnit_12_io_out_accType_exp;	
        scale_12_mantissa <= _accUnit_12_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_12_sign <= io_sram_in_12_sign;	
        scale_12_exp <= io_sram_in_12_exp;	
        scale_12_mantissa <= io_sram_in_12_mantissa;	
      end
      if (_GEN | _accUnit_13_multiCycleIO_reciprocal_out_valid) begin	
        scale_13_sign <= _accUnit_13_io_out_accType_sign;	
        scale_13_exp <= _accUnit_13_io_out_accType_exp;	
        scale_13_mantissa <= _accUnit_13_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_13_sign <= io_sram_in_13_sign;	
        scale_13_exp <= io_sram_in_13_exp;	
        scale_13_mantissa <= io_sram_in_13_mantissa;	
      end
      if (_GEN | _accUnit_14_multiCycleIO_reciprocal_out_valid) begin	
        scale_14_sign <= _accUnit_14_io_out_accType_sign;	
        scale_14_exp <= _accUnit_14_io_out_accType_exp;	
        scale_14_mantissa <= _accUnit_14_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_14_sign <= io_sram_in_14_sign;	
        scale_14_exp <= io_sram_in_14_exp;	
        scale_14_mantissa <= io_sram_in_14_mantissa;	
      end
      if (_GEN | _accUnit_15_multiCycleIO_reciprocal_out_valid) begin	
        scale_15_sign <= _accUnit_15_io_out_accType_sign;	
        scale_15_exp <= _accUnit_15_io_out_accType_exp;	
        scale_15_mantissa <= _accUnit_15_io_out_accType_mantissa;	
      end
      else if (set) begin	
        scale_15_sign <= io_sram_in_15_sign;	
        scale_15_exp <= io_sram_in_15_exp;	
        scale_15_mantissa <= io_sram_in_15_mantissa;	
      end
    end
  end // always @(posedge)
  `ifdef ENABLE_INITIAL_REG_	
    `ifdef FIRRTL_BEFORE_INITIAL	
      `FIRRTL_BEFORE_INITIAL	
    `endif // FIRRTL_BEFORE_INITIAL
    logic [31:0] _RANDOM[0:15];	
    initial begin	
      `ifdef INIT_RANDOM_PROLOG_	
        `INIT_RANDOM_PROLOG_	
      `endif // INIT_RANDOM_PROLOG_
      `ifdef RANDOMIZE_REG_INIT	
        for (logic [4:0] i = 5'h0; i < 5'h10; i += 5'h1) begin
          _RANDOM[i[3:0]] = `RANDOM;	
        end	
        scale_0_sign = _RANDOM[4'h0][0];	
        scale_0_exp = _RANDOM[4'h0][8:1];	
        scale_0_mantissa = _RANDOM[4'h0][31:9];	
        scale_1_sign = _RANDOM[4'h1][0];	
        scale_1_exp = _RANDOM[4'h1][8:1];	
        scale_1_mantissa = _RANDOM[4'h1][31:9];	
        scale_2_sign = _RANDOM[4'h2][0];	
        scale_2_exp = _RANDOM[4'h2][8:1];	
        scale_2_mantissa = _RANDOM[4'h2][31:9];	
        scale_3_sign = _RANDOM[4'h3][0];	
        scale_3_exp = _RANDOM[4'h3][8:1];	
        scale_3_mantissa = _RANDOM[4'h3][31:9];	
        scale_4_sign = _RANDOM[4'h4][0];	
        scale_4_exp = _RANDOM[4'h4][8:1];	
        scale_4_mantissa = _RANDOM[4'h4][31:9];	
        scale_5_sign = _RANDOM[4'h5][0];	
        scale_5_exp = _RANDOM[4'h5][8:1];	
        scale_5_mantissa = _RANDOM[4'h5][31:9];	
        scale_6_sign = _RANDOM[4'h6][0];	
        scale_6_exp = _RANDOM[4'h6][8:1];	
        scale_6_mantissa = _RANDOM[4'h6][31:9];	
        scale_7_sign = _RANDOM[4'h7][0];	
        scale_7_exp = _RANDOM[4'h7][8:1];	
        scale_7_mantissa = _RANDOM[4'h7][31:9];	
        scale_8_sign = _RANDOM[4'h8][0];	
        scale_8_exp = _RANDOM[4'h8][8:1];	
        scale_8_mantissa = _RANDOM[4'h8][31:9];	
        scale_9_sign = _RANDOM[4'h9][0];	
        scale_9_exp = _RANDOM[4'h9][8:1];	
        scale_9_mantissa = _RANDOM[4'h9][31:9];	
        scale_10_sign = _RANDOM[4'hA][0];	
        scale_10_exp = _RANDOM[4'hA][8:1];	
        scale_10_mantissa = _RANDOM[4'hA][31:9];	
        scale_11_sign = _RANDOM[4'hB][0];	
        scale_11_exp = _RANDOM[4'hB][8:1];	
        scale_11_mantissa = _RANDOM[4'hB][31:9];	
        scale_12_sign = _RANDOM[4'hC][0];	
        scale_12_exp = _RANDOM[4'hC][8:1];	
        scale_12_mantissa = _RANDOM[4'hC][31:9];	
        scale_13_sign = _RANDOM[4'hD][0];	
        scale_13_exp = _RANDOM[4'hD][8:1];	
        scale_13_mantissa = _RANDOM[4'hD][31:9];	
        scale_14_sign = _RANDOM[4'hE][0];	
        scale_14_exp = _RANDOM[4'hE][8:1];	
        scale_14_mantissa = _RANDOM[4'hE][31:9];	
        scale_15_sign = _RANDOM[4'hF][0];	
        scale_15_exp = _RANDOM[4'hF][8:1];	
        scale_15_mantissa = _RANDOM[4'hF][31:9];	
      `endif // RANDOMIZE_REG_INIT
    end // initial
    `ifdef FIRRTL_AFTER_INITIAL	
      `FIRRTL_AFTER_INITIAL	
    `endif // FIRRTL_AFTER_INITIAL
  `endif // ENABLE_INITIAL_REG_
  FPAccUnit accUnit_0 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_0_sign : scale_0_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_0_exp : scale_0_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_0_mantissa : scale_0_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_0_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_0_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_0_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_0_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_0_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_0_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_0_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_0_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_0_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_0_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_1 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_1_sign : scale_1_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_1_exp : scale_1_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_1_mantissa : scale_1_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_1_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_1_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_1_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_1_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_1_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_1_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_1_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_1_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_1_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_1_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_2 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_2_sign : scale_2_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_2_exp : scale_2_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_2_mantissa : scale_2_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_2_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_2_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_2_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_2_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_2_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_2_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_2_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_2_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_2_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_2_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_3 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_3_sign : scale_3_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_3_exp : scale_3_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_3_mantissa : scale_3_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_3_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_3_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_3_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_3_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_3_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_3_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_3_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_3_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_3_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_3_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_4 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_4_sign : scale_4_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_4_exp : scale_4_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_4_mantissa : scale_4_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_4_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_4_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_4_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_4_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_4_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_4_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_4_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_4_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_4_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_4_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_5 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_5_sign : scale_5_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_5_exp : scale_5_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_5_mantissa : scale_5_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_5_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_5_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_5_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_5_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_5_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_5_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_5_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_5_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_5_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_5_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_6 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_6_sign : scale_6_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_6_exp : scale_6_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_6_mantissa : scale_6_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_6_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_6_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_6_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_6_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_6_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_6_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_6_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_6_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_6_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_6_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_7 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_7_sign : scale_7_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_7_exp : scale_7_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_7_mantissa : scale_7_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_7_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_7_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_7_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_7_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_7_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_7_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_7_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_7_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_7_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_7_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_8 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_8_sign : scale_8_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_8_exp : scale_8_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_8_mantissa : scale_8_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_8_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_8_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_8_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_8_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_8_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_8_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_8_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_8_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_8_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_8_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_9 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_9_sign : scale_9_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_9_exp : scale_9_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_9_mantissa : scale_9_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_9_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_9_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_9_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_9_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_9_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_9_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_9_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_9_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_9_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_9_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_10 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_10_sign : scale_10_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_10_exp : scale_10_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_10_mantissa : scale_10_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_10_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_10_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_10_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_10_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_10_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_10_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_10_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_10_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_10_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_10_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_11 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_11_sign : scale_11_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_11_exp : scale_11_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_11_mantissa : scale_11_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_11_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_11_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_11_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_11_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_11_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_11_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_11_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_11_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_11_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_11_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_12 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_12_sign : scale_12_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_12_exp : scale_12_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_12_mantissa : scale_12_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_12_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_12_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_12_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_12_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_12_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_12_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_12_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_12_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_12_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_12_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_13 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_13_sign : scale_13_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_13_exp : scale_13_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_13_mantissa : scale_13_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_13_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_13_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_13_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_13_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_13_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_13_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_13_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_13_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_13_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_13_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_14 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_14_sign : scale_14_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_14_exp : scale_14_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_14_mantissa : scale_14_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_14_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_14_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_14_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_14_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_14_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_14_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_14_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_14_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_14_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_14_multiCycleIO_reciprocal_out_valid)
  );	
  FPAccUnit accUnit_15 (	
    .clock                             (clock),
    .reset                             (reset),
    .io_in_a_sign                      (exp_s1 ? io_sa_in_15_sign : scale_15_sign),	
    .io_in_a_exp                       (exp_s1 ? io_sa_in_15_exp : scale_15_exp),	
    .io_in_a_mantissa                  (exp_s1 ? io_sa_in_15_mantissa : scale_15_mantissa),	
    .io_in_b_sign                      (~exp_s1 & io_sram_in_15_sign),	
    .io_in_b_exp                       (exp_s1 ? 8'h7D : io_sram_in_15_exp),	
    .io_in_b_mantissa                  (exp_s1 ? 23'h38AA3B : io_sram_in_15_mantissa),	
    .io_in_c_sign                      (acc_sa & io_sa_in_15_sign),	
    .io_in_c_exp                       (acc_sa ? io_sa_in_15_exp : 8'h0),	
    .io_in_c_mantissa                  (acc_sa ? io_sa_in_15_mantissa : 23'h0),	
    .io_in_cmd                         (exp_s2),	
    .io_out_accType_sign               (_accUnit_15_io_out_accType_sign),
    .io_out_accType_exp                (_accUnit_15_io_out_accType_exp),
    .io_out_accType_mantissa           (_accUnit_15_io_out_accType_mantissa),
    .multiCycleIO_reciprocal_in_valid  (accUnit_9_multiCycleIO_reciprocal_in_valid),	
    .multiCycleIO_reciprocal_out_valid (_accUnit_15_multiCycleIO_reciprocal_out_valid)
  );	
  assign io_sram_out_0_sign = _accUnit_0_io_out_accType_sign;	
  assign io_sram_out_0_exp = _accUnit_0_io_out_accType_exp;	
  assign io_sram_out_0_mantissa = _accUnit_0_io_out_accType_mantissa;	
  assign io_sram_out_1_sign = _accUnit_1_io_out_accType_sign;	
  assign io_sram_out_1_exp = _accUnit_1_io_out_accType_exp;	
  assign io_sram_out_1_mantissa = _accUnit_1_io_out_accType_mantissa;	
  assign io_sram_out_2_sign = _accUnit_2_io_out_accType_sign;	
  assign io_sram_out_2_exp = _accUnit_2_io_out_accType_exp;	
  assign io_sram_out_2_mantissa = _accUnit_2_io_out_accType_mantissa;	
  assign io_sram_out_3_sign = _accUnit_3_io_out_accType_sign;	
  assign io_sram_out_3_exp = _accUnit_3_io_out_accType_exp;	
  assign io_sram_out_3_mantissa = _accUnit_3_io_out_accType_mantissa;	
  assign io_sram_out_4_sign = _accUnit_4_io_out_accType_sign;	
  assign io_sram_out_4_exp = _accUnit_4_io_out_accType_exp;	
  assign io_sram_out_4_mantissa = _accUnit_4_io_out_accType_mantissa;	
  assign io_sram_out_5_sign = _accUnit_5_io_out_accType_sign;	
  assign io_sram_out_5_exp = _accUnit_5_io_out_accType_exp;	
  assign io_sram_out_5_mantissa = _accUnit_5_io_out_accType_mantissa;	
  assign io_sram_out_6_sign = _accUnit_6_io_out_accType_sign;	
  assign io_sram_out_6_exp = _accUnit_6_io_out_accType_exp;	
  assign io_sram_out_6_mantissa = _accUnit_6_io_out_accType_mantissa;	
  assign io_sram_out_7_sign = _accUnit_7_io_out_accType_sign;	
  assign io_sram_out_7_exp = _accUnit_7_io_out_accType_exp;	
  assign io_sram_out_7_mantissa = _accUnit_7_io_out_accType_mantissa;	
  assign io_sram_out_8_sign = _accUnit_8_io_out_accType_sign;	
  assign io_sram_out_8_exp = _accUnit_8_io_out_accType_exp;	
  assign io_sram_out_8_mantissa = _accUnit_8_io_out_accType_mantissa;	
  assign io_sram_out_9_sign = _accUnit_9_io_out_accType_sign;	
  assign io_sram_out_9_exp = _accUnit_9_io_out_accType_exp;	
  assign io_sram_out_9_mantissa = _accUnit_9_io_out_accType_mantissa;	
  assign io_sram_out_10_sign = _accUnit_10_io_out_accType_sign;	
  assign io_sram_out_10_exp = _accUnit_10_io_out_accType_exp;	
  assign io_sram_out_10_mantissa = _accUnit_10_io_out_accType_mantissa;	
  assign io_sram_out_11_sign = _accUnit_11_io_out_accType_sign;	
  assign io_sram_out_11_exp = _accUnit_11_io_out_accType_exp;	
  assign io_sram_out_11_mantissa = _accUnit_11_io_out_accType_mantissa;	
  assign io_sram_out_12_sign = _accUnit_12_io_out_accType_sign;	
  assign io_sram_out_12_exp = _accUnit_12_io_out_accType_exp;	
  assign io_sram_out_12_mantissa = _accUnit_12_io_out_accType_mantissa;	
  assign io_sram_out_13_sign = _accUnit_13_io_out_accType_sign;	
  assign io_sram_out_13_exp = _accUnit_13_io_out_accType_exp;	
  assign io_sram_out_13_mantissa = _accUnit_13_io_out_accType_mantissa;	
  assign io_sram_out_14_sign = _accUnit_14_io_out_accType_sign;	
  assign io_sram_out_14_exp = _accUnit_14_io_out_accType_exp;	
  assign io_sram_out_14_mantissa = _accUnit_14_io_out_accType_mantissa;	
  assign io_sram_out_15_sign = _accUnit_15_io_out_accType_sign;	
  assign io_sram_out_15_exp = _accUnit_15_io_out_accType_exp;	
  assign io_sram_out_15_mantissa = _accUnit_15_io_out_accType_mantissa;	
endmodule

