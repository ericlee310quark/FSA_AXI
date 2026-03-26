
module ScratchPadSRAM(	
  input         clock,	
  input         io_fullRead_0_valid,	
  input  [6:0]  io_fullRead_0_addr,	
  output [15:0] io_fullRead_0_data_0,	
  output [15:0] io_fullRead_0_data_1,	
  output [15:0] io_fullRead_0_data_2,	
  output [15:0] io_fullRead_0_data_3,	
  output [15:0] io_fullRead_0_data_4,	
  output [15:0] io_fullRead_0_data_5,	
  output [15:0] io_fullRead_0_data_6,	
  output [15:0] io_fullRead_0_data_7,	
  output [15:0] io_fullRead_0_data_8,	
  output [15:0] io_fullRead_0_data_9,	
  output [15:0] io_fullRead_0_data_10,	
  output [15:0] io_fullRead_0_data_11,	
  output [15:0] io_fullRead_0_data_12,	
  output [15:0] io_fullRead_0_data_13,	
  output [15:0] io_fullRead_0_data_14,	
  output [15:0] io_fullRead_0_data_15,	
  input         io_narrowWrite_0_valid,	
  input  [6:0]  io_narrowWrite_0_addr,	
  input  [1:0]  io_narrowWrite_0_subBankIdx,	
  input  [15:0] io_narrowWrite_0_data_0,	
  input  [15:0] io_narrowWrite_0_data_1,	
  input  [15:0] io_narrowWrite_0_data_2,	
  input  [15:0] io_narrowWrite_0_data_3,	
  input         io_narrowWrite_1_valid,	
  input  [6:0]  io_narrowWrite_1_addr,	
  output        io_narrowWrite_1_ready,	
  input  [1:0]  io_narrowWrite_1_subBankIdx,	
  input  [15:0] io_narrowWrite_1_data_0,	
  input  [15:0] io_narrowWrite_1_data_1,	
  input  [15:0] io_narrowWrite_1_data_2,	
  input  [15:0] io_narrowWrite_1_data_3,	
  input         io_narrowWrite_2_valid,	
  input  [6:0]  io_narrowWrite_2_addr,	
  output        io_narrowWrite_2_ready,	
  input  [1:0]  io_narrowWrite_2_subBankIdx,	
  input  [15:0] io_narrowWrite_2_data_0,	
  input  [15:0] io_narrowWrite_2_data_1,	
  input  [15:0] io_narrowWrite_2_data_2,	
  input  [15:0] io_narrowWrite_2_data_3,	
  input         io_narrowWrite_3_valid,	
  input  [6:0]  io_narrowWrite_3_addr,	
  output        io_narrowWrite_3_ready,	
  input  [1:0]  io_narrowWrite_3_subBankIdx,	
  input  [15:0] io_narrowWrite_3_data_0,	
  input  [15:0] io_narrowWrite_3_data_1,	
  input  [15:0] io_narrowWrite_3_data_2,	
  input  [15:0] io_narrowWrite_3_data_3,	
  input         io_narrowWrite_4_valid,	
  input  [6:0]  io_narrowWrite_4_addr,	
  output        io_narrowWrite_4_ready,	
  input  [1:0]  io_narrowWrite_4_subBankIdx,	
  input  [15:0] io_narrowWrite_4_data_0,	
  input  [15:0] io_narrowWrite_4_data_1,	
  input  [15:0] io_narrowWrite_4_data_2,	
  input  [15:0] io_narrowWrite_4_data_3,	
  input         io_narrowWrite_5_valid,	
  input  [6:0]  io_narrowWrite_5_addr,	
  output        io_narrowWrite_5_ready,	
  input  [1:0]  io_narrowWrite_5_subBankIdx,	
  input  [15:0] io_narrowWrite_5_data_0,	
  input  [15:0] io_narrowWrite_5_data_1,	
  input  [15:0] io_narrowWrite_5_data_2,	
  input  [15:0] io_narrowWrite_5_data_3,	
  input         io_narrowWrite_6_valid,	
  input  [6:0]  io_narrowWrite_6_addr,	
  output        io_narrowWrite_6_ready,	
  input  [1:0]  io_narrowWrite_6_subBankIdx,	
  input  [15:0] io_narrowWrite_6_data_0,	
  input  [15:0] io_narrowWrite_6_data_1,	
  input  [15:0] io_narrowWrite_6_data_2,	
  input  [15:0] io_narrowWrite_6_data_3,	
  input         io_narrowWrite_7_valid,	
  input  [6:0]  io_narrowWrite_7_addr,	
  output        io_narrowWrite_7_ready,	
  input  [1:0]  io_narrowWrite_7_subBankIdx,	
  input  [15:0] io_narrowWrite_7_data_0,	
  input  [15:0] io_narrowWrite_7_data_1,	
  input  [15:0] io_narrowWrite_7_data_2,	
  input  [15:0] io_narrowWrite_7_data_3	
);

  wire [15:0] banks_1_3_writePorts_0_data_3;	
  wire [15:0] banks_1_3_writePorts_0_data_2;	
  wire [15:0] banks_1_3_writePorts_0_data_1;	
  wire [15:0] banks_1_3_writePorts_0_data_0;	
  wire [15:0] banks_1_2_writePorts_0_data_3;	
  wire [15:0] banks_1_2_writePorts_0_data_2;	
  wire [15:0] banks_1_2_writePorts_0_data_1;	
  wire [15:0] banks_1_2_writePorts_0_data_0;	
  wire [15:0] banks_1_1_writePorts_0_data_3;	
  wire [15:0] banks_1_1_writePorts_0_data_2;	
  wire [15:0] banks_1_1_writePorts_0_data_1;	
  wire [15:0] banks_1_1_writePorts_0_data_0;	
  wire [15:0] banks_1_0_writePorts_0_data_3;	
  wire [15:0] banks_1_0_writePorts_0_data_2;	
  wire [15:0] banks_1_0_writePorts_0_data_1;	
  wire [15:0] banks_1_0_writePorts_0_data_0;	
  wire [15:0] banks_0_3_writePorts_0_data_3;	
  wire [15:0] banks_0_3_writePorts_0_data_2;	
  wire [15:0] banks_0_3_writePorts_0_data_1;	
  wire [15:0] banks_0_3_writePorts_0_data_0;	
  wire [15:0] banks_0_2_writePorts_0_data_3;	
  wire [15:0] banks_0_2_writePorts_0_data_2;	
  wire [15:0] banks_0_2_writePorts_0_data_1;	
  wire [15:0] banks_0_2_writePorts_0_data_0;	
  wire [15:0] banks_0_1_writePorts_0_data_3;	
  wire [15:0] banks_0_1_writePorts_0_data_2;	
  wire [15:0] banks_0_1_writePorts_0_data_1;	
  wire [15:0] banks_0_1_writePorts_0_data_0;	
  wire [15:0] banks_0_0_writePorts_0_data_3;	
  wire [15:0] banks_0_0_writePorts_0_data_2;	
  wire [15:0] banks_0_0_writePorts_0_data_1;	
  wire [15:0] banks_0_0_writePorts_0_data_0;	
  wire [63:0] _banks_subBanks_sram_mem_7_R0_data;	
  wire [63:0] _banks_subBanks_sram_mem_6_R0_data;	
  wire [63:0] _banks_subBanks_sram_mem_5_R0_data;	
  wire [63:0] _banks_subBanks_sram_mem_4_R0_data;	
  wire [63:0] _banks_subBanks_sram_mem_3_R0_data;	
  wire [63:0] _banks_subBanks_sram_mem_2_R0_data;	
  wire [63:0] _banks_subBanks_sram_mem_1_R0_data;	
  wire [63:0] _banks_subBanks_sram_mem_R0_data;	
  wire        _validMask_T_183 = io_narrowWrite_0_subBankIdx == 2'h0;	
  wire        writeFire_0 = io_narrowWrite_0_valid & ~(io_narrowWrite_0_addr[0]) & _validMask_T_183;	
  wire        _validMask_T_188 = io_narrowWrite_1_subBankIdx == 2'h0;	
  wire        writeValid_1 = io_narrowWrite_1_valid & ~(io_narrowWrite_1_addr[0]) & _validMask_T_188;	
  wire        _validMask_T_193 = io_narrowWrite_2_subBankIdx == 2'h0;	
  wire        writeValid_2 = io_narrowWrite_2_valid & ~(io_narrowWrite_2_addr[0]) & _validMask_T_193;	
  wire        _validMask_T_198 = io_narrowWrite_3_subBankIdx == 2'h0;	
  wire        writeValid_3 = io_narrowWrite_3_valid & ~(io_narrowWrite_3_addr[0]) & _validMask_T_198;	
  wire        _validMask_T_203 = io_narrowWrite_4_subBankIdx == 2'h0;	
  wire        writeValid_4 = io_narrowWrite_4_valid & ~(io_narrowWrite_4_addr[0]) & _validMask_T_203;	
  wire        _validMask_T_208 = io_narrowWrite_5_subBankIdx == 2'h0;	
  wire        writeValid_5 = io_narrowWrite_5_valid & ~(io_narrowWrite_5_addr[0]) & _validMask_T_208;	
  wire        _validMask_T_213 = io_narrowWrite_6_subBankIdx == 2'h0;	
  wire        writeValid_6 = io_narrowWrite_6_valid & ~(io_narrowWrite_6_addr[0]) & _validMask_T_213;	
  wire        _validMask_T_218 = io_narrowWrite_7_subBankIdx == 2'h0;	
  wire        writeValid_7 = io_narrowWrite_7_valid & ~(io_narrowWrite_7_addr[0]) & _validMask_T_218;	
  wire        _GEN = writeFire_0 | writeValid_1;	
  wire        _GEN_0 = _GEN | writeValid_2;	
  wire        _GEN_1 = _GEN_0 | writeValid_3;	
  wire        _GEN_2 = _GEN_1 | writeValid_4;	
  wire        _GEN_3 = _GEN_2 | writeValid_5;	
  wire        _GEN_4 = _GEN_3 | writeValid_6;	
  wire        writeFire_1 = writeValid_1 & ~writeFire_0;	
  wire        writeFire_2 = writeValid_2 & ~_GEN;	
  wire        writeFire_3 = writeValid_3 & ~_GEN_0;	
  wire        writeFire_4 = writeValid_4 & ~_GEN_1;	
  wire        writeFire_5 = writeValid_5 & ~_GEN_2;	
  wire        writeFire_6 = writeValid_6 & ~_GEN_3;	
  wire        writeFire_7 = writeValid_7 & ~_GEN_4;	
  assign banks_0_0_writePorts_0_data_0 = (writeFire_0 ? io_narrowWrite_0_data_0 : 16'h0) | (writeFire_1 ? io_narrowWrite_1_data_0 : 16'h0) | (writeFire_2 ? io_narrowWrite_2_data_0 : 16'h0) | (writeFire_3 ? io_narrowWrite_3_data_0 : 16'h0) | (writeFire_4 ? io_narrowWrite_4_data_0 : 16'h0) | (writeFire_5 ? io_narrowWrite_5_data_0 : 16'h0) | (writeFire_6 ? io_narrowWrite_6_data_0 : 16'h0) | (writeFire_7 ? io_narrowWrite_7_data_0 : 16'h0);	
  assign banks_0_0_writePorts_0_data_1 = (writeFire_0 ? io_narrowWrite_0_data_1 : 16'h0) | (writeFire_1 ? io_narrowWrite_1_data_1 : 16'h0) | (writeFire_2 ? io_narrowWrite_2_data_1 : 16'h0) | (writeFire_3 ? io_narrowWrite_3_data_1 : 16'h0) | (writeFire_4 ? io_narrowWrite_4_data_1 : 16'h0) | (writeFire_5 ? io_narrowWrite_5_data_1 : 16'h0) | (writeFire_6 ? io_narrowWrite_6_data_1 : 16'h0) | (writeFire_7 ? io_narrowWrite_7_data_1 : 16'h0);	
  assign banks_0_0_writePorts_0_data_2 = (writeFire_0 ? io_narrowWrite_0_data_2 : 16'h0) | (writeFire_1 ? io_narrowWrite_1_data_2 : 16'h0) | (writeFire_2 ? io_narrowWrite_2_data_2 : 16'h0) | (writeFire_3 ? io_narrowWrite_3_data_2 : 16'h0) | (writeFire_4 ? io_narrowWrite_4_data_2 : 16'h0) | (writeFire_5 ? io_narrowWrite_5_data_2 : 16'h0) | (writeFire_6 ? io_narrowWrite_6_data_2 : 16'h0) | (writeFire_7 ? io_narrowWrite_7_data_2 : 16'h0);	
  assign banks_0_0_writePorts_0_data_3 = (writeFire_0 ? io_narrowWrite_0_data_3 : 16'h0) | (writeFire_1 ? io_narrowWrite_1_data_3 : 16'h0) | (writeFire_2 ? io_narrowWrite_2_data_3 : 16'h0) | (writeFire_3 ? io_narrowWrite_3_data_3 : 16'h0) | (writeFire_4 ? io_narrowWrite_4_data_3 : 16'h0) | (writeFire_5 ? io_narrowWrite_5_data_3 : 16'h0) | (writeFire_6 ? io_narrowWrite_6_data_3 : 16'h0) | (writeFire_7 ? io_narrowWrite_7_data_3 : 16'h0);	
  wire        _validMask_T_227 = io_narrowWrite_0_subBankIdx == 2'h1;	
  wire        writeFire_0_1 = io_narrowWrite_0_valid & ~(io_narrowWrite_0_addr[0]) & _validMask_T_227;	
  wire        _validMask_T_232 = io_narrowWrite_1_subBankIdx == 2'h1;	
  wire        writeValid_1_1 = io_narrowWrite_1_valid & ~(io_narrowWrite_1_addr[0]) & _validMask_T_232;	
  wire        _validMask_T_237 = io_narrowWrite_2_subBankIdx == 2'h1;	
  wire        writeValid_1_2 = io_narrowWrite_2_valid & ~(io_narrowWrite_2_addr[0]) & _validMask_T_237;	
  wire        _validMask_T_242 = io_narrowWrite_3_subBankIdx == 2'h1;	
  wire        writeValid_1_3 = io_narrowWrite_3_valid & ~(io_narrowWrite_3_addr[0]) & _validMask_T_242;	
  wire        _validMask_T_247 = io_narrowWrite_4_subBankIdx == 2'h1;	
  wire        writeValid_1_4 = io_narrowWrite_4_valid & ~(io_narrowWrite_4_addr[0]) & _validMask_T_247;	
  wire        _validMask_T_252 = io_narrowWrite_5_subBankIdx == 2'h1;	
  wire        writeValid_1_5 = io_narrowWrite_5_valid & ~(io_narrowWrite_5_addr[0]) & _validMask_T_252;	
  wire        _validMask_T_257 = io_narrowWrite_6_subBankIdx == 2'h1;	
  wire        writeValid_1_6 = io_narrowWrite_6_valid & ~(io_narrowWrite_6_addr[0]) & _validMask_T_257;	
  wire        _validMask_T_262 = io_narrowWrite_7_subBankIdx == 2'h1;	
  wire        writeValid_1_7 = io_narrowWrite_7_valid & ~(io_narrowWrite_7_addr[0]) & _validMask_T_262;	
  wire        _GEN_5 = writeFire_0_1 | writeValid_1_1;	
  wire        _GEN_6 = _GEN_5 | writeValid_1_2;	
  wire        _GEN_7 = _GEN_6 | writeValid_1_3;	
  wire        _GEN_8 = _GEN_7 | writeValid_1_4;	
  wire        _GEN_9 = _GEN_8 | writeValid_1_5;	
  wire        _GEN_10 = _GEN_9 | writeValid_1_6;	
  wire        writeFire_1_1 = writeValid_1_1 & ~writeFire_0_1;	
  wire        writeFire_2_1 = writeValid_1_2 & ~_GEN_5;	
  wire        writeFire_3_1 = writeValid_1_3 & ~_GEN_6;	
  wire        writeFire_4_1 = writeValid_1_4 & ~_GEN_7;	
  wire        writeFire_5_1 = writeValid_1_5 & ~_GEN_8;	
  wire        writeFire_6_1 = writeValid_1_6 & ~_GEN_9;	
  wire        writeFire_7_1 = writeValid_1_7 & ~_GEN_10;	
  assign banks_0_1_writePorts_0_data_0 = (writeFire_0_1 ? io_narrowWrite_0_data_0 : 16'h0) | (writeFire_1_1 ? io_narrowWrite_1_data_0 : 16'h0) | (writeFire_2_1 ? io_narrowWrite_2_data_0 : 16'h0) | (writeFire_3_1 ? io_narrowWrite_3_data_0 : 16'h0) | (writeFire_4_1 ? io_narrowWrite_4_data_0 : 16'h0) | (writeFire_5_1 ? io_narrowWrite_5_data_0 : 16'h0) | (writeFire_6_1 ? io_narrowWrite_6_data_0 : 16'h0) | (writeFire_7_1 ? io_narrowWrite_7_data_0 : 16'h0);	
  assign banks_0_1_writePorts_0_data_1 = (writeFire_0_1 ? io_narrowWrite_0_data_1 : 16'h0) | (writeFire_1_1 ? io_narrowWrite_1_data_1 : 16'h0) | (writeFire_2_1 ? io_narrowWrite_2_data_1 : 16'h0) | (writeFire_3_1 ? io_narrowWrite_3_data_1 : 16'h0) | (writeFire_4_1 ? io_narrowWrite_4_data_1 : 16'h0) | (writeFire_5_1 ? io_narrowWrite_5_data_1 : 16'h0) | (writeFire_6_1 ? io_narrowWrite_6_data_1 : 16'h0) | (writeFire_7_1 ? io_narrowWrite_7_data_1 : 16'h0);	
  assign banks_0_1_writePorts_0_data_2 = (writeFire_0_1 ? io_narrowWrite_0_data_2 : 16'h0) | (writeFire_1_1 ? io_narrowWrite_1_data_2 : 16'h0) | (writeFire_2_1 ? io_narrowWrite_2_data_2 : 16'h0) | (writeFire_3_1 ? io_narrowWrite_3_data_2 : 16'h0) | (writeFire_4_1 ? io_narrowWrite_4_data_2 : 16'h0) | (writeFire_5_1 ? io_narrowWrite_5_data_2 : 16'h0) | (writeFire_6_1 ? io_narrowWrite_6_data_2 : 16'h0) | (writeFire_7_1 ? io_narrowWrite_7_data_2 : 16'h0);	
  assign banks_0_1_writePorts_0_data_3 = (writeFire_0_1 ? io_narrowWrite_0_data_3 : 16'h0) | (writeFire_1_1 ? io_narrowWrite_1_data_3 : 16'h0) | (writeFire_2_1 ? io_narrowWrite_2_data_3 : 16'h0) | (writeFire_3_1 ? io_narrowWrite_3_data_3 : 16'h0) | (writeFire_4_1 ? io_narrowWrite_4_data_3 : 16'h0) | (writeFire_5_1 ? io_narrowWrite_5_data_3 : 16'h0) | (writeFire_6_1 ? io_narrowWrite_6_data_3 : 16'h0) | (writeFire_7_1 ? io_narrowWrite_7_data_3 : 16'h0);	
  wire        _validMask_T_271 = io_narrowWrite_0_subBankIdx == 2'h2;	
  wire        writeFire_0_2 = io_narrowWrite_0_valid & ~(io_narrowWrite_0_addr[0]) & _validMask_T_271;	
  wire        _validMask_T_276 = io_narrowWrite_1_subBankIdx == 2'h2;	
  wire        writeValid_2_1 = io_narrowWrite_1_valid & ~(io_narrowWrite_1_addr[0]) & _validMask_T_276;	
  wire        _validMask_T_281 = io_narrowWrite_2_subBankIdx == 2'h2;	
  wire        writeValid_2_2 = io_narrowWrite_2_valid & ~(io_narrowWrite_2_addr[0]) & _validMask_T_281;	
  wire        _validMask_T_286 = io_narrowWrite_3_subBankIdx == 2'h2;	
  wire        writeValid_2_3 = io_narrowWrite_3_valid & ~(io_narrowWrite_3_addr[0]) & _validMask_T_286;	
  wire        _validMask_T_291 = io_narrowWrite_4_subBankIdx == 2'h2;	
  wire        writeValid_2_4 = io_narrowWrite_4_valid & ~(io_narrowWrite_4_addr[0]) & _validMask_T_291;	
  wire        _validMask_T_296 = io_narrowWrite_5_subBankIdx == 2'h2;	
  wire        writeValid_2_5 = io_narrowWrite_5_valid & ~(io_narrowWrite_5_addr[0]) & _validMask_T_296;	
  wire        _validMask_T_301 = io_narrowWrite_6_subBankIdx == 2'h2;	
  wire        writeValid_2_6 = io_narrowWrite_6_valid & ~(io_narrowWrite_6_addr[0]) & _validMask_T_301;	
  wire        _validMask_T_306 = io_narrowWrite_7_subBankIdx == 2'h2;	
  wire        writeValid_2_7 = io_narrowWrite_7_valid & ~(io_narrowWrite_7_addr[0]) & _validMask_T_306;	
  wire        _GEN_11 = writeFire_0_2 | writeValid_2_1;	
  wire        _GEN_12 = _GEN_11 | writeValid_2_2;	
  wire        _GEN_13 = _GEN_12 | writeValid_2_3;	
  wire        _GEN_14 = _GEN_13 | writeValid_2_4;	
  wire        _GEN_15 = _GEN_14 | writeValid_2_5;	
  wire        _GEN_16 = _GEN_15 | writeValid_2_6;	
  wire        writeFire_1_2 = writeValid_2_1 & ~writeFire_0_2;	
  wire        writeFire_2_2 = writeValid_2_2 & ~_GEN_11;	
  wire        writeFire_3_2 = writeValid_2_3 & ~_GEN_12;	
  wire        writeFire_4_2 = writeValid_2_4 & ~_GEN_13;	
  wire        writeFire_5_2 = writeValid_2_5 & ~_GEN_14;	
  wire        writeFire_6_2 = writeValid_2_6 & ~_GEN_15;	
  wire        writeFire_7_2 = writeValid_2_7 & ~_GEN_16;	
  assign banks_0_2_writePorts_0_data_0 = (writeFire_0_2 ? io_narrowWrite_0_data_0 : 16'h0) | (writeFire_1_2 ? io_narrowWrite_1_data_0 : 16'h0) | (writeFire_2_2 ? io_narrowWrite_2_data_0 : 16'h0) | (writeFire_3_2 ? io_narrowWrite_3_data_0 : 16'h0) | (writeFire_4_2 ? io_narrowWrite_4_data_0 : 16'h0) | (writeFire_5_2 ? io_narrowWrite_5_data_0 : 16'h0) | (writeFire_6_2 ? io_narrowWrite_6_data_0 : 16'h0) | (writeFire_7_2 ? io_narrowWrite_7_data_0 : 16'h0);	
  assign banks_0_2_writePorts_0_data_1 = (writeFire_0_2 ? io_narrowWrite_0_data_1 : 16'h0) | (writeFire_1_2 ? io_narrowWrite_1_data_1 : 16'h0) | (writeFire_2_2 ? io_narrowWrite_2_data_1 : 16'h0) | (writeFire_3_2 ? io_narrowWrite_3_data_1 : 16'h0) | (writeFire_4_2 ? io_narrowWrite_4_data_1 : 16'h0) | (writeFire_5_2 ? io_narrowWrite_5_data_1 : 16'h0) | (writeFire_6_2 ? io_narrowWrite_6_data_1 : 16'h0) | (writeFire_7_2 ? io_narrowWrite_7_data_1 : 16'h0);	
  assign banks_0_2_writePorts_0_data_2 = (writeFire_0_2 ? io_narrowWrite_0_data_2 : 16'h0) | (writeFire_1_2 ? io_narrowWrite_1_data_2 : 16'h0) | (writeFire_2_2 ? io_narrowWrite_2_data_2 : 16'h0) | (writeFire_3_2 ? io_narrowWrite_3_data_2 : 16'h0) | (writeFire_4_2 ? io_narrowWrite_4_data_2 : 16'h0) | (writeFire_5_2 ? io_narrowWrite_5_data_2 : 16'h0) | (writeFire_6_2 ? io_narrowWrite_6_data_2 : 16'h0) | (writeFire_7_2 ? io_narrowWrite_7_data_2 : 16'h0);	
  assign banks_0_2_writePorts_0_data_3 = (writeFire_0_2 ? io_narrowWrite_0_data_3 : 16'h0) | (writeFire_1_2 ? io_narrowWrite_1_data_3 : 16'h0) | (writeFire_2_2 ? io_narrowWrite_2_data_3 : 16'h0) | (writeFire_3_2 ? io_narrowWrite_3_data_3 : 16'h0) | (writeFire_4_2 ? io_narrowWrite_4_data_3 : 16'h0) | (writeFire_5_2 ? io_narrowWrite_5_data_3 : 16'h0) | (writeFire_6_2 ? io_narrowWrite_6_data_3 : 16'h0) | (writeFire_7_2 ? io_narrowWrite_7_data_3 : 16'h0);	
  wire        writeFire_0_3 = io_narrowWrite_0_valid & ~(io_narrowWrite_0_addr[0]) & (&io_narrowWrite_0_subBankIdx);	
  wire        writeValid_3_1 = io_narrowWrite_1_valid & ~(io_narrowWrite_1_addr[0]) & (&io_narrowWrite_1_subBankIdx);	
  wire        writeValid_3_2 = io_narrowWrite_2_valid & ~(io_narrowWrite_2_addr[0]) & (&io_narrowWrite_2_subBankIdx);	
  wire        writeValid_3_3 = io_narrowWrite_3_valid & ~(io_narrowWrite_3_addr[0]) & (&io_narrowWrite_3_subBankIdx);	
  wire        writeValid_3_4 = io_narrowWrite_4_valid & ~(io_narrowWrite_4_addr[0]) & (&io_narrowWrite_4_subBankIdx);	
  wire        writeValid_3_5 = io_narrowWrite_5_valid & ~(io_narrowWrite_5_addr[0]) & (&io_narrowWrite_5_subBankIdx);	
  wire        writeValid_3_6 = io_narrowWrite_6_valid & ~(io_narrowWrite_6_addr[0]) & (&io_narrowWrite_6_subBankIdx);	
  wire        writeValid_3_7 = io_narrowWrite_7_valid & ~(io_narrowWrite_7_addr[0]) & (&io_narrowWrite_7_subBankIdx);	
  wire        _GEN_17 = writeFire_0_3 | writeValid_3_1;	
  wire        _GEN_18 = _GEN_17 | writeValid_3_2;	
  wire        _GEN_19 = _GEN_18 | writeValid_3_3;	
  wire        _GEN_20 = _GEN_19 | writeValid_3_4;	
  wire        _GEN_21 = _GEN_20 | writeValid_3_5;	
  wire        _GEN_22 = _GEN_21 | writeValid_3_6;	
  wire        writeFire_1_3 = writeValid_3_1 & ~writeFire_0_3;	
  wire        writeFire_2_3 = writeValid_3_2 & ~_GEN_17;	
  wire        writeFire_3_3 = writeValid_3_3 & ~_GEN_18;	
  wire        writeFire_4_3 = writeValid_3_4 & ~_GEN_19;	
  wire        writeFire_5_3 = writeValid_3_5 & ~_GEN_20;	
  wire        writeFire_6_3 = writeValid_3_6 & ~_GEN_21;	
  wire        writeFire_7_3 = writeValid_3_7 & ~_GEN_22;	
  assign banks_0_3_writePorts_0_data_0 = (writeFire_0_3 ? io_narrowWrite_0_data_0 : 16'h0) | (writeFire_1_3 ? io_narrowWrite_1_data_0 : 16'h0) | (writeFire_2_3 ? io_narrowWrite_2_data_0 : 16'h0) | (writeFire_3_3 ? io_narrowWrite_3_data_0 : 16'h0) | (writeFire_4_3 ? io_narrowWrite_4_data_0 : 16'h0) | (writeFire_5_3 ? io_narrowWrite_5_data_0 : 16'h0) | (writeFire_6_3 ? io_narrowWrite_6_data_0 : 16'h0) | (writeFire_7_3 ? io_narrowWrite_7_data_0 : 16'h0);	
  assign banks_0_3_writePorts_0_data_1 = (writeFire_0_3 ? io_narrowWrite_0_data_1 : 16'h0) | (writeFire_1_3 ? io_narrowWrite_1_data_1 : 16'h0) | (writeFire_2_3 ? io_narrowWrite_2_data_1 : 16'h0) | (writeFire_3_3 ? io_narrowWrite_3_data_1 : 16'h0) | (writeFire_4_3 ? io_narrowWrite_4_data_1 : 16'h0) | (writeFire_5_3 ? io_narrowWrite_5_data_1 : 16'h0) | (writeFire_6_3 ? io_narrowWrite_6_data_1 : 16'h0) | (writeFire_7_3 ? io_narrowWrite_7_data_1 : 16'h0);	
  assign banks_0_3_writePorts_0_data_2 = (writeFire_0_3 ? io_narrowWrite_0_data_2 : 16'h0) | (writeFire_1_3 ? io_narrowWrite_1_data_2 : 16'h0) | (writeFire_2_3 ? io_narrowWrite_2_data_2 : 16'h0) | (writeFire_3_3 ? io_narrowWrite_3_data_2 : 16'h0) | (writeFire_4_3 ? io_narrowWrite_4_data_2 : 16'h0) | (writeFire_5_3 ? io_narrowWrite_5_data_2 : 16'h0) | (writeFire_6_3 ? io_narrowWrite_6_data_2 : 16'h0) | (writeFire_7_3 ? io_narrowWrite_7_data_2 : 16'h0);	
  assign banks_0_3_writePorts_0_data_3 = (writeFire_0_3 ? io_narrowWrite_0_data_3 : 16'h0) | (writeFire_1_3 ? io_narrowWrite_1_data_3 : 16'h0) | (writeFire_2_3 ? io_narrowWrite_2_data_3 : 16'h0) | (writeFire_3_3 ? io_narrowWrite_3_data_3 : 16'h0) | (writeFire_4_3 ? io_narrowWrite_4_data_3 : 16'h0) | (writeFire_5_3 ? io_narrowWrite_5_data_3 : 16'h0) | (writeFire_6_3 ? io_narrowWrite_6_data_3 : 16'h0) | (writeFire_7_3 ? io_narrowWrite_7_data_3 : 16'h0);	
  wire        writeFire_0_4 = io_narrowWrite_0_valid & io_narrowWrite_0_addr[0] & _validMask_T_183;	
  wire        writeValid_4_1 = io_narrowWrite_1_valid & io_narrowWrite_1_addr[0] & _validMask_T_188;	
  wire        writeValid_4_2 = io_narrowWrite_2_valid & io_narrowWrite_2_addr[0] & _validMask_T_193;	
  wire        writeValid_4_3 = io_narrowWrite_3_valid & io_narrowWrite_3_addr[0] & _validMask_T_198;	
  wire        writeValid_4_4 = io_narrowWrite_4_valid & io_narrowWrite_4_addr[0] & _validMask_T_203;	
  wire        writeValid_4_5 = io_narrowWrite_5_valid & io_narrowWrite_5_addr[0] & _validMask_T_208;	
  wire        writeValid_4_6 = io_narrowWrite_6_valid & io_narrowWrite_6_addr[0] & _validMask_T_213;	
  wire        writeValid_4_7 = io_narrowWrite_7_valid & io_narrowWrite_7_addr[0] & _validMask_T_218;	
  wire        _GEN_23 = writeFire_0_4 | writeValid_4_1;	
  wire        _GEN_24 = _GEN_23 | writeValid_4_2;	
  wire        _GEN_25 = _GEN_24 | writeValid_4_3;	
  wire        _GEN_26 = _GEN_25 | writeValid_4_4;	
  wire        _GEN_27 = _GEN_26 | writeValid_4_5;	
  wire        _GEN_28 = _GEN_27 | writeValid_4_6;	
  wire        writeFire_1_4 = writeValid_4_1 & ~writeFire_0_4;	
  wire        writeFire_2_4 = writeValid_4_2 & ~_GEN_23;	
  wire        writeFire_3_4 = writeValid_4_3 & ~_GEN_24;	
  wire        writeFire_4_4 = writeValid_4_4 & ~_GEN_25;	
  wire        writeFire_5_4 = writeValid_4_5 & ~_GEN_26;	
  wire        writeFire_6_4 = writeValid_4_6 & ~_GEN_27;	
  wire        writeFire_7_4 = writeValid_4_7 & ~_GEN_28;	
  assign banks_1_0_writePorts_0_data_0 = (writeFire_0_4 ? io_narrowWrite_0_data_0 : 16'h0) | (writeFire_1_4 ? io_narrowWrite_1_data_0 : 16'h0) | (writeFire_2_4 ? io_narrowWrite_2_data_0 : 16'h0) | (writeFire_3_4 ? io_narrowWrite_3_data_0 : 16'h0) | (writeFire_4_4 ? io_narrowWrite_4_data_0 : 16'h0) | (writeFire_5_4 ? io_narrowWrite_5_data_0 : 16'h0) | (writeFire_6_4 ? io_narrowWrite_6_data_0 : 16'h0) | (writeFire_7_4 ? io_narrowWrite_7_data_0 : 16'h0);	
  assign banks_1_0_writePorts_0_data_1 = (writeFire_0_4 ? io_narrowWrite_0_data_1 : 16'h0) | (writeFire_1_4 ? io_narrowWrite_1_data_1 : 16'h0) | (writeFire_2_4 ? io_narrowWrite_2_data_1 : 16'h0) | (writeFire_3_4 ? io_narrowWrite_3_data_1 : 16'h0) | (writeFire_4_4 ? io_narrowWrite_4_data_1 : 16'h0) | (writeFire_5_4 ? io_narrowWrite_5_data_1 : 16'h0) | (writeFire_6_4 ? io_narrowWrite_6_data_1 : 16'h0) | (writeFire_7_4 ? io_narrowWrite_7_data_1 : 16'h0);	
  assign banks_1_0_writePorts_0_data_2 = (writeFire_0_4 ? io_narrowWrite_0_data_2 : 16'h0) | (writeFire_1_4 ? io_narrowWrite_1_data_2 : 16'h0) | (writeFire_2_4 ? io_narrowWrite_2_data_2 : 16'h0) | (writeFire_3_4 ? io_narrowWrite_3_data_2 : 16'h0) | (writeFire_4_4 ? io_narrowWrite_4_data_2 : 16'h0) | (writeFire_5_4 ? io_narrowWrite_5_data_2 : 16'h0) | (writeFire_6_4 ? io_narrowWrite_6_data_2 : 16'h0) | (writeFire_7_4 ? io_narrowWrite_7_data_2 : 16'h0);	
  assign banks_1_0_writePorts_0_data_3 = (writeFire_0_4 ? io_narrowWrite_0_data_3 : 16'h0) | (writeFire_1_4 ? io_narrowWrite_1_data_3 : 16'h0) | (writeFire_2_4 ? io_narrowWrite_2_data_3 : 16'h0) | (writeFire_3_4 ? io_narrowWrite_3_data_3 : 16'h0) | (writeFire_4_4 ? io_narrowWrite_4_data_3 : 16'h0) | (writeFire_5_4 ? io_narrowWrite_5_data_3 : 16'h0) | (writeFire_6_4 ? io_narrowWrite_6_data_3 : 16'h0) | (writeFire_7_4 ? io_narrowWrite_7_data_3 : 16'h0);	
  wire        writeFire_0_5 = io_narrowWrite_0_valid & io_narrowWrite_0_addr[0] & _validMask_T_227;	
  wire        writeValid_5_1 = io_narrowWrite_1_valid & io_narrowWrite_1_addr[0] & _validMask_T_232;	
  wire        writeValid_5_2 = io_narrowWrite_2_valid & io_narrowWrite_2_addr[0] & _validMask_T_237;	
  wire        writeValid_5_3 = io_narrowWrite_3_valid & io_narrowWrite_3_addr[0] & _validMask_T_242;	
  wire        writeValid_5_4 = io_narrowWrite_4_valid & io_narrowWrite_4_addr[0] & _validMask_T_247;	
  wire        writeValid_5_5 = io_narrowWrite_5_valid & io_narrowWrite_5_addr[0] & _validMask_T_252;	
  wire        writeValid_5_6 = io_narrowWrite_6_valid & io_narrowWrite_6_addr[0] & _validMask_T_257;	
  wire        writeValid_5_7 = io_narrowWrite_7_valid & io_narrowWrite_7_addr[0] & _validMask_T_262;	
  wire        _GEN_29 = writeFire_0_5 | writeValid_5_1;	
  wire        _GEN_30 = _GEN_29 | writeValid_5_2;	
  wire        _GEN_31 = _GEN_30 | writeValid_5_3;	
  wire        _GEN_32 = _GEN_31 | writeValid_5_4;	
  wire        _GEN_33 = _GEN_32 | writeValid_5_5;	
  wire        _GEN_34 = _GEN_33 | writeValid_5_6;	
  wire        writeFire_1_5 = writeValid_5_1 & ~writeFire_0_5;	
  wire        writeFire_2_5 = writeValid_5_2 & ~_GEN_29;	
  wire        writeFire_3_5 = writeValid_5_3 & ~_GEN_30;	
  wire        writeFire_4_5 = writeValid_5_4 & ~_GEN_31;	
  wire        writeFire_5_5 = writeValid_5_5 & ~_GEN_32;	
  wire        writeFire_6_5 = writeValid_5_6 & ~_GEN_33;	
  wire        writeFire_7_5 = writeValid_5_7 & ~_GEN_34;	
  assign banks_1_1_writePorts_0_data_0 = (writeFire_0_5 ? io_narrowWrite_0_data_0 : 16'h0) | (writeFire_1_5 ? io_narrowWrite_1_data_0 : 16'h0) | (writeFire_2_5 ? io_narrowWrite_2_data_0 : 16'h0) | (writeFire_3_5 ? io_narrowWrite_3_data_0 : 16'h0) | (writeFire_4_5 ? io_narrowWrite_4_data_0 : 16'h0) | (writeFire_5_5 ? io_narrowWrite_5_data_0 : 16'h0) | (writeFire_6_5 ? io_narrowWrite_6_data_0 : 16'h0) | (writeFire_7_5 ? io_narrowWrite_7_data_0 : 16'h0);	
  assign banks_1_1_writePorts_0_data_1 = (writeFire_0_5 ? io_narrowWrite_0_data_1 : 16'h0) | (writeFire_1_5 ? io_narrowWrite_1_data_1 : 16'h0) | (writeFire_2_5 ? io_narrowWrite_2_data_1 : 16'h0) | (writeFire_3_5 ? io_narrowWrite_3_data_1 : 16'h0) | (writeFire_4_5 ? io_narrowWrite_4_data_1 : 16'h0) | (writeFire_5_5 ? io_narrowWrite_5_data_1 : 16'h0) | (writeFire_6_5 ? io_narrowWrite_6_data_1 : 16'h0) | (writeFire_7_5 ? io_narrowWrite_7_data_1 : 16'h0);	
  assign banks_1_1_writePorts_0_data_2 = (writeFire_0_5 ? io_narrowWrite_0_data_2 : 16'h0) | (writeFire_1_5 ? io_narrowWrite_1_data_2 : 16'h0) | (writeFire_2_5 ? io_narrowWrite_2_data_2 : 16'h0) | (writeFire_3_5 ? io_narrowWrite_3_data_2 : 16'h0) | (writeFire_4_5 ? io_narrowWrite_4_data_2 : 16'h0) | (writeFire_5_5 ? io_narrowWrite_5_data_2 : 16'h0) | (writeFire_6_5 ? io_narrowWrite_6_data_2 : 16'h0) | (writeFire_7_5 ? io_narrowWrite_7_data_2 : 16'h0);	
  assign banks_1_1_writePorts_0_data_3 = (writeFire_0_5 ? io_narrowWrite_0_data_3 : 16'h0) | (writeFire_1_5 ? io_narrowWrite_1_data_3 : 16'h0) | (writeFire_2_5 ? io_narrowWrite_2_data_3 : 16'h0) | (writeFire_3_5 ? io_narrowWrite_3_data_3 : 16'h0) | (writeFire_4_5 ? io_narrowWrite_4_data_3 : 16'h0) | (writeFire_5_5 ? io_narrowWrite_5_data_3 : 16'h0) | (writeFire_6_5 ? io_narrowWrite_6_data_3 : 16'h0) | (writeFire_7_5 ? io_narrowWrite_7_data_3 : 16'h0);	
  wire        writeFire_0_6 = io_narrowWrite_0_valid & io_narrowWrite_0_addr[0] & _validMask_T_271;	
  wire        writeValid_6_1 = io_narrowWrite_1_valid & io_narrowWrite_1_addr[0] & _validMask_T_276;	
  wire        writeValid_6_2 = io_narrowWrite_2_valid & io_narrowWrite_2_addr[0] & _validMask_T_281;	
  wire        writeValid_6_3 = io_narrowWrite_3_valid & io_narrowWrite_3_addr[0] & _validMask_T_286;	
  wire        writeValid_6_4 = io_narrowWrite_4_valid & io_narrowWrite_4_addr[0] & _validMask_T_291;	
  wire        writeValid_6_5 = io_narrowWrite_5_valid & io_narrowWrite_5_addr[0] & _validMask_T_296;	
  wire        writeValid_6_6 = io_narrowWrite_6_valid & io_narrowWrite_6_addr[0] & _validMask_T_301;	
  wire        writeValid_6_7 = io_narrowWrite_7_valid & io_narrowWrite_7_addr[0] & _validMask_T_306;	
  wire        _GEN_35 = writeFire_0_6 | writeValid_6_1;	
  wire        _GEN_36 = _GEN_35 | writeValid_6_2;	
  wire        _GEN_37 = _GEN_36 | writeValid_6_3;	
  wire        _GEN_38 = _GEN_37 | writeValid_6_4;	
  wire        _GEN_39 = _GEN_38 | writeValid_6_5;	
  wire        _GEN_40 = _GEN_39 | writeValid_6_6;	
  wire        writeFire_1_6 = writeValid_6_1 & ~writeFire_0_6;	
  wire        writeFire_2_6 = writeValid_6_2 & ~_GEN_35;	
  wire        writeFire_3_6 = writeValid_6_3 & ~_GEN_36;	
  wire        writeFire_4_6 = writeValid_6_4 & ~_GEN_37;	
  wire        writeFire_5_6 = writeValid_6_5 & ~_GEN_38;	
  wire        writeFire_6_6 = writeValid_6_6 & ~_GEN_39;	
  wire        writeFire_7_6 = writeValid_6_7 & ~_GEN_40;	
  assign banks_1_2_writePorts_0_data_0 = (writeFire_0_6 ? io_narrowWrite_0_data_0 : 16'h0) | (writeFire_1_6 ? io_narrowWrite_1_data_0 : 16'h0) | (writeFire_2_6 ? io_narrowWrite_2_data_0 : 16'h0) | (writeFire_3_6 ? io_narrowWrite_3_data_0 : 16'h0) | (writeFire_4_6 ? io_narrowWrite_4_data_0 : 16'h0) | (writeFire_5_6 ? io_narrowWrite_5_data_0 : 16'h0) | (writeFire_6_6 ? io_narrowWrite_6_data_0 : 16'h0) | (writeFire_7_6 ? io_narrowWrite_7_data_0 : 16'h0);	
  assign banks_1_2_writePorts_0_data_1 = (writeFire_0_6 ? io_narrowWrite_0_data_1 : 16'h0) | (writeFire_1_6 ? io_narrowWrite_1_data_1 : 16'h0) | (writeFire_2_6 ? io_narrowWrite_2_data_1 : 16'h0) | (writeFire_3_6 ? io_narrowWrite_3_data_1 : 16'h0) | (writeFire_4_6 ? io_narrowWrite_4_data_1 : 16'h0) | (writeFire_5_6 ? io_narrowWrite_5_data_1 : 16'h0) | (writeFire_6_6 ? io_narrowWrite_6_data_1 : 16'h0) | (writeFire_7_6 ? io_narrowWrite_7_data_1 : 16'h0);	
  assign banks_1_2_writePorts_0_data_2 = (writeFire_0_6 ? io_narrowWrite_0_data_2 : 16'h0) | (writeFire_1_6 ? io_narrowWrite_1_data_2 : 16'h0) | (writeFire_2_6 ? io_narrowWrite_2_data_2 : 16'h0) | (writeFire_3_6 ? io_narrowWrite_3_data_2 : 16'h0) | (writeFire_4_6 ? io_narrowWrite_4_data_2 : 16'h0) | (writeFire_5_6 ? io_narrowWrite_5_data_2 : 16'h0) | (writeFire_6_6 ? io_narrowWrite_6_data_2 : 16'h0) | (writeFire_7_6 ? io_narrowWrite_7_data_2 : 16'h0);	
  assign banks_1_2_writePorts_0_data_3 = (writeFire_0_6 ? io_narrowWrite_0_data_3 : 16'h0) | (writeFire_1_6 ? io_narrowWrite_1_data_3 : 16'h0) | (writeFire_2_6 ? io_narrowWrite_2_data_3 : 16'h0) | (writeFire_3_6 ? io_narrowWrite_3_data_3 : 16'h0) | (writeFire_4_6 ? io_narrowWrite_4_data_3 : 16'h0) | (writeFire_5_6 ? io_narrowWrite_5_data_3 : 16'h0) | (writeFire_6_6 ? io_narrowWrite_6_data_3 : 16'h0) | (writeFire_7_6 ? io_narrowWrite_7_data_3 : 16'h0);	
  wire        writeFire_0_7 = io_narrowWrite_0_valid & io_narrowWrite_0_addr[0] & (&io_narrowWrite_0_subBankIdx);	
  wire        writeValid_7_1 = io_narrowWrite_1_valid & io_narrowWrite_1_addr[0] & (&io_narrowWrite_1_subBankIdx);	
  wire        writeValid_7_2 = io_narrowWrite_2_valid & io_narrowWrite_2_addr[0] & (&io_narrowWrite_2_subBankIdx);	
  wire        writeValid_7_3 = io_narrowWrite_3_valid & io_narrowWrite_3_addr[0] & (&io_narrowWrite_3_subBankIdx);	
  wire        writeValid_7_4 = io_narrowWrite_4_valid & io_narrowWrite_4_addr[0] & (&io_narrowWrite_4_subBankIdx);	
  wire        writeValid_7_5 = io_narrowWrite_5_valid & io_narrowWrite_5_addr[0] & (&io_narrowWrite_5_subBankIdx);	
  wire        writeValid_7_6 = io_narrowWrite_6_valid & io_narrowWrite_6_addr[0] & (&io_narrowWrite_6_subBankIdx);	
  wire        writeValid_7_7 = io_narrowWrite_7_valid & io_narrowWrite_7_addr[0] & (&io_narrowWrite_7_subBankIdx);	
  wire        _GEN_41 = writeFire_0_7 | writeValid_7_1;	
  wire        _GEN_42 = _GEN_41 | writeValid_7_2;	
  wire        _GEN_43 = _GEN_42 | writeValid_7_3;	
  wire        _GEN_44 = _GEN_43 | writeValid_7_4;	
  wire        _GEN_45 = _GEN_44 | writeValid_7_5;	
  wire        _GEN_46 = _GEN_45 | writeValid_7_6;	
  wire        writeFire_1_7 = writeValid_7_1 & ~writeFire_0_7;	
  wire        writeFire_2_7 = writeValid_7_2 & ~_GEN_41;	
  wire        writeFire_3_7 = writeValid_7_3 & ~_GEN_42;	
  wire        writeFire_4_7 = writeValid_7_4 & ~_GEN_43;	
  wire        writeFire_5_7 = writeValid_7_5 & ~_GEN_44;	
  wire        writeFire_6_7 = writeValid_7_6 & ~_GEN_45;	
  wire        writeFire_7_7 = writeValid_7_7 & ~_GEN_46;	
  assign banks_1_3_writePorts_0_data_0 = (writeFire_0_7 ? io_narrowWrite_0_data_0 : 16'h0) | (writeFire_1_7 ? io_narrowWrite_1_data_0 : 16'h0) | (writeFire_2_7 ? io_narrowWrite_2_data_0 : 16'h0) | (writeFire_3_7 ? io_narrowWrite_3_data_0 : 16'h0) | (writeFire_4_7 ? io_narrowWrite_4_data_0 : 16'h0) | (writeFire_5_7 ? io_narrowWrite_5_data_0 : 16'h0) | (writeFire_6_7 ? io_narrowWrite_6_data_0 : 16'h0) | (writeFire_7_7 ? io_narrowWrite_7_data_0 : 16'h0);	
  assign banks_1_3_writePorts_0_data_1 = (writeFire_0_7 ? io_narrowWrite_0_data_1 : 16'h0) | (writeFire_1_7 ? io_narrowWrite_1_data_1 : 16'h0) | (writeFire_2_7 ? io_narrowWrite_2_data_1 : 16'h0) | (writeFire_3_7 ? io_narrowWrite_3_data_1 : 16'h0) | (writeFire_4_7 ? io_narrowWrite_4_data_1 : 16'h0) | (writeFire_5_7 ? io_narrowWrite_5_data_1 : 16'h0) | (writeFire_6_7 ? io_narrowWrite_6_data_1 : 16'h0) | (writeFire_7_7 ? io_narrowWrite_7_data_1 : 16'h0);	
  assign banks_1_3_writePorts_0_data_2 = (writeFire_0_7 ? io_narrowWrite_0_data_2 : 16'h0) | (writeFire_1_7 ? io_narrowWrite_1_data_2 : 16'h0) | (writeFire_2_7 ? io_narrowWrite_2_data_2 : 16'h0) | (writeFire_3_7 ? io_narrowWrite_3_data_2 : 16'h0) | (writeFire_4_7 ? io_narrowWrite_4_data_2 : 16'h0) | (writeFire_5_7 ? io_narrowWrite_5_data_2 : 16'h0) | (writeFire_6_7 ? io_narrowWrite_6_data_2 : 16'h0) | (writeFire_7_7 ? io_narrowWrite_7_data_2 : 16'h0);	
  assign banks_1_3_writePorts_0_data_3 = (writeFire_0_7 ? io_narrowWrite_0_data_3 : 16'h0) | (writeFire_1_7 ? io_narrowWrite_1_data_3 : 16'h0) | (writeFire_2_7 ? io_narrowWrite_2_data_3 : 16'h0) | (writeFire_3_7 ? io_narrowWrite_3_data_3 : 16'h0) | (writeFire_4_7 ? io_narrowWrite_4_data_3 : 16'h0) | (writeFire_5_7 ? io_narrowWrite_5_data_3 : 16'h0) | (writeFire_6_7 ? io_narrowWrite_6_data_3 : 16'h0) | (writeFire_7_7 ? io_narrowWrite_7_data_3 : 16'h0);	
  reg         bankIdxReg;	
  wire [3:0]  _GEN_47 = {{~writeFire_0_3}, {~writeFire_0_2}, {~writeFire_0_1}, {~writeFire_0}};	
  wire [3:0]  _GEN_48 = {{~writeFire_0_7}, {~writeFire_0_6}, {~writeFire_0_5}, {~writeFire_0_4}};	
  wire [3:0]  _GEN_49 = {{~_GEN_17}, {~_GEN_11}, {~_GEN_5}, {~_GEN}};	
  wire [3:0]  _GEN_50 = {{~_GEN_41}, {~_GEN_35}, {~_GEN_29}, {~_GEN_23}};	
  wire [3:0]  _GEN_51 = {{~_GEN_18}, {~_GEN_12}, {~_GEN_6}, {~_GEN_0}};	
  wire [3:0]  _GEN_52 = {{~_GEN_42}, {~_GEN_36}, {~_GEN_30}, {~_GEN_24}};	
  wire [3:0]  _GEN_53 = {{~_GEN_19}, {~_GEN_13}, {~_GEN_7}, {~_GEN_1}};	
  wire [3:0]  _GEN_54 = {{~_GEN_43}, {~_GEN_37}, {~_GEN_31}, {~_GEN_25}};	
  wire [3:0]  _GEN_55 = {{~_GEN_20}, {~_GEN_14}, {~_GEN_8}, {~_GEN_2}};	
  wire [3:0]  _GEN_56 = {{~_GEN_44}, {~_GEN_38}, {~_GEN_32}, {~_GEN_26}};	
  wire [3:0]  _GEN_57 = {{~_GEN_21}, {~_GEN_15}, {~_GEN_9}, {~_GEN_3}};	
  wire [3:0]  _GEN_58 = {{~_GEN_45}, {~_GEN_39}, {~_GEN_33}, {~_GEN_27}};	
  wire [3:0]  _GEN_59 = {{~_GEN_22}, {~_GEN_16}, {~_GEN_10}, {~_GEN_4}};	
  wire [3:0]  _GEN_60 = {{~_GEN_46}, {~_GEN_40}, {~_GEN_34}, {~_GEN_28}};	
  always @(posedge clock)	
    bankIdxReg <= io_fullRead_0_addr[0];	
  
  banks_subBanks_sram_mem banks_subBanks_sram_mem (	
    .R0_addr (io_fullRead_0_addr),
    .R0_en   (io_fullRead_0_valid & ~(io_fullRead_0_addr[0])),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_R0_data),
    .W0_addr ((writeFire_0 ? io_narrowWrite_0_addr : 7'h0) | (writeFire_1 ? io_narrowWrite_1_addr : 7'h0) | (writeFire_2 ? io_narrowWrite_2_addr : 7'h0) | (writeFire_3 ? io_narrowWrite_3_addr : 7'h0) | (writeFire_4 ? io_narrowWrite_4_addr : 7'h0) | (writeFire_5 ? io_narrowWrite_5_addr : 7'h0) | (writeFire_6 ? io_narrowWrite_6_addr : 7'h0) | (writeFire_7 ? io_narrowWrite_7_addr : 7'h0)),	
    .W0_en   (|{writeValid_7, writeValid_6, writeValid_5, writeValid_4, writeValid_3, writeValid_2, writeValid_1, writeFire_0}),	
    .W0_clk  (clock),
    .W0_data ({banks_0_0_writePorts_0_data_3, banks_0_0_writePorts_0_data_2, banks_0_0_writePorts_0_data_1, banks_0_0_writePorts_0_data_0})	
  );	
  banks_subBanks_sram_mem_1 banks_subBanks_sram_mem_1 (	
    .R0_addr (io_fullRead_0_addr),
    .R0_en   (io_fullRead_0_valid & ~(io_fullRead_0_addr[0])),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_1_R0_data),
    .W0_addr ((writeFire_0_1 ? io_narrowWrite_0_addr : 7'h0) | (writeFire_1_1 ? io_narrowWrite_1_addr : 7'h0) | (writeFire_2_1 ? io_narrowWrite_2_addr : 7'h0) | (writeFire_3_1 ? io_narrowWrite_3_addr : 7'h0) | (writeFire_4_1 ? io_narrowWrite_4_addr : 7'h0) | (writeFire_5_1 ? io_narrowWrite_5_addr : 7'h0) | (writeFire_6_1 ? io_narrowWrite_6_addr : 7'h0) | (writeFire_7_1 ? io_narrowWrite_7_addr : 7'h0)),	
    .W0_en   (|{writeValid_1_7, writeValid_1_6, writeValid_1_5, writeValid_1_4, writeValid_1_3, writeValid_1_2, writeValid_1_1, writeFire_0_1}),	
    .W0_clk  (clock),
    .W0_data ({banks_0_1_writePorts_0_data_3, banks_0_1_writePorts_0_data_2, banks_0_1_writePorts_0_data_1, banks_0_1_writePorts_0_data_0})	
  );	
  banks_subBanks_sram_mem_2 banks_subBanks_sram_mem_2 (	
    .R0_addr (io_fullRead_0_addr),
    .R0_en   (io_fullRead_0_valid & ~(io_fullRead_0_addr[0])),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_2_R0_data),
    .W0_addr ((writeFire_0_2 ? io_narrowWrite_0_addr : 7'h0) | (writeFire_1_2 ? io_narrowWrite_1_addr : 7'h0) | (writeFire_2_2 ? io_narrowWrite_2_addr : 7'h0) | (writeFire_3_2 ? io_narrowWrite_3_addr : 7'h0) | (writeFire_4_2 ? io_narrowWrite_4_addr : 7'h0) | (writeFire_5_2 ? io_narrowWrite_5_addr : 7'h0) | (writeFire_6_2 ? io_narrowWrite_6_addr : 7'h0) | (writeFire_7_2 ? io_narrowWrite_7_addr : 7'h0)),	
    .W0_en   (|{writeValid_2_7, writeValid_2_6, writeValid_2_5, writeValid_2_4, writeValid_2_3, writeValid_2_2, writeValid_2_1, writeFire_0_2}),	
    .W0_clk  (clock),
    .W0_data ({banks_0_2_writePorts_0_data_3, banks_0_2_writePorts_0_data_2, banks_0_2_writePorts_0_data_1, banks_0_2_writePorts_0_data_0})	
  );	
  banks_subBanks_sram_mem_3 banks_subBanks_sram_mem_3 (	
    .R0_addr (io_fullRead_0_addr),
    .R0_en   (io_fullRead_0_valid & ~(io_fullRead_0_addr[0])),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_3_R0_data),
    .W0_addr ((writeFire_0_3 ? io_narrowWrite_0_addr : 7'h0) | (writeFire_1_3 ? io_narrowWrite_1_addr : 7'h0) | (writeFire_2_3 ? io_narrowWrite_2_addr : 7'h0) | (writeFire_3_3 ? io_narrowWrite_3_addr : 7'h0) | (writeFire_4_3 ? io_narrowWrite_4_addr : 7'h0) | (writeFire_5_3 ? io_narrowWrite_5_addr : 7'h0) | (writeFire_6_3 ? io_narrowWrite_6_addr : 7'h0) | (writeFire_7_3 ? io_narrowWrite_7_addr : 7'h0)),	
    .W0_en   (|{writeValid_3_7, writeValid_3_6, writeValid_3_5, writeValid_3_4, writeValid_3_3, writeValid_3_2, writeValid_3_1, writeFire_0_3}),	
    .W0_clk  (clock),
    .W0_data ({banks_0_3_writePorts_0_data_3, banks_0_3_writePorts_0_data_2, banks_0_3_writePorts_0_data_1, banks_0_3_writePorts_0_data_0})	
  );	
  banks_subBanks_sram_mem_4 banks_subBanks_sram_mem_4 (	
    .R0_addr (io_fullRead_0_addr),
    .R0_en   (io_fullRead_0_valid & io_fullRead_0_addr[0]),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_4_R0_data),
    .W0_addr ((writeFire_0_4 ? io_narrowWrite_0_addr : 7'h0) | (writeFire_1_4 ? io_narrowWrite_1_addr : 7'h0) | (writeFire_2_4 ? io_narrowWrite_2_addr : 7'h0) | (writeFire_3_4 ? io_narrowWrite_3_addr : 7'h0) | (writeFire_4_4 ? io_narrowWrite_4_addr : 7'h0) | (writeFire_5_4 ? io_narrowWrite_5_addr : 7'h0) | (writeFire_6_4 ? io_narrowWrite_6_addr : 7'h0) | (writeFire_7_4 ? io_narrowWrite_7_addr : 7'h0)),	
    .W0_en   (|{writeValid_4_7, writeValid_4_6, writeValid_4_5, writeValid_4_4, writeValid_4_3, writeValid_4_2, writeValid_4_1, writeFire_0_4}),	
    .W0_clk  (clock),
    .W0_data ({banks_1_0_writePorts_0_data_3, banks_1_0_writePorts_0_data_2, banks_1_0_writePorts_0_data_1, banks_1_0_writePorts_0_data_0})	
  );	
  banks_subBanks_sram_mem_5 banks_subBanks_sram_mem_5 (	
    .R0_addr (io_fullRead_0_addr),
    .R0_en   (io_fullRead_0_valid & io_fullRead_0_addr[0]),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_5_R0_data),
    .W0_addr ((writeFire_0_5 ? io_narrowWrite_0_addr : 7'h0) | (writeFire_1_5 ? io_narrowWrite_1_addr : 7'h0) | (writeFire_2_5 ? io_narrowWrite_2_addr : 7'h0) | (writeFire_3_5 ? io_narrowWrite_3_addr : 7'h0) | (writeFire_4_5 ? io_narrowWrite_4_addr : 7'h0) | (writeFire_5_5 ? io_narrowWrite_5_addr : 7'h0) | (writeFire_6_5 ? io_narrowWrite_6_addr : 7'h0) | (writeFire_7_5 ? io_narrowWrite_7_addr : 7'h0)),	
    .W0_en   (|{writeValid_5_7, writeValid_5_6, writeValid_5_5, writeValid_5_4, writeValid_5_3, writeValid_5_2, writeValid_5_1, writeFire_0_5}),	
    .W0_clk  (clock),
    .W0_data ({banks_1_1_writePorts_0_data_3, banks_1_1_writePorts_0_data_2, banks_1_1_writePorts_0_data_1, banks_1_1_writePorts_0_data_0})	
  );	
  banks_subBanks_sram_mem_6 banks_subBanks_sram_mem_6 (	
    .R0_addr (io_fullRead_0_addr),
    .R0_en   (io_fullRead_0_valid & io_fullRead_0_addr[0]),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_6_R0_data),
    .W0_addr ((writeFire_0_6 ? io_narrowWrite_0_addr : 7'h0) | (writeFire_1_6 ? io_narrowWrite_1_addr : 7'h0) | (writeFire_2_6 ? io_narrowWrite_2_addr : 7'h0) | (writeFire_3_6 ? io_narrowWrite_3_addr : 7'h0) | (writeFire_4_6 ? io_narrowWrite_4_addr : 7'h0) | (writeFire_5_6 ? io_narrowWrite_5_addr : 7'h0) | (writeFire_6_6 ? io_narrowWrite_6_addr : 7'h0) | (writeFire_7_6 ? io_narrowWrite_7_addr : 7'h0)),	
    .W0_en   (|{writeValid_6_7, writeValid_6_6, writeValid_6_5, writeValid_6_4, writeValid_6_3, writeValid_6_2, writeValid_6_1, writeFire_0_6}),	
    .W0_clk  (clock),
    .W0_data ({banks_1_2_writePorts_0_data_3, banks_1_2_writePorts_0_data_2, banks_1_2_writePorts_0_data_1, banks_1_2_writePorts_0_data_0})	
  );	
  banks_subBanks_sram_mem_7 banks_subBanks_sram_mem_7 (	
    .R0_addr (io_fullRead_0_addr),
    .R0_en   (io_fullRead_0_valid & io_fullRead_0_addr[0]),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_7_R0_data),
    .W0_addr ((writeFire_0_7 ? io_narrowWrite_0_addr : 7'h0) | (writeFire_1_7 ? io_narrowWrite_1_addr : 7'h0) | (writeFire_2_7 ? io_narrowWrite_2_addr : 7'h0) | (writeFire_3_7 ? io_narrowWrite_3_addr : 7'h0) | (writeFire_4_7 ? io_narrowWrite_4_addr : 7'h0) | (writeFire_5_7 ? io_narrowWrite_5_addr : 7'h0) | (writeFire_6_7 ? io_narrowWrite_6_addr : 7'h0) | (writeFire_7_7 ? io_narrowWrite_7_addr : 7'h0)),	
    .W0_en   (|{writeValid_7_7, writeValid_7_6, writeValid_7_5, writeValid_7_4, writeValid_7_3, writeValid_7_2, writeValid_7_1, writeFire_0_7}),	
    .W0_clk  (clock),
    .W0_data ({banks_1_3_writePorts_0_data_3, banks_1_3_writePorts_0_data_2, banks_1_3_writePorts_0_data_1, banks_1_3_writePorts_0_data_0})	
  );	
  assign io_fullRead_0_data_0 = bankIdxReg ? _banks_subBanks_sram_mem_4_R0_data[15:0] : _banks_subBanks_sram_mem_R0_data[15:0];	
  assign io_fullRead_0_data_1 = bankIdxReg ? _banks_subBanks_sram_mem_4_R0_data[31:16] : _banks_subBanks_sram_mem_R0_data[31:16];	
  assign io_fullRead_0_data_2 = bankIdxReg ? _banks_subBanks_sram_mem_4_R0_data[47:32] : _banks_subBanks_sram_mem_R0_data[47:32];	
  assign io_fullRead_0_data_3 = bankIdxReg ? _banks_subBanks_sram_mem_4_R0_data[63:48] : _banks_subBanks_sram_mem_R0_data[63:48];	
  assign io_fullRead_0_data_4 = bankIdxReg ? _banks_subBanks_sram_mem_5_R0_data[15:0] : _banks_subBanks_sram_mem_1_R0_data[15:0];	
  assign io_fullRead_0_data_5 = bankIdxReg ? _banks_subBanks_sram_mem_5_R0_data[31:16] : _banks_subBanks_sram_mem_1_R0_data[31:16];	
  assign io_fullRead_0_data_6 = bankIdxReg ? _banks_subBanks_sram_mem_5_R0_data[47:32] : _banks_subBanks_sram_mem_1_R0_data[47:32];	
  assign io_fullRead_0_data_7 = bankIdxReg ? _banks_subBanks_sram_mem_5_R0_data[63:48] : _banks_subBanks_sram_mem_1_R0_data[63:48];	
  assign io_fullRead_0_data_8 = bankIdxReg ? _banks_subBanks_sram_mem_6_R0_data[15:0] : _banks_subBanks_sram_mem_2_R0_data[15:0];	
  assign io_fullRead_0_data_9 = bankIdxReg ? _banks_subBanks_sram_mem_6_R0_data[31:16] : _banks_subBanks_sram_mem_2_R0_data[31:16];	
  assign io_fullRead_0_data_10 = bankIdxReg ? _banks_subBanks_sram_mem_6_R0_data[47:32] : _banks_subBanks_sram_mem_2_R0_data[47:32];	
  assign io_fullRead_0_data_11 = bankIdxReg ? _banks_subBanks_sram_mem_6_R0_data[63:48] : _banks_subBanks_sram_mem_2_R0_data[63:48];	
  assign io_fullRead_0_data_12 = bankIdxReg ? _banks_subBanks_sram_mem_7_R0_data[15:0] : _banks_subBanks_sram_mem_3_R0_data[15:0];	
  assign io_fullRead_0_data_13 = bankIdxReg ? _banks_subBanks_sram_mem_7_R0_data[31:16] : _banks_subBanks_sram_mem_3_R0_data[31:16];	
  assign io_fullRead_0_data_14 = bankIdxReg ? _banks_subBanks_sram_mem_7_R0_data[47:32] : _banks_subBanks_sram_mem_3_R0_data[47:32];	
  assign io_fullRead_0_data_15 = bankIdxReg ? _banks_subBanks_sram_mem_7_R0_data[63:48] : _banks_subBanks_sram_mem_3_R0_data[63:48];	
  assign io_narrowWrite_1_ready = io_narrowWrite_1_addr[0] ? _GEN_48[io_narrowWrite_1_subBankIdx] : _GEN_47[io_narrowWrite_1_subBankIdx];	
  assign io_narrowWrite_2_ready = io_narrowWrite_2_addr[0] ? _GEN_50[io_narrowWrite_2_subBankIdx] : _GEN_49[io_narrowWrite_2_subBankIdx];	
  assign io_narrowWrite_3_ready = io_narrowWrite_3_addr[0] ? _GEN_52[io_narrowWrite_3_subBankIdx] : _GEN_51[io_narrowWrite_3_subBankIdx];	
  assign io_narrowWrite_4_ready = io_narrowWrite_4_addr[0] ? _GEN_54[io_narrowWrite_4_subBankIdx] : _GEN_53[io_narrowWrite_4_subBankIdx];	
  assign io_narrowWrite_5_ready = io_narrowWrite_5_addr[0] ? _GEN_56[io_narrowWrite_5_subBankIdx] : _GEN_55[io_narrowWrite_5_subBankIdx];	
  assign io_narrowWrite_6_ready = io_narrowWrite_6_addr[0] ? _GEN_58[io_narrowWrite_6_subBankIdx] : _GEN_57[io_narrowWrite_6_subBankIdx];	
  assign io_narrowWrite_7_ready = io_narrowWrite_7_addr[0] ? _GEN_60[io_narrowWrite_7_subBankIdx] : _GEN_59[io_narrowWrite_7_subBankIdx];	
endmodule

