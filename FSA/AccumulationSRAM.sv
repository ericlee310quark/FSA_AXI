
module AccumulationSRAM(	
  input         clock,	
  input         io_fullRead_0_valid,	
  input  [4:0]  io_fullRead_0_addr,	
  output [31:0] io_fullRead_0_data_0,	
  output [31:0] io_fullRead_0_data_1,	
  output [31:0] io_fullRead_0_data_2,	
  output [31:0] io_fullRead_0_data_3,	
  output [31:0] io_fullRead_0_data_4,	
  output [31:0] io_fullRead_0_data_5,	
  output [31:0] io_fullRead_0_data_6,	
  output [31:0] io_fullRead_0_data_7,	
  output [31:0] io_fullRead_0_data_8,	
  output [31:0] io_fullRead_0_data_9,	
  output [31:0] io_fullRead_0_data_10,	
  output [31:0] io_fullRead_0_data_11,	
  output [31:0] io_fullRead_0_data_12,	
  output [31:0] io_fullRead_0_data_13,	
  output [31:0] io_fullRead_0_data_14,	
  output [31:0] io_fullRead_0_data_15,	
  input         io_fullWrite_0_valid,	
  input  [4:0]  io_fullWrite_0_addr,	
  input  [31:0] io_fullWrite_0_data_0,	
  input  [31:0] io_fullWrite_0_data_1,	
  input  [31:0] io_fullWrite_0_data_2,	
  input  [31:0] io_fullWrite_0_data_3,	
  input  [31:0] io_fullWrite_0_data_4,	
  input  [31:0] io_fullWrite_0_data_5,	
  input  [31:0] io_fullWrite_0_data_6,	
  input  [31:0] io_fullWrite_0_data_7,	
  input  [31:0] io_fullWrite_0_data_8,	
  input  [31:0] io_fullWrite_0_data_9,	
  input  [31:0] io_fullWrite_0_data_10,	
  input  [31:0] io_fullWrite_0_data_11,	
  input  [31:0] io_fullWrite_0_data_12,	
  input  [31:0] io_fullWrite_0_data_13,	
  input  [31:0] io_fullWrite_0_data_14,	
  input  [31:0] io_fullWrite_0_data_15,	
  input         io_narrowRead_0_valid,	
  input  [4:0]  io_narrowRead_0_addr,	
  output        io_narrowRead_0_ready,	
  input  [2:0]  io_narrowRead_0_subBankIdx,	
  output [31:0] io_narrowRead_0_data_0,	
  output [31:0] io_narrowRead_0_data_1,	
  input         io_narrowRead_1_valid,	
  input  [4:0]  io_narrowRead_1_addr,	
  output        io_narrowRead_1_ready,	
  input  [2:0]  io_narrowRead_1_subBankIdx,	
  output [31:0] io_narrowRead_1_data_0,	
  output [31:0] io_narrowRead_1_data_1,	
  input         io_narrowRead_2_valid,	
  input  [4:0]  io_narrowRead_2_addr,	
  output        io_narrowRead_2_ready,	
  input  [2:0]  io_narrowRead_2_subBankIdx,	
  output [31:0] io_narrowRead_2_data_0,	
  output [31:0] io_narrowRead_2_data_1,	
  input         io_narrowRead_3_valid,	
  input  [4:0]  io_narrowRead_3_addr,	
  output        io_narrowRead_3_ready,	
  input  [2:0]  io_narrowRead_3_subBankIdx,	
  output [31:0] io_narrowRead_3_data_0,	
  output [31:0] io_narrowRead_3_data_1,	
  input         io_narrowRead_4_valid,	
  input  [4:0]  io_narrowRead_4_addr,	
  output        io_narrowRead_4_ready,	
  input  [2:0]  io_narrowRead_4_subBankIdx,	
  output [31:0] io_narrowRead_4_data_0,	
  output [31:0] io_narrowRead_4_data_1,	
  input         io_narrowRead_5_valid,	
  input  [4:0]  io_narrowRead_5_addr,	
  output        io_narrowRead_5_ready,	
  input  [2:0]  io_narrowRead_5_subBankIdx,	
  output [31:0] io_narrowRead_5_data_0,	
  output [31:0] io_narrowRead_5_data_1,	
  input         io_narrowRead_6_valid,	
  input  [4:0]  io_narrowRead_6_addr,	
  output        io_narrowRead_6_ready,	
  input  [2:0]  io_narrowRead_6_subBankIdx,	
  output [31:0] io_narrowRead_6_data_0,	
  output [31:0] io_narrowRead_6_data_1,	
  input         io_narrowRead_7_valid,	
  input  [4:0]  io_narrowRead_7_addr,	
  output        io_narrowRead_7_ready,	
  input  [2:0]  io_narrowRead_7_subBankIdx,	
  output [31:0] io_narrowRead_7_data_0,	
  output [31:0] io_narrowRead_7_data_1	
);

  wire [63:0]      _banks_subBanks_sram_mem_15_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_14_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_13_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_12_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_11_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_10_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_9_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_8_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_7_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_6_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_5_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_4_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_3_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_2_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_1_R0_data;	
  wire [63:0]      _banks_subBanks_sram_mem_R0_data;	
  wire [63:0]      _GEN = {io_fullWrite_0_data_1, io_fullWrite_0_data_0};	
  wire [63:0]      _GEN_0 = {io_fullWrite_0_data_3, io_fullWrite_0_data_2};	
  wire [63:0]      _GEN_1 = {io_fullWrite_0_data_5, io_fullWrite_0_data_4};	
  wire [63:0]      _GEN_2 = {io_fullWrite_0_data_7, io_fullWrite_0_data_6};	
  wire [63:0]      _GEN_3 = {io_fullWrite_0_data_9, io_fullWrite_0_data_8};	
  wire [63:0]      _GEN_4 = {io_fullWrite_0_data_11, io_fullWrite_0_data_10};	
  wire [63:0]      _GEN_5 = {io_fullWrite_0_data_13, io_fullWrite_0_data_12};	
  wire [63:0]      _GEN_6 = {io_fullWrite_0_data_15, io_fullWrite_0_data_14};	
  wire             readFire_0 = io_fullRead_0_valid & ~(io_fullRead_0_addr[0]);	
  wire             _validMask_T_391 = io_narrowRead_0_subBankIdx == 3'h0;	
  wire             readValid_1 = io_narrowRead_0_valid & ~(io_narrowRead_0_addr[0]) & _validMask_T_391;	
  wire             _validMask_T_396 = io_narrowRead_1_subBankIdx == 3'h0;	
  wire             readValid_2 = io_narrowRead_1_valid & ~(io_narrowRead_1_addr[0]) & _validMask_T_396;	
  wire             _validMask_T_401 = io_narrowRead_2_subBankIdx == 3'h0;	
  wire             readValid_3 = io_narrowRead_2_valid & ~(io_narrowRead_2_addr[0]) & _validMask_T_401;	
  wire             _validMask_T_406 = io_narrowRead_3_subBankIdx == 3'h0;	
  wire             readValid_4 = io_narrowRead_3_valid & ~(io_narrowRead_3_addr[0]) & _validMask_T_406;	
  wire             _validMask_T_411 = io_narrowRead_4_subBankIdx == 3'h0;	
  wire             readValid_5 = io_narrowRead_4_valid & ~(io_narrowRead_4_addr[0]) & _validMask_T_411;	
  wire             _validMask_T_416 = io_narrowRead_5_subBankIdx == 3'h0;	
  wire             readValid_6 = io_narrowRead_5_valid & ~(io_narrowRead_5_addr[0]) & _validMask_T_416;	
  wire             _validMask_T_421 = io_narrowRead_6_subBankIdx == 3'h0;	
  wire             readValid_7 = io_narrowRead_6_valid & ~(io_narrowRead_6_addr[0]) & _validMask_T_421;	
  wire             _validMask_T_426 = io_narrowRead_7_subBankIdx == 3'h0;	
  wire             readValid_8 = io_narrowRead_7_valid & ~(io_narrowRead_7_addr[0]) & _validMask_T_426;	
  wire             _GEN_7 = readFire_0 | readValid_1;	
  wire             _GEN_8 = _GEN_7 | readValid_2;	
  wire             _GEN_9 = _GEN_8 | readValid_3;	
  wire             _GEN_10 = _GEN_9 | readValid_4;	
  wire             _GEN_11 = _GEN_10 | readValid_5;	
  wire             _GEN_12 = _GEN_11 | readValid_6;	
  wire             _GEN_13 = _GEN_12 | readValid_7;	
  wire             readFire_0_1 = io_fullRead_0_valid & ~(io_fullRead_0_addr[0]);	
  wire             _validMask_T_439 = io_narrowRead_0_subBankIdx == 3'h1;	
  wire             readValid_1_1 = io_narrowRead_0_valid & ~(io_narrowRead_0_addr[0]) & _validMask_T_439;	
  wire             _validMask_T_444 = io_narrowRead_1_subBankIdx == 3'h1;	
  wire             readValid_1_2 = io_narrowRead_1_valid & ~(io_narrowRead_1_addr[0]) & _validMask_T_444;	
  wire             _validMask_T_449 = io_narrowRead_2_subBankIdx == 3'h1;	
  wire             readValid_1_3 = io_narrowRead_2_valid & ~(io_narrowRead_2_addr[0]) & _validMask_T_449;	
  wire             _validMask_T_454 = io_narrowRead_3_subBankIdx == 3'h1;	
  wire             readValid_1_4 = io_narrowRead_3_valid & ~(io_narrowRead_3_addr[0]) & _validMask_T_454;	
  wire             _validMask_T_459 = io_narrowRead_4_subBankIdx == 3'h1;	
  wire             readValid_1_5 = io_narrowRead_4_valid & ~(io_narrowRead_4_addr[0]) & _validMask_T_459;	
  wire             _validMask_T_464 = io_narrowRead_5_subBankIdx == 3'h1;	
  wire             readValid_1_6 = io_narrowRead_5_valid & ~(io_narrowRead_5_addr[0]) & _validMask_T_464;	
  wire             _validMask_T_469 = io_narrowRead_6_subBankIdx == 3'h1;	
  wire             readValid_1_7 = io_narrowRead_6_valid & ~(io_narrowRead_6_addr[0]) & _validMask_T_469;	
  wire             _validMask_T_474 = io_narrowRead_7_subBankIdx == 3'h1;	
  wire             readValid_1_8 = io_narrowRead_7_valid & ~(io_narrowRead_7_addr[0]) & _validMask_T_474;	
  wire             _GEN_14 = readFire_0_1 | readValid_1_1;	
  wire             _GEN_15 = _GEN_14 | readValid_1_2;	
  wire             _GEN_16 = _GEN_15 | readValid_1_3;	
  wire             _GEN_17 = _GEN_16 | readValid_1_4;	
  wire             _GEN_18 = _GEN_17 | readValid_1_5;	
  wire             _GEN_19 = _GEN_18 | readValid_1_6;	
  wire             _GEN_20 = _GEN_19 | readValid_1_7;	
  wire             readFire_0_2 = io_fullRead_0_valid & ~(io_fullRead_0_addr[0]);	
  wire             _validMask_T_487 = io_narrowRead_0_subBankIdx == 3'h2;	
  wire             readValid_2_1 = io_narrowRead_0_valid & ~(io_narrowRead_0_addr[0]) & _validMask_T_487;	
  wire             _validMask_T_492 = io_narrowRead_1_subBankIdx == 3'h2;	
  wire             readValid_2_2 = io_narrowRead_1_valid & ~(io_narrowRead_1_addr[0]) & _validMask_T_492;	
  wire             _validMask_T_497 = io_narrowRead_2_subBankIdx == 3'h2;	
  wire             readValid_2_3 = io_narrowRead_2_valid & ~(io_narrowRead_2_addr[0]) & _validMask_T_497;	
  wire             _validMask_T_502 = io_narrowRead_3_subBankIdx == 3'h2;	
  wire             readValid_2_4 = io_narrowRead_3_valid & ~(io_narrowRead_3_addr[0]) & _validMask_T_502;	
  wire             _validMask_T_507 = io_narrowRead_4_subBankIdx == 3'h2;	
  wire             readValid_2_5 = io_narrowRead_4_valid & ~(io_narrowRead_4_addr[0]) & _validMask_T_507;	
  wire             _validMask_T_512 = io_narrowRead_5_subBankIdx == 3'h2;	
  wire             readValid_2_6 = io_narrowRead_5_valid & ~(io_narrowRead_5_addr[0]) & _validMask_T_512;	
  wire             _validMask_T_517 = io_narrowRead_6_subBankIdx == 3'h2;	
  wire             readValid_2_7 = io_narrowRead_6_valid & ~(io_narrowRead_6_addr[0]) & _validMask_T_517;	
  wire             _validMask_T_522 = io_narrowRead_7_subBankIdx == 3'h2;	
  wire             readValid_2_8 = io_narrowRead_7_valid & ~(io_narrowRead_7_addr[0]) & _validMask_T_522;	
  wire             _GEN_21 = readFire_0_2 | readValid_2_1;	
  wire             _GEN_22 = _GEN_21 | readValid_2_2;	
  wire             _GEN_23 = _GEN_22 | readValid_2_3;	
  wire             _GEN_24 = _GEN_23 | readValid_2_4;	
  wire             _GEN_25 = _GEN_24 | readValid_2_5;	
  wire             _GEN_26 = _GEN_25 | readValid_2_6;	
  wire             _GEN_27 = _GEN_26 | readValid_2_7;	
  wire             readFire_0_3 = io_fullRead_0_valid & ~(io_fullRead_0_addr[0]);	
  wire             _validMask_T_535 = io_narrowRead_0_subBankIdx == 3'h3;	
  wire             readValid_3_1 = io_narrowRead_0_valid & ~(io_narrowRead_0_addr[0]) & _validMask_T_535;	
  wire             _validMask_T_540 = io_narrowRead_1_subBankIdx == 3'h3;	
  wire             readValid_3_2 = io_narrowRead_1_valid & ~(io_narrowRead_1_addr[0]) & _validMask_T_540;	
  wire             _validMask_T_545 = io_narrowRead_2_subBankIdx == 3'h3;	
  wire             readValid_3_3 = io_narrowRead_2_valid & ~(io_narrowRead_2_addr[0]) & _validMask_T_545;	
  wire             _validMask_T_550 = io_narrowRead_3_subBankIdx == 3'h3;	
  wire             readValid_3_4 = io_narrowRead_3_valid & ~(io_narrowRead_3_addr[0]) & _validMask_T_550;	
  wire             _validMask_T_555 = io_narrowRead_4_subBankIdx == 3'h3;	
  wire             readValid_3_5 = io_narrowRead_4_valid & ~(io_narrowRead_4_addr[0]) & _validMask_T_555;	
  wire             _validMask_T_560 = io_narrowRead_5_subBankIdx == 3'h3;	
  wire             readValid_3_6 = io_narrowRead_5_valid & ~(io_narrowRead_5_addr[0]) & _validMask_T_560;	
  wire             _validMask_T_565 = io_narrowRead_6_subBankIdx == 3'h3;	
  wire             readValid_3_7 = io_narrowRead_6_valid & ~(io_narrowRead_6_addr[0]) & _validMask_T_565;	
  wire             _validMask_T_570 = io_narrowRead_7_subBankIdx == 3'h3;	
  wire             readValid_3_8 = io_narrowRead_7_valid & ~(io_narrowRead_7_addr[0]) & _validMask_T_570;	
  wire             _GEN_28 = readFire_0_3 | readValid_3_1;	
  wire             _GEN_29 = _GEN_28 | readValid_3_2;	
  wire             _GEN_30 = _GEN_29 | readValid_3_3;	
  wire             _GEN_31 = _GEN_30 | readValid_3_4;	
  wire             _GEN_32 = _GEN_31 | readValid_3_5;	
  wire             _GEN_33 = _GEN_32 | readValid_3_6;	
  wire             _GEN_34 = _GEN_33 | readValid_3_7;	
  wire             readFire_0_4 = io_fullRead_0_valid & ~(io_fullRead_0_addr[0]);	
  wire             _validMask_T_583 = io_narrowRead_0_subBankIdx == 3'h4;	
  wire             readValid_4_1 = io_narrowRead_0_valid & ~(io_narrowRead_0_addr[0]) & _validMask_T_583;	
  wire             _validMask_T_588 = io_narrowRead_1_subBankIdx == 3'h4;	
  wire             readValid_4_2 = io_narrowRead_1_valid & ~(io_narrowRead_1_addr[0]) & _validMask_T_588;	
  wire             _validMask_T_593 = io_narrowRead_2_subBankIdx == 3'h4;	
  wire             readValid_4_3 = io_narrowRead_2_valid & ~(io_narrowRead_2_addr[0]) & _validMask_T_593;	
  wire             _validMask_T_598 = io_narrowRead_3_subBankIdx == 3'h4;	
  wire             readValid_4_4 = io_narrowRead_3_valid & ~(io_narrowRead_3_addr[0]) & _validMask_T_598;	
  wire             _validMask_T_603 = io_narrowRead_4_subBankIdx == 3'h4;	
  wire             readValid_4_5 = io_narrowRead_4_valid & ~(io_narrowRead_4_addr[0]) & _validMask_T_603;	
  wire             _validMask_T_608 = io_narrowRead_5_subBankIdx == 3'h4;	
  wire             readValid_4_6 = io_narrowRead_5_valid & ~(io_narrowRead_5_addr[0]) & _validMask_T_608;	
  wire             _validMask_T_613 = io_narrowRead_6_subBankIdx == 3'h4;	
  wire             readValid_4_7 = io_narrowRead_6_valid & ~(io_narrowRead_6_addr[0]) & _validMask_T_613;	
  wire             _validMask_T_618 = io_narrowRead_7_subBankIdx == 3'h4;	
  wire             readValid_4_8 = io_narrowRead_7_valid & ~(io_narrowRead_7_addr[0]) & _validMask_T_618;	
  wire             _GEN_35 = readFire_0_4 | readValid_4_1;	
  wire             _GEN_36 = _GEN_35 | readValid_4_2;	
  wire             _GEN_37 = _GEN_36 | readValid_4_3;	
  wire             _GEN_38 = _GEN_37 | readValid_4_4;	
  wire             _GEN_39 = _GEN_38 | readValid_4_5;	
  wire             _GEN_40 = _GEN_39 | readValid_4_6;	
  wire             _GEN_41 = _GEN_40 | readValid_4_7;	
  wire             readFire_0_5 = io_fullRead_0_valid & ~(io_fullRead_0_addr[0]);	
  wire             _validMask_T_631 = io_narrowRead_0_subBankIdx == 3'h5;	
  wire             readValid_5_1 = io_narrowRead_0_valid & ~(io_narrowRead_0_addr[0]) & _validMask_T_631;	
  wire             _validMask_T_636 = io_narrowRead_1_subBankIdx == 3'h5;	
  wire             readValid_5_2 = io_narrowRead_1_valid & ~(io_narrowRead_1_addr[0]) & _validMask_T_636;	
  wire             _validMask_T_641 = io_narrowRead_2_subBankIdx == 3'h5;	
  wire             readValid_5_3 = io_narrowRead_2_valid & ~(io_narrowRead_2_addr[0]) & _validMask_T_641;	
  wire             _validMask_T_646 = io_narrowRead_3_subBankIdx == 3'h5;	
  wire             readValid_5_4 = io_narrowRead_3_valid & ~(io_narrowRead_3_addr[0]) & _validMask_T_646;	
  wire             _validMask_T_651 = io_narrowRead_4_subBankIdx == 3'h5;	
  wire             readValid_5_5 = io_narrowRead_4_valid & ~(io_narrowRead_4_addr[0]) & _validMask_T_651;	
  wire             _validMask_T_656 = io_narrowRead_5_subBankIdx == 3'h5;	
  wire             readValid_5_6 = io_narrowRead_5_valid & ~(io_narrowRead_5_addr[0]) & _validMask_T_656;	
  wire             _validMask_T_661 = io_narrowRead_6_subBankIdx == 3'h5;	
  wire             readValid_5_7 = io_narrowRead_6_valid & ~(io_narrowRead_6_addr[0]) & _validMask_T_661;	
  wire             _validMask_T_666 = io_narrowRead_7_subBankIdx == 3'h5;	
  wire             readValid_5_8 = io_narrowRead_7_valid & ~(io_narrowRead_7_addr[0]) & _validMask_T_666;	
  wire             _GEN_42 = readFire_0_5 | readValid_5_1;	
  wire             _GEN_43 = _GEN_42 | readValid_5_2;	
  wire             _GEN_44 = _GEN_43 | readValid_5_3;	
  wire             _GEN_45 = _GEN_44 | readValid_5_4;	
  wire             _GEN_46 = _GEN_45 | readValid_5_5;	
  wire             _GEN_47 = _GEN_46 | readValid_5_6;	
  wire             _GEN_48 = _GEN_47 | readValid_5_7;	
  wire             readFire_0_6 = io_fullRead_0_valid & ~(io_fullRead_0_addr[0]);	
  wire             _validMask_T_679 = io_narrowRead_0_subBankIdx == 3'h6;	
  wire             readValid_6_1 = io_narrowRead_0_valid & ~(io_narrowRead_0_addr[0]) & _validMask_T_679;	
  wire             _validMask_T_684 = io_narrowRead_1_subBankIdx == 3'h6;	
  wire             readValid_6_2 = io_narrowRead_1_valid & ~(io_narrowRead_1_addr[0]) & _validMask_T_684;	
  wire             _validMask_T_689 = io_narrowRead_2_subBankIdx == 3'h6;	
  wire             readValid_6_3 = io_narrowRead_2_valid & ~(io_narrowRead_2_addr[0]) & _validMask_T_689;	
  wire             _validMask_T_694 = io_narrowRead_3_subBankIdx == 3'h6;	
  wire             readValid_6_4 = io_narrowRead_3_valid & ~(io_narrowRead_3_addr[0]) & _validMask_T_694;	
  wire             _validMask_T_699 = io_narrowRead_4_subBankIdx == 3'h6;	
  wire             readValid_6_5 = io_narrowRead_4_valid & ~(io_narrowRead_4_addr[0]) & _validMask_T_699;	
  wire             _validMask_T_704 = io_narrowRead_5_subBankIdx == 3'h6;	
  wire             readValid_6_6 = io_narrowRead_5_valid & ~(io_narrowRead_5_addr[0]) & _validMask_T_704;	
  wire             _validMask_T_709 = io_narrowRead_6_subBankIdx == 3'h6;	
  wire             readValid_6_7 = io_narrowRead_6_valid & ~(io_narrowRead_6_addr[0]) & _validMask_T_709;	
  wire             _validMask_T_714 = io_narrowRead_7_subBankIdx == 3'h6;	
  wire             readValid_6_8 = io_narrowRead_7_valid & ~(io_narrowRead_7_addr[0]) & _validMask_T_714;	
  wire             _GEN_49 = readFire_0_6 | readValid_6_1;	
  wire             _GEN_50 = _GEN_49 | readValid_6_2;	
  wire             _GEN_51 = _GEN_50 | readValid_6_3;	
  wire             _GEN_52 = _GEN_51 | readValid_6_4;	
  wire             _GEN_53 = _GEN_52 | readValid_6_5;	
  wire             _GEN_54 = _GEN_53 | readValid_6_6;	
  wire             _GEN_55 = _GEN_54 | readValid_6_7;	
  wire             readFire_0_7 = io_fullRead_0_valid & ~(io_fullRead_0_addr[0]);	
  wire             readValid_7_1 = io_narrowRead_0_valid & ~(io_narrowRead_0_addr[0]) & (&io_narrowRead_0_subBankIdx);	
  wire             readValid_7_2 = io_narrowRead_1_valid & ~(io_narrowRead_1_addr[0]) & (&io_narrowRead_1_subBankIdx);	
  wire             readValid_7_3 = io_narrowRead_2_valid & ~(io_narrowRead_2_addr[0]) & (&io_narrowRead_2_subBankIdx);	
  wire             readValid_7_4 = io_narrowRead_3_valid & ~(io_narrowRead_3_addr[0]) & (&io_narrowRead_3_subBankIdx);	
  wire             readValid_7_5 = io_narrowRead_4_valid & ~(io_narrowRead_4_addr[0]) & (&io_narrowRead_4_subBankIdx);	
  wire             readValid_7_6 = io_narrowRead_5_valid & ~(io_narrowRead_5_addr[0]) & (&io_narrowRead_5_subBankIdx);	
  wire             readValid_7_7 = io_narrowRead_6_valid & ~(io_narrowRead_6_addr[0]) & (&io_narrowRead_6_subBankIdx);	
  wire             readValid_7_8 = io_narrowRead_7_valid & ~(io_narrowRead_7_addr[0]) & (&io_narrowRead_7_subBankIdx);	
  wire             _GEN_56 = readFire_0_7 | readValid_7_1;	
  wire             _GEN_57 = _GEN_56 | readValid_7_2;	
  wire             _GEN_58 = _GEN_57 | readValid_7_3;	
  wire             _GEN_59 = _GEN_58 | readValid_7_4;	
  wire             _GEN_60 = _GEN_59 | readValid_7_5;	
  wire             _GEN_61 = _GEN_60 | readValid_7_6;	
  wire             _GEN_62 = _GEN_61 | readValid_7_7;	
  wire             readFire_0_8 = io_fullRead_0_valid & io_fullRead_0_addr[0];	
  wire             readValid_8_1 = io_narrowRead_0_valid & io_narrowRead_0_addr[0] & _validMask_T_391;	
  wire             readValid_8_2 = io_narrowRead_1_valid & io_narrowRead_1_addr[0] & _validMask_T_396;	
  wire             readValid_8_3 = io_narrowRead_2_valid & io_narrowRead_2_addr[0] & _validMask_T_401;	
  wire             readValid_8_4 = io_narrowRead_3_valid & io_narrowRead_3_addr[0] & _validMask_T_406;	
  wire             readValid_8_5 = io_narrowRead_4_valid & io_narrowRead_4_addr[0] & _validMask_T_411;	
  wire             readValid_8_6 = io_narrowRead_5_valid & io_narrowRead_5_addr[0] & _validMask_T_416;	
  wire             readValid_8_7 = io_narrowRead_6_valid & io_narrowRead_6_addr[0] & _validMask_T_421;	
  wire             readValid_8_8 = io_narrowRead_7_valid & io_narrowRead_7_addr[0] & _validMask_T_426;	
  wire             _GEN_63 = readFire_0_8 | readValid_8_1;	
  wire             _GEN_64 = _GEN_63 | readValid_8_2;	
  wire             _GEN_65 = _GEN_64 | readValid_8_3;	
  wire             _GEN_66 = _GEN_65 | readValid_8_4;	
  wire             _GEN_67 = _GEN_66 | readValid_8_5;	
  wire             _GEN_68 = _GEN_67 | readValid_8_6;	
  wire             _GEN_69 = _GEN_68 | readValid_8_7;	
  wire             readFire_0_9 = io_fullRead_0_valid & io_fullRead_0_addr[0];	
  wire             readValid_9_1 = io_narrowRead_0_valid & io_narrowRead_0_addr[0] & _validMask_T_439;	
  wire             readValid_9_2 = io_narrowRead_1_valid & io_narrowRead_1_addr[0] & _validMask_T_444;	
  wire             readValid_9_3 = io_narrowRead_2_valid & io_narrowRead_2_addr[0] & _validMask_T_449;	
  wire             readValid_9_4 = io_narrowRead_3_valid & io_narrowRead_3_addr[0] & _validMask_T_454;	
  wire             readValid_9_5 = io_narrowRead_4_valid & io_narrowRead_4_addr[0] & _validMask_T_459;	
  wire             readValid_9_6 = io_narrowRead_5_valid & io_narrowRead_5_addr[0] & _validMask_T_464;	
  wire             readValid_9_7 = io_narrowRead_6_valid & io_narrowRead_6_addr[0] & _validMask_T_469;	
  wire             readValid_9_8 = io_narrowRead_7_valid & io_narrowRead_7_addr[0] & _validMask_T_474;	
  wire             _GEN_70 = readFire_0_9 | readValid_9_1;	
  wire             _GEN_71 = _GEN_70 | readValid_9_2;	
  wire             _GEN_72 = _GEN_71 | readValid_9_3;	
  wire             _GEN_73 = _GEN_72 | readValid_9_4;	
  wire             _GEN_74 = _GEN_73 | readValid_9_5;	
  wire             _GEN_75 = _GEN_74 | readValid_9_6;	
  wire             _GEN_76 = _GEN_75 | readValid_9_7;	
  wire             readFire_0_10 = io_fullRead_0_valid & io_fullRead_0_addr[0];	
  wire             readValid_10_1 = io_narrowRead_0_valid & io_narrowRead_0_addr[0] & _validMask_T_487;	
  wire             readValid_10_2 = io_narrowRead_1_valid & io_narrowRead_1_addr[0] & _validMask_T_492;	
  wire             readValid_10_3 = io_narrowRead_2_valid & io_narrowRead_2_addr[0] & _validMask_T_497;	
  wire             readValid_10_4 = io_narrowRead_3_valid & io_narrowRead_3_addr[0] & _validMask_T_502;	
  wire             readValid_10_5 = io_narrowRead_4_valid & io_narrowRead_4_addr[0] & _validMask_T_507;	
  wire             readValid_10_6 = io_narrowRead_5_valid & io_narrowRead_5_addr[0] & _validMask_T_512;	
  wire             readValid_10_7 = io_narrowRead_6_valid & io_narrowRead_6_addr[0] & _validMask_T_517;	
  wire             readValid_10_8 = io_narrowRead_7_valid & io_narrowRead_7_addr[0] & _validMask_T_522;	
  wire             _GEN_77 = readFire_0_10 | readValid_10_1;	
  wire             _GEN_78 = _GEN_77 | readValid_10_2;	
  wire             _GEN_79 = _GEN_78 | readValid_10_3;	
  wire             _GEN_80 = _GEN_79 | readValid_10_4;	
  wire             _GEN_81 = _GEN_80 | readValid_10_5;	
  wire             _GEN_82 = _GEN_81 | readValid_10_6;	
  wire             _GEN_83 = _GEN_82 | readValid_10_7;	
  wire             readFire_0_11 = io_fullRead_0_valid & io_fullRead_0_addr[0];	
  wire             readValid_11_1 = io_narrowRead_0_valid & io_narrowRead_0_addr[0] & _validMask_T_535;	
  wire             readValid_11_2 = io_narrowRead_1_valid & io_narrowRead_1_addr[0] & _validMask_T_540;	
  wire             readValid_11_3 = io_narrowRead_2_valid & io_narrowRead_2_addr[0] & _validMask_T_545;	
  wire             readValid_11_4 = io_narrowRead_3_valid & io_narrowRead_3_addr[0] & _validMask_T_550;	
  wire             readValid_11_5 = io_narrowRead_4_valid & io_narrowRead_4_addr[0] & _validMask_T_555;	
  wire             readValid_11_6 = io_narrowRead_5_valid & io_narrowRead_5_addr[0] & _validMask_T_560;	
  wire             readValid_11_7 = io_narrowRead_6_valid & io_narrowRead_6_addr[0] & _validMask_T_565;	
  wire             readValid_11_8 = io_narrowRead_7_valid & io_narrowRead_7_addr[0] & _validMask_T_570;	
  wire             _GEN_84 = readFire_0_11 | readValid_11_1;	
  wire             _GEN_85 = _GEN_84 | readValid_11_2;	
  wire             _GEN_86 = _GEN_85 | readValid_11_3;	
  wire             _GEN_87 = _GEN_86 | readValid_11_4;	
  wire             _GEN_88 = _GEN_87 | readValid_11_5;	
  wire             _GEN_89 = _GEN_88 | readValid_11_6;	
  wire             _GEN_90 = _GEN_89 | readValid_11_7;	
  wire             readFire_0_12 = io_fullRead_0_valid & io_fullRead_0_addr[0];	
  wire             readValid_12_1 = io_narrowRead_0_valid & io_narrowRead_0_addr[0] & _validMask_T_583;	
  wire             readValid_12_2 = io_narrowRead_1_valid & io_narrowRead_1_addr[0] & _validMask_T_588;	
  wire             readValid_12_3 = io_narrowRead_2_valid & io_narrowRead_2_addr[0] & _validMask_T_593;	
  wire             readValid_12_4 = io_narrowRead_3_valid & io_narrowRead_3_addr[0] & _validMask_T_598;	
  wire             readValid_12_5 = io_narrowRead_4_valid & io_narrowRead_4_addr[0] & _validMask_T_603;	
  wire             readValid_12_6 = io_narrowRead_5_valid & io_narrowRead_5_addr[0] & _validMask_T_608;	
  wire             readValid_12_7 = io_narrowRead_6_valid & io_narrowRead_6_addr[0] & _validMask_T_613;	
  wire             readValid_12_8 = io_narrowRead_7_valid & io_narrowRead_7_addr[0] & _validMask_T_618;	
  wire             _GEN_91 = readFire_0_12 | readValid_12_1;	
  wire             _GEN_92 = _GEN_91 | readValid_12_2;	
  wire             _GEN_93 = _GEN_92 | readValid_12_3;	
  wire             _GEN_94 = _GEN_93 | readValid_12_4;	
  wire             _GEN_95 = _GEN_94 | readValid_12_5;	
  wire             _GEN_96 = _GEN_95 | readValid_12_6;	
  wire             _GEN_97 = _GEN_96 | readValid_12_7;	
  wire             readFire_0_13 = io_fullRead_0_valid & io_fullRead_0_addr[0];	
  wire             readValid_13_1 = io_narrowRead_0_valid & io_narrowRead_0_addr[0] & _validMask_T_631;	
  wire             readValid_13_2 = io_narrowRead_1_valid & io_narrowRead_1_addr[0] & _validMask_T_636;	
  wire             readValid_13_3 = io_narrowRead_2_valid & io_narrowRead_2_addr[0] & _validMask_T_641;	
  wire             readValid_13_4 = io_narrowRead_3_valid & io_narrowRead_3_addr[0] & _validMask_T_646;	
  wire             readValid_13_5 = io_narrowRead_4_valid & io_narrowRead_4_addr[0] & _validMask_T_651;	
  wire             readValid_13_6 = io_narrowRead_5_valid & io_narrowRead_5_addr[0] & _validMask_T_656;	
  wire             readValid_13_7 = io_narrowRead_6_valid & io_narrowRead_6_addr[0] & _validMask_T_661;	
  wire             readValid_13_8 = io_narrowRead_7_valid & io_narrowRead_7_addr[0] & _validMask_T_666;	
  wire             _GEN_98 = readFire_0_13 | readValid_13_1;	
  wire             _GEN_99 = _GEN_98 | readValid_13_2;	
  wire             _GEN_100 = _GEN_99 | readValid_13_3;	
  wire             _GEN_101 = _GEN_100 | readValid_13_4;	
  wire             _GEN_102 = _GEN_101 | readValid_13_5;	
  wire             _GEN_103 = _GEN_102 | readValid_13_6;	
  wire             _GEN_104 = _GEN_103 | readValid_13_7;	
  wire             readFire_0_14 = io_fullRead_0_valid & io_fullRead_0_addr[0];	
  wire             readValid_14_1 = io_narrowRead_0_valid & io_narrowRead_0_addr[0] & _validMask_T_679;	
  wire             readValid_14_2 = io_narrowRead_1_valid & io_narrowRead_1_addr[0] & _validMask_T_684;	
  wire             readValid_14_3 = io_narrowRead_2_valid & io_narrowRead_2_addr[0] & _validMask_T_689;	
  wire             readValid_14_4 = io_narrowRead_3_valid & io_narrowRead_3_addr[0] & _validMask_T_694;	
  wire             readValid_14_5 = io_narrowRead_4_valid & io_narrowRead_4_addr[0] & _validMask_T_699;	
  wire             readValid_14_6 = io_narrowRead_5_valid & io_narrowRead_5_addr[0] & _validMask_T_704;	
  wire             readValid_14_7 = io_narrowRead_6_valid & io_narrowRead_6_addr[0] & _validMask_T_709;	
  wire             readValid_14_8 = io_narrowRead_7_valid & io_narrowRead_7_addr[0] & _validMask_T_714;	
  wire             _GEN_105 = readFire_0_14 | readValid_14_1;	
  wire             _GEN_106 = _GEN_105 | readValid_14_2;	
  wire             _GEN_107 = _GEN_106 | readValid_14_3;	
  wire             _GEN_108 = _GEN_107 | readValid_14_4;	
  wire             _GEN_109 = _GEN_108 | readValid_14_5;	
  wire             _GEN_110 = _GEN_109 | readValid_14_6;	
  wire             _GEN_111 = _GEN_110 | readValid_14_7;	
  wire             readFire_0_15 = io_fullRead_0_valid & io_fullRead_0_addr[0];	
  wire             readValid_15_1 = io_narrowRead_0_valid & io_narrowRead_0_addr[0] & (&io_narrowRead_0_subBankIdx);	
  wire             readValid_15_2 = io_narrowRead_1_valid & io_narrowRead_1_addr[0] & (&io_narrowRead_1_subBankIdx);	
  wire             readValid_15_3 = io_narrowRead_2_valid & io_narrowRead_2_addr[0] & (&io_narrowRead_2_subBankIdx);	
  wire             readValid_15_4 = io_narrowRead_3_valid & io_narrowRead_3_addr[0] & (&io_narrowRead_3_subBankIdx);	
  wire             readValid_15_5 = io_narrowRead_4_valid & io_narrowRead_4_addr[0] & (&io_narrowRead_4_subBankIdx);	
  wire             readValid_15_6 = io_narrowRead_5_valid & io_narrowRead_5_addr[0] & (&io_narrowRead_5_subBankIdx);	
  wire             readValid_15_7 = io_narrowRead_6_valid & io_narrowRead_6_addr[0] & (&io_narrowRead_6_subBankIdx);	
  wire             readValid_15_8 = io_narrowRead_7_valid & io_narrowRead_7_addr[0] & (&io_narrowRead_7_subBankIdx);	
  wire             _GEN_112 = readFire_0_15 | readValid_15_1;	
  wire             _GEN_113 = _GEN_112 | readValid_15_2;	
  wire             _GEN_114 = _GEN_113 | readValid_15_3;	
  wire             _GEN_115 = _GEN_114 | readValid_15_4;	
  wire             _GEN_116 = _GEN_115 | readValid_15_5;	
  wire             _GEN_117 = _GEN_116 | readValid_15_6;	
  wire             _GEN_118 = _GEN_117 | readValid_15_7;	
  reg              bankIdxReg;	
  reg              bankIdxReg_1;	
  wire [7:0]       _GEN_119 = {{~readFire_0_7}, {~readFire_0_6}, {~readFire_0_5}, {~readFire_0_4}, {~readFire_0_3}, {~readFire_0_2}, {~readFire_0_1}, {~readFire_0}};	
  wire [7:0]       _GEN_120 = {{~readFire_0_15}, {~readFire_0_14}, {~readFire_0_13}, {~readFire_0_12}, {~readFire_0_11}, {~readFire_0_10}, {~readFire_0_9}, {~readFire_0_8}};	
  reg  [2:0]       REG;	
  wire [7:0][31:0] _GEN_121 = {{_banks_subBanks_sram_mem_15_R0_data[31:0]}, {_banks_subBanks_sram_mem_14_R0_data[31:0]}, {_banks_subBanks_sram_mem_13_R0_data[31:0]}, {_banks_subBanks_sram_mem_12_R0_data[31:0]}, {_banks_subBanks_sram_mem_11_R0_data[31:0]}, {_banks_subBanks_sram_mem_10_R0_data[31:0]}, {_banks_subBanks_sram_mem_9_R0_data[31:0]}, {_banks_subBanks_sram_mem_8_R0_data[31:0]}};	
  wire [7:0][31:0] _GEN_122 = {{_banks_subBanks_sram_mem_7_R0_data[31:0]}, {_banks_subBanks_sram_mem_6_R0_data[31:0]}, {_banks_subBanks_sram_mem_5_R0_data[31:0]}, {_banks_subBanks_sram_mem_4_R0_data[31:0]}, {_banks_subBanks_sram_mem_3_R0_data[31:0]}, {_banks_subBanks_sram_mem_2_R0_data[31:0]}, {_banks_subBanks_sram_mem_1_R0_data[31:0]}, {_banks_subBanks_sram_mem_R0_data[31:0]}};	
  wire [7:0][31:0] _GEN_123 = bankIdxReg_1 ? _GEN_121 : _GEN_122;	
  wire [7:0][31:0] _GEN_124 = {{_banks_subBanks_sram_mem_15_R0_data[63:32]}, {_banks_subBanks_sram_mem_14_R0_data[63:32]}, {_banks_subBanks_sram_mem_13_R0_data[63:32]}, {_banks_subBanks_sram_mem_12_R0_data[63:32]}, {_banks_subBanks_sram_mem_11_R0_data[63:32]}, {_banks_subBanks_sram_mem_10_R0_data[63:32]}, {_banks_subBanks_sram_mem_9_R0_data[63:32]}, {_banks_subBanks_sram_mem_8_R0_data[63:32]}};	
  wire [7:0][31:0] _GEN_125 = {{_banks_subBanks_sram_mem_7_R0_data[63:32]}, {_banks_subBanks_sram_mem_6_R0_data[63:32]}, {_banks_subBanks_sram_mem_5_R0_data[63:32]}, {_banks_subBanks_sram_mem_4_R0_data[63:32]}, {_banks_subBanks_sram_mem_3_R0_data[63:32]}, {_banks_subBanks_sram_mem_2_R0_data[63:32]}, {_banks_subBanks_sram_mem_1_R0_data[63:32]}, {_banks_subBanks_sram_mem_R0_data[63:32]}};	
  wire [7:0][31:0] _GEN_126 = bankIdxReg_1 ? _GEN_124 : _GEN_125;	
  reg              bankIdxReg_2;	
  wire [7:0]       _GEN_127 = {{~_GEN_56}, {~_GEN_49}, {~_GEN_42}, {~_GEN_35}, {~_GEN_28}, {~_GEN_21}, {~_GEN_14}, {~_GEN_7}};	
  wire [7:0]       _GEN_128 = {{~_GEN_112}, {~_GEN_105}, {~_GEN_98}, {~_GEN_91}, {~_GEN_84}, {~_GEN_77}, {~_GEN_70}, {~_GEN_63}};	
  reg  [2:0]       REG_1;	
  wire [7:0][31:0] _GEN_129 = bankIdxReg_2 ? _GEN_121 : _GEN_122;	
  wire [7:0][31:0] _GEN_130 = bankIdxReg_2 ? _GEN_124 : _GEN_125;	
  reg              bankIdxReg_3;	
  wire [7:0]       _GEN_131 = {{~_GEN_57}, {~_GEN_50}, {~_GEN_43}, {~_GEN_36}, {~_GEN_29}, {~_GEN_22}, {~_GEN_15}, {~_GEN_8}};	
  wire [7:0]       _GEN_132 = {{~_GEN_113}, {~_GEN_106}, {~_GEN_99}, {~_GEN_92}, {~_GEN_85}, {~_GEN_78}, {~_GEN_71}, {~_GEN_64}};	
  reg  [2:0]       REG_2;	
  wire [7:0][31:0] _GEN_133 = bankIdxReg_3 ? _GEN_121 : _GEN_122;	
  wire [7:0][31:0] _GEN_134 = bankIdxReg_3 ? _GEN_124 : _GEN_125;	
  reg              bankIdxReg_4;	
  wire [7:0]       _GEN_135 = {{~_GEN_58}, {~_GEN_51}, {~_GEN_44}, {~_GEN_37}, {~_GEN_30}, {~_GEN_23}, {~_GEN_16}, {~_GEN_9}};	
  wire [7:0]       _GEN_136 = {{~_GEN_114}, {~_GEN_107}, {~_GEN_100}, {~_GEN_93}, {~_GEN_86}, {~_GEN_79}, {~_GEN_72}, {~_GEN_65}};	
  reg  [2:0]       REG_3;	
  wire [7:0][31:0] _GEN_137 = bankIdxReg_4 ? _GEN_121 : _GEN_122;	
  wire [7:0][31:0] _GEN_138 = bankIdxReg_4 ? _GEN_124 : _GEN_125;	
  reg              bankIdxReg_5;	
  wire [7:0]       _GEN_139 = {{~_GEN_59}, {~_GEN_52}, {~_GEN_45}, {~_GEN_38}, {~_GEN_31}, {~_GEN_24}, {~_GEN_17}, {~_GEN_10}};	
  wire [7:0]       _GEN_140 = {{~_GEN_115}, {~_GEN_108}, {~_GEN_101}, {~_GEN_94}, {~_GEN_87}, {~_GEN_80}, {~_GEN_73}, {~_GEN_66}};	
  reg  [2:0]       REG_4;	
  wire [7:0][31:0] _GEN_141 = bankIdxReg_5 ? _GEN_121 : _GEN_122;	
  wire [7:0][31:0] _GEN_142 = bankIdxReg_5 ? _GEN_124 : _GEN_125;	
  reg              bankIdxReg_6;	
  wire [7:0]       _GEN_143 = {{~_GEN_60}, {~_GEN_53}, {~_GEN_46}, {~_GEN_39}, {~_GEN_32}, {~_GEN_25}, {~_GEN_18}, {~_GEN_11}};	
  wire [7:0]       _GEN_144 = {{~_GEN_116}, {~_GEN_109}, {~_GEN_102}, {~_GEN_95}, {~_GEN_88}, {~_GEN_81}, {~_GEN_74}, {~_GEN_67}};	
  reg  [2:0]       REG_5;	
  wire [7:0][31:0] _GEN_145 = bankIdxReg_6 ? _GEN_121 : _GEN_122;	
  wire [7:0][31:0] _GEN_146 = bankIdxReg_6 ? _GEN_124 : _GEN_125;	
  reg              bankIdxReg_7;	
  wire [7:0]       _GEN_147 = {{~_GEN_61}, {~_GEN_54}, {~_GEN_47}, {~_GEN_40}, {~_GEN_33}, {~_GEN_26}, {~_GEN_19}, {~_GEN_12}};	
  wire [7:0]       _GEN_148 = {{~_GEN_117}, {~_GEN_110}, {~_GEN_103}, {~_GEN_96}, {~_GEN_89}, {~_GEN_82}, {~_GEN_75}, {~_GEN_68}};	
  reg  [2:0]       REG_6;	
  wire [7:0][31:0] _GEN_149 = bankIdxReg_7 ? _GEN_121 : _GEN_122;	
  wire [7:0][31:0] _GEN_150 = bankIdxReg_7 ? _GEN_124 : _GEN_125;	
  reg              bankIdxReg_8;	
  wire [7:0]       _GEN_151 = {{~_GEN_62}, {~_GEN_55}, {~_GEN_48}, {~_GEN_41}, {~_GEN_34}, {~_GEN_27}, {~_GEN_20}, {~_GEN_13}};	
  wire [7:0]       _GEN_152 = {{~_GEN_118}, {~_GEN_111}, {~_GEN_104}, {~_GEN_97}, {~_GEN_90}, {~_GEN_83}, {~_GEN_76}, {~_GEN_69}};	
  reg  [2:0]       REG_7;	
  wire [7:0][31:0] _GEN_153 = bankIdxReg_8 ? _GEN_121 : _GEN_122;	
  wire [7:0][31:0] _GEN_154 = bankIdxReg_8 ? _GEN_124 : _GEN_125;	
  always @(posedge clock) begin	
    bankIdxReg <= io_fullRead_0_addr[0];	
    bankIdxReg_1 <= io_narrowRead_0_addr[0];	
    REG <= io_narrowRead_0_subBankIdx;	
    bankIdxReg_2 <= io_narrowRead_1_addr[0];	
    REG_1 <= io_narrowRead_1_subBankIdx;	
    bankIdxReg_3 <= io_narrowRead_2_addr[0];	
    REG_2 <= io_narrowRead_2_subBankIdx;	
    bankIdxReg_4 <= io_narrowRead_3_addr[0];	
    REG_3 <= io_narrowRead_3_subBankIdx;	
    bankIdxReg_5 <= io_narrowRead_4_addr[0];	
    REG_4 <= io_narrowRead_4_subBankIdx;	
    bankIdxReg_6 <= io_narrowRead_5_addr[0];	
    REG_5 <= io_narrowRead_5_subBankIdx;	
    bankIdxReg_7 <= io_narrowRead_6_addr[0];	
    REG_6 <= io_narrowRead_6_subBankIdx;	
    bankIdxReg_8 <= io_narrowRead_7_addr[0];	
    REG_7 <= io_narrowRead_7_subBankIdx;	
  end // always @(posedge)
  
  banks_subBanks_sram_mem_0 banks_subBanks_sram_mem (	
    .R0_addr ((readFire_0 ? io_fullRead_0_addr : 5'h0) | (readValid_1 & ~readFire_0 ? io_narrowRead_0_addr : 5'h0) | (readValid_2 & ~_GEN_7 ? io_narrowRead_1_addr : 5'h0) | (readValid_3 & ~_GEN_8 ? io_narrowRead_2_addr : 5'h0) | (readValid_4 & ~_GEN_9 ? io_narrowRead_3_addr : 5'h0) | (readValid_5 & ~_GEN_10 ? io_narrowRead_4_addr : 5'h0) | (readValid_6 & ~_GEN_11 ? io_narrowRead_5_addr : 5'h0) | (readValid_7 & ~_GEN_12 ? io_narrowRead_6_addr : 5'h0) | (readValid_8 & ~_GEN_13 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_8, readValid_7, readValid_6, readValid_5, readValid_4, readValid_3, readValid_2, readValid_1, readFire_0}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & ~(io_fullWrite_0_addr[0])),	
    .W0_clk  (clock),
    .W0_data (_GEN)	
  );	
  banks_subBanks_sram_mem_1_0 banks_subBanks_sram_mem_1 (	
    .R0_addr ((readFire_0_1 ? io_fullRead_0_addr : 5'h0) | (readValid_1_1 & ~readFire_0_1 ? io_narrowRead_0_addr : 5'h0) | (readValid_1_2 & ~_GEN_14 ? io_narrowRead_1_addr : 5'h0) | (readValid_1_3 & ~_GEN_15 ? io_narrowRead_2_addr : 5'h0) | (readValid_1_4 & ~_GEN_16 ? io_narrowRead_3_addr : 5'h0) | (readValid_1_5 & ~_GEN_17 ? io_narrowRead_4_addr : 5'h0) | (readValid_1_6 & ~_GEN_18 ? io_narrowRead_5_addr : 5'h0) | (readValid_1_7 & ~_GEN_19 ? io_narrowRead_6_addr : 5'h0) | (readValid_1_8 & ~_GEN_20 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_1_8, readValid_1_7, readValid_1_6, readValid_1_5, readValid_1_4, readValid_1_3, readValid_1_2, readValid_1_1, readFire_0_1}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_1_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & ~(io_fullWrite_0_addr[0])),	
    .W0_clk  (clock),
    .W0_data (_GEN_0)	
  );	
  banks_subBanks_sram_mem_2_0 banks_subBanks_sram_mem_2 (	
    .R0_addr ((readFire_0_2 ? io_fullRead_0_addr : 5'h0) | (readValid_2_1 & ~readFire_0_2 ? io_narrowRead_0_addr : 5'h0) | (readValid_2_2 & ~_GEN_21 ? io_narrowRead_1_addr : 5'h0) | (readValid_2_3 & ~_GEN_22 ? io_narrowRead_2_addr : 5'h0) | (readValid_2_4 & ~_GEN_23 ? io_narrowRead_3_addr : 5'h0) | (readValid_2_5 & ~_GEN_24 ? io_narrowRead_4_addr : 5'h0) | (readValid_2_6 & ~_GEN_25 ? io_narrowRead_5_addr : 5'h0) | (readValid_2_7 & ~_GEN_26 ? io_narrowRead_6_addr : 5'h0) | (readValid_2_8 & ~_GEN_27 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_2_8, readValid_2_7, readValid_2_6, readValid_2_5, readValid_2_4, readValid_2_3, readValid_2_2, readValid_2_1, readFire_0_2}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_2_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & ~(io_fullWrite_0_addr[0])),	
    .W0_clk  (clock),
    .W0_data (_GEN_1)	
  );	
  banks_subBanks_sram_mem_3_0 banks_subBanks_sram_mem_3 (	
    .R0_addr ((readFire_0_3 ? io_fullRead_0_addr : 5'h0) | (readValid_3_1 & ~readFire_0_3 ? io_narrowRead_0_addr : 5'h0) | (readValid_3_2 & ~_GEN_28 ? io_narrowRead_1_addr : 5'h0) | (readValid_3_3 & ~_GEN_29 ? io_narrowRead_2_addr : 5'h0) | (readValid_3_4 & ~_GEN_30 ? io_narrowRead_3_addr : 5'h0) | (readValid_3_5 & ~_GEN_31 ? io_narrowRead_4_addr : 5'h0) | (readValid_3_6 & ~_GEN_32 ? io_narrowRead_5_addr : 5'h0) | (readValid_3_7 & ~_GEN_33 ? io_narrowRead_6_addr : 5'h0) | (readValid_3_8 & ~_GEN_34 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_3_8, readValid_3_7, readValid_3_6, readValid_3_5, readValid_3_4, readValid_3_3, readValid_3_2, readValid_3_1, readFire_0_3}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_3_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & ~(io_fullWrite_0_addr[0])),	
    .W0_clk  (clock),
    .W0_data (_GEN_2)	
  );	
  banks_subBanks_sram_mem_4_0 banks_subBanks_sram_mem_4 (	
    .R0_addr ((readFire_0_4 ? io_fullRead_0_addr : 5'h0) | (readValid_4_1 & ~readFire_0_4 ? io_narrowRead_0_addr : 5'h0) | (readValid_4_2 & ~_GEN_35 ? io_narrowRead_1_addr : 5'h0) | (readValid_4_3 & ~_GEN_36 ? io_narrowRead_2_addr : 5'h0) | (readValid_4_4 & ~_GEN_37 ? io_narrowRead_3_addr : 5'h0) | (readValid_4_5 & ~_GEN_38 ? io_narrowRead_4_addr : 5'h0) | (readValid_4_6 & ~_GEN_39 ? io_narrowRead_5_addr : 5'h0) | (readValid_4_7 & ~_GEN_40 ? io_narrowRead_6_addr : 5'h0) | (readValid_4_8 & ~_GEN_41 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_4_8, readValid_4_7, readValid_4_6, readValid_4_5, readValid_4_4, readValid_4_3, readValid_4_2, readValid_4_1, readFire_0_4}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_4_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & ~(io_fullWrite_0_addr[0])),	
    .W0_clk  (clock),
    .W0_data (_GEN_3)	
  );	
  banks_subBanks_sram_mem_5_0 banks_subBanks_sram_mem_5 (	
    .R0_addr ((readFire_0_5 ? io_fullRead_0_addr : 5'h0) | (readValid_5_1 & ~readFire_0_5 ? io_narrowRead_0_addr : 5'h0) | (readValid_5_2 & ~_GEN_42 ? io_narrowRead_1_addr : 5'h0) | (readValid_5_3 & ~_GEN_43 ? io_narrowRead_2_addr : 5'h0) | (readValid_5_4 & ~_GEN_44 ? io_narrowRead_3_addr : 5'h0) | (readValid_5_5 & ~_GEN_45 ? io_narrowRead_4_addr : 5'h0) | (readValid_5_6 & ~_GEN_46 ? io_narrowRead_5_addr : 5'h0) | (readValid_5_7 & ~_GEN_47 ? io_narrowRead_6_addr : 5'h0) | (readValid_5_8 & ~_GEN_48 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_5_8, readValid_5_7, readValid_5_6, readValid_5_5, readValid_5_4, readValid_5_3, readValid_5_2, readValid_5_1, readFire_0_5}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_5_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & ~(io_fullWrite_0_addr[0])),	
    .W0_clk  (clock),
    .W0_data (_GEN_4)	
  );	
  banks_subBanks_sram_mem_6_0 banks_subBanks_sram_mem_6 (	
    .R0_addr ((readFire_0_6 ? io_fullRead_0_addr : 5'h0) | (readValid_6_1 & ~readFire_0_6 ? io_narrowRead_0_addr : 5'h0) | (readValid_6_2 & ~_GEN_49 ? io_narrowRead_1_addr : 5'h0) | (readValid_6_3 & ~_GEN_50 ? io_narrowRead_2_addr : 5'h0) | (readValid_6_4 & ~_GEN_51 ? io_narrowRead_3_addr : 5'h0) | (readValid_6_5 & ~_GEN_52 ? io_narrowRead_4_addr : 5'h0) | (readValid_6_6 & ~_GEN_53 ? io_narrowRead_5_addr : 5'h0) | (readValid_6_7 & ~_GEN_54 ? io_narrowRead_6_addr : 5'h0) | (readValid_6_8 & ~_GEN_55 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_6_8, readValid_6_7, readValid_6_6, readValid_6_5, readValid_6_4, readValid_6_3, readValid_6_2, readValid_6_1, readFire_0_6}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_6_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & ~(io_fullWrite_0_addr[0])),	
    .W0_clk  (clock),
    .W0_data (_GEN_5)	
  );	
  banks_subBanks_sram_mem_7_0 banks_subBanks_sram_mem_7 (	
    .R0_addr ((readFire_0_7 ? io_fullRead_0_addr : 5'h0) | (readValid_7_1 & ~readFire_0_7 ? io_narrowRead_0_addr : 5'h0) | (readValid_7_2 & ~_GEN_56 ? io_narrowRead_1_addr : 5'h0) | (readValid_7_3 & ~_GEN_57 ? io_narrowRead_2_addr : 5'h0) | (readValid_7_4 & ~_GEN_58 ? io_narrowRead_3_addr : 5'h0) | (readValid_7_5 & ~_GEN_59 ? io_narrowRead_4_addr : 5'h0) | (readValid_7_6 & ~_GEN_60 ? io_narrowRead_5_addr : 5'h0) | (readValid_7_7 & ~_GEN_61 ? io_narrowRead_6_addr : 5'h0) | (readValid_7_8 & ~_GEN_62 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_7_8, readValid_7_7, readValid_7_6, readValid_7_5, readValid_7_4, readValid_7_3, readValid_7_2, readValid_7_1, readFire_0_7}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_7_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & ~(io_fullWrite_0_addr[0])),	
    .W0_clk  (clock),
    .W0_data (_GEN_6)	
  );	
  banks_subBanks_sram_mem_8 banks_subBanks_sram_mem_8 (	
    .R0_addr ((readFire_0_8 ? io_fullRead_0_addr : 5'h0) | (readValid_8_1 & ~readFire_0_8 ? io_narrowRead_0_addr : 5'h0) | (readValid_8_2 & ~_GEN_63 ? io_narrowRead_1_addr : 5'h0) | (readValid_8_3 & ~_GEN_64 ? io_narrowRead_2_addr : 5'h0) | (readValid_8_4 & ~_GEN_65 ? io_narrowRead_3_addr : 5'h0) | (readValid_8_5 & ~_GEN_66 ? io_narrowRead_4_addr : 5'h0) | (readValid_8_6 & ~_GEN_67 ? io_narrowRead_5_addr : 5'h0) | (readValid_8_7 & ~_GEN_68 ? io_narrowRead_6_addr : 5'h0) | (readValid_8_8 & ~_GEN_69 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_8_8, readValid_8_7, readValid_8_6, readValid_8_5, readValid_8_4, readValid_8_3, readValid_8_2, readValid_8_1, readFire_0_8}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_8_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & io_fullWrite_0_addr[0]),	
    .W0_clk  (clock),
    .W0_data (_GEN)	
  );	
  banks_subBanks_sram_mem_9 banks_subBanks_sram_mem_9 (	
    .R0_addr ((readFire_0_9 ? io_fullRead_0_addr : 5'h0) | (readValid_9_1 & ~readFire_0_9 ? io_narrowRead_0_addr : 5'h0) | (readValid_9_2 & ~_GEN_70 ? io_narrowRead_1_addr : 5'h0) | (readValid_9_3 & ~_GEN_71 ? io_narrowRead_2_addr : 5'h0) | (readValid_9_4 & ~_GEN_72 ? io_narrowRead_3_addr : 5'h0) | (readValid_9_5 & ~_GEN_73 ? io_narrowRead_4_addr : 5'h0) | (readValid_9_6 & ~_GEN_74 ? io_narrowRead_5_addr : 5'h0) | (readValid_9_7 & ~_GEN_75 ? io_narrowRead_6_addr : 5'h0) | (readValid_9_8 & ~_GEN_76 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_9_8, readValid_9_7, readValid_9_6, readValid_9_5, readValid_9_4, readValid_9_3, readValid_9_2, readValid_9_1, readFire_0_9}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_9_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & io_fullWrite_0_addr[0]),	
    .W0_clk  (clock),
    .W0_data (_GEN_0)	
  );	
  banks_subBanks_sram_mem_10 banks_subBanks_sram_mem_10 (	
    .R0_addr ((readFire_0_10 ? io_fullRead_0_addr : 5'h0) | (readValid_10_1 & ~readFire_0_10 ? io_narrowRead_0_addr : 5'h0) | (readValid_10_2 & ~_GEN_77 ? io_narrowRead_1_addr : 5'h0) | (readValid_10_3 & ~_GEN_78 ? io_narrowRead_2_addr : 5'h0) | (readValid_10_4 & ~_GEN_79 ? io_narrowRead_3_addr : 5'h0) | (readValid_10_5 & ~_GEN_80 ? io_narrowRead_4_addr : 5'h0) | (readValid_10_6 & ~_GEN_81 ? io_narrowRead_5_addr : 5'h0) | (readValid_10_7 & ~_GEN_82 ? io_narrowRead_6_addr : 5'h0) | (readValid_10_8 & ~_GEN_83 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_10_8, readValid_10_7, readValid_10_6, readValid_10_5, readValid_10_4, readValid_10_3, readValid_10_2, readValid_10_1, readFire_0_10}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_10_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & io_fullWrite_0_addr[0]),	
    .W0_clk  (clock),
    .W0_data (_GEN_1)	
  );	
  banks_subBanks_sram_mem_11 banks_subBanks_sram_mem_11 (	
    .R0_addr ((readFire_0_11 ? io_fullRead_0_addr : 5'h0) | (readValid_11_1 & ~readFire_0_11 ? io_narrowRead_0_addr : 5'h0) | (readValid_11_2 & ~_GEN_84 ? io_narrowRead_1_addr : 5'h0) | (readValid_11_3 & ~_GEN_85 ? io_narrowRead_2_addr : 5'h0) | (readValid_11_4 & ~_GEN_86 ? io_narrowRead_3_addr : 5'h0) | (readValid_11_5 & ~_GEN_87 ? io_narrowRead_4_addr : 5'h0) | (readValid_11_6 & ~_GEN_88 ? io_narrowRead_5_addr : 5'h0) | (readValid_11_7 & ~_GEN_89 ? io_narrowRead_6_addr : 5'h0) | (readValid_11_8 & ~_GEN_90 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_11_8, readValid_11_7, readValid_11_6, readValid_11_5, readValid_11_4, readValid_11_3, readValid_11_2, readValid_11_1, readFire_0_11}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_11_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & io_fullWrite_0_addr[0]),	
    .W0_clk  (clock),
    .W0_data (_GEN_2)	
  );	
  banks_subBanks_sram_mem_12 banks_subBanks_sram_mem_12 (	
    .R0_addr ((readFire_0_12 ? io_fullRead_0_addr : 5'h0) | (readValid_12_1 & ~readFire_0_12 ? io_narrowRead_0_addr : 5'h0) | (readValid_12_2 & ~_GEN_91 ? io_narrowRead_1_addr : 5'h0) | (readValid_12_3 & ~_GEN_92 ? io_narrowRead_2_addr : 5'h0) | (readValid_12_4 & ~_GEN_93 ? io_narrowRead_3_addr : 5'h0) | (readValid_12_5 & ~_GEN_94 ? io_narrowRead_4_addr : 5'h0) | (readValid_12_6 & ~_GEN_95 ? io_narrowRead_5_addr : 5'h0) | (readValid_12_7 & ~_GEN_96 ? io_narrowRead_6_addr : 5'h0) | (readValid_12_8 & ~_GEN_97 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_12_8, readValid_12_7, readValid_12_6, readValid_12_5, readValid_12_4, readValid_12_3, readValid_12_2, readValid_12_1, readFire_0_12}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_12_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & io_fullWrite_0_addr[0]),	
    .W0_clk  (clock),
    .W0_data (_GEN_3)	
  );	
  banks_subBanks_sram_mem_13 banks_subBanks_sram_mem_13 (	
    .R0_addr ((readFire_0_13 ? io_fullRead_0_addr : 5'h0) | (readValid_13_1 & ~readFire_0_13 ? io_narrowRead_0_addr : 5'h0) | (readValid_13_2 & ~_GEN_98 ? io_narrowRead_1_addr : 5'h0) | (readValid_13_3 & ~_GEN_99 ? io_narrowRead_2_addr : 5'h0) | (readValid_13_4 & ~_GEN_100 ? io_narrowRead_3_addr : 5'h0) | (readValid_13_5 & ~_GEN_101 ? io_narrowRead_4_addr : 5'h0) | (readValid_13_6 & ~_GEN_102 ? io_narrowRead_5_addr : 5'h0) | (readValid_13_7 & ~_GEN_103 ? io_narrowRead_6_addr : 5'h0) | (readValid_13_8 & ~_GEN_104 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_13_8, readValid_13_7, readValid_13_6, readValid_13_5, readValid_13_4, readValid_13_3, readValid_13_2, readValid_13_1, readFire_0_13}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_13_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & io_fullWrite_0_addr[0]),	
    .W0_clk  (clock),
    .W0_data (_GEN_4)	
  );	
  banks_subBanks_sram_mem_14 banks_subBanks_sram_mem_14 (	
    .R0_addr ((readFire_0_14 ? io_fullRead_0_addr : 5'h0) | (readValid_14_1 & ~readFire_0_14 ? io_narrowRead_0_addr : 5'h0) | (readValid_14_2 & ~_GEN_105 ? io_narrowRead_1_addr : 5'h0) | (readValid_14_3 & ~_GEN_106 ? io_narrowRead_2_addr : 5'h0) | (readValid_14_4 & ~_GEN_107 ? io_narrowRead_3_addr : 5'h0) | (readValid_14_5 & ~_GEN_108 ? io_narrowRead_4_addr : 5'h0) | (readValid_14_6 & ~_GEN_109 ? io_narrowRead_5_addr : 5'h0) | (readValid_14_7 & ~_GEN_110 ? io_narrowRead_6_addr : 5'h0) | (readValid_14_8 & ~_GEN_111 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_14_8, readValid_14_7, readValid_14_6, readValid_14_5, readValid_14_4, readValid_14_3, readValid_14_2, readValid_14_1, readFire_0_14}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_14_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & io_fullWrite_0_addr[0]),	
    .W0_clk  (clock),
    .W0_data (_GEN_5)	
  );	
  banks_subBanks_sram_mem_15 banks_subBanks_sram_mem_15 (	
    .R0_addr ((readFire_0_15 ? io_fullRead_0_addr : 5'h0) | (readValid_15_1 & ~readFire_0_15 ? io_narrowRead_0_addr : 5'h0) | (readValid_15_2 & ~_GEN_112 ? io_narrowRead_1_addr : 5'h0) | (readValid_15_3 & ~_GEN_113 ? io_narrowRead_2_addr : 5'h0) | (readValid_15_4 & ~_GEN_114 ? io_narrowRead_3_addr : 5'h0) | (readValid_15_5 & ~_GEN_115 ? io_narrowRead_4_addr : 5'h0) | (readValid_15_6 & ~_GEN_116 ? io_narrowRead_5_addr : 5'h0) | (readValid_15_7 & ~_GEN_117 ? io_narrowRead_6_addr : 5'h0) | (readValid_15_8 & ~_GEN_118 ? io_narrowRead_7_addr : 5'h0)),	
    .R0_en   (|{readValid_15_8, readValid_15_7, readValid_15_6, readValid_15_5, readValid_15_4, readValid_15_3, readValid_15_2, readValid_15_1, readFire_0_15}),	
    .R0_clk  (clock),
    .R0_data (_banks_subBanks_sram_mem_15_R0_data),
    .W0_addr (io_fullWrite_0_addr),
    .W0_en   (io_fullWrite_0_valid & io_fullWrite_0_addr[0]),	
    .W0_clk  (clock),
    .W0_data (_GEN_6)	
  );	
  assign io_fullRead_0_data_0 = bankIdxReg ? _banks_subBanks_sram_mem_8_R0_data[31:0] : _banks_subBanks_sram_mem_R0_data[31:0];	
  assign io_fullRead_0_data_1 = bankIdxReg ? _banks_subBanks_sram_mem_8_R0_data[63:32] : _banks_subBanks_sram_mem_R0_data[63:32];	
  assign io_fullRead_0_data_2 = bankIdxReg ? _banks_subBanks_sram_mem_9_R0_data[31:0] : _banks_subBanks_sram_mem_1_R0_data[31:0];	
  assign io_fullRead_0_data_3 = bankIdxReg ? _banks_subBanks_sram_mem_9_R0_data[63:32] : _banks_subBanks_sram_mem_1_R0_data[63:32];	
  assign io_fullRead_0_data_4 = bankIdxReg ? _banks_subBanks_sram_mem_10_R0_data[31:0] : _banks_subBanks_sram_mem_2_R0_data[31:0];	
  assign io_fullRead_0_data_5 = bankIdxReg ? _banks_subBanks_sram_mem_10_R0_data[63:32] : _banks_subBanks_sram_mem_2_R0_data[63:32];	
  assign io_fullRead_0_data_6 = bankIdxReg ? _banks_subBanks_sram_mem_11_R0_data[31:0] : _banks_subBanks_sram_mem_3_R0_data[31:0];	
  assign io_fullRead_0_data_7 = bankIdxReg ? _banks_subBanks_sram_mem_11_R0_data[63:32] : _banks_subBanks_sram_mem_3_R0_data[63:32];	
  assign io_fullRead_0_data_8 = bankIdxReg ? _banks_subBanks_sram_mem_12_R0_data[31:0] : _banks_subBanks_sram_mem_4_R0_data[31:0];	
  assign io_fullRead_0_data_9 = bankIdxReg ? _banks_subBanks_sram_mem_12_R0_data[63:32] : _banks_subBanks_sram_mem_4_R0_data[63:32];	
  assign io_fullRead_0_data_10 = bankIdxReg ? _banks_subBanks_sram_mem_13_R0_data[31:0] : _banks_subBanks_sram_mem_5_R0_data[31:0];	
  assign io_fullRead_0_data_11 = bankIdxReg ? _banks_subBanks_sram_mem_13_R0_data[63:32] : _banks_subBanks_sram_mem_5_R0_data[63:32];	
  assign io_fullRead_0_data_12 = bankIdxReg ? _banks_subBanks_sram_mem_14_R0_data[31:0] : _banks_subBanks_sram_mem_6_R0_data[31:0];	
  assign io_fullRead_0_data_13 = bankIdxReg ? _banks_subBanks_sram_mem_14_R0_data[63:32] : _banks_subBanks_sram_mem_6_R0_data[63:32];	
  assign io_fullRead_0_data_14 = bankIdxReg ? _banks_subBanks_sram_mem_15_R0_data[31:0] : _banks_subBanks_sram_mem_7_R0_data[31:0];	
  assign io_fullRead_0_data_15 = bankIdxReg ? _banks_subBanks_sram_mem_15_R0_data[63:32] : _banks_subBanks_sram_mem_7_R0_data[63:32];	
  assign io_narrowRead_0_ready = io_narrowRead_0_addr[0] ? _GEN_120[io_narrowRead_0_subBankIdx] : _GEN_119[io_narrowRead_0_subBankIdx];	
  assign io_narrowRead_0_data_0 = _GEN_123[REG];	
  assign io_narrowRead_0_data_1 = _GEN_126[REG];	
  assign io_narrowRead_1_ready = io_narrowRead_1_addr[0] ? _GEN_128[io_narrowRead_1_subBankIdx] : _GEN_127[io_narrowRead_1_subBankIdx];	
  assign io_narrowRead_1_data_0 = _GEN_129[REG_1];	
  assign io_narrowRead_1_data_1 = _GEN_130[REG_1];	
  assign io_narrowRead_2_ready = io_narrowRead_2_addr[0] ? _GEN_132[io_narrowRead_2_subBankIdx] : _GEN_131[io_narrowRead_2_subBankIdx];	
  assign io_narrowRead_2_data_0 = _GEN_133[REG_2];	
  assign io_narrowRead_2_data_1 = _GEN_134[REG_2];	
  assign io_narrowRead_3_ready = io_narrowRead_3_addr[0] ? _GEN_136[io_narrowRead_3_subBankIdx] : _GEN_135[io_narrowRead_3_subBankIdx];	
  assign io_narrowRead_3_data_0 = _GEN_137[REG_3];	
  assign io_narrowRead_3_data_1 = _GEN_138[REG_3];	
  assign io_narrowRead_4_ready = io_narrowRead_4_addr[0] ? _GEN_140[io_narrowRead_4_subBankIdx] : _GEN_139[io_narrowRead_4_subBankIdx];	
  assign io_narrowRead_4_data_0 = _GEN_141[REG_4];	
  assign io_narrowRead_4_data_1 = _GEN_142[REG_4];	
  assign io_narrowRead_5_ready = io_narrowRead_5_addr[0] ? _GEN_144[io_narrowRead_5_subBankIdx] : _GEN_143[io_narrowRead_5_subBankIdx];	
  assign io_narrowRead_5_data_0 = _GEN_145[REG_5];	
  assign io_narrowRead_5_data_1 = _GEN_146[REG_5];	
  assign io_narrowRead_6_ready = io_narrowRead_6_addr[0] ? _GEN_148[io_narrowRead_6_subBankIdx] : _GEN_147[io_narrowRead_6_subBankIdx];	
  assign io_narrowRead_6_data_0 = _GEN_149[REG_6];	
  assign io_narrowRead_6_data_1 = _GEN_150[REG_6];	
  assign io_narrowRead_7_ready = io_narrowRead_7_addr[0] ? _GEN_152[io_narrowRead_7_subBankIdx] : _GEN_151[io_narrowRead_7_subBankIdx];	
  assign io_narrowRead_7_data_0 = _GEN_153[REG_7];	
  assign io_narrowRead_7_data_1 = _GEN_154[REG_7];	
endmodule

