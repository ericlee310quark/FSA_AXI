
module MatrixControlFSM(	
  input        clock,	
  input        reset,	
  output       io_in_ready,	
  input        io_in_valid,	
  input  [4:0] io_in_bits_acc_addr,	
  input  [4:0] io_in_bits_acc_stride,	
  input        io_in_bits_acc_zero,	
  input  [6:0] io_in_bits_spad_addr,	
  input  [4:0] io_in_bits_spad_stride,	
  input        io_in_bits_spad_revInput,	
  input        io_in_bits_spad_revOutput,	
  input        io_in_bits_spad_delayOutput,	
  input  [4:0] io_in_bits_header_semId,	
  input        io_in_bits_header_releaseValid,	
  input  [2:0] io_in_bits_header_releaseSemValue,	
  input  [4:0] io_in_bits_header_func,	
  output       io_sp_read_valid,	
  output       io_sp_read_bits_is_constant,	
  output [6:0] io_sp_read_bits_addr,	
  output       io_sp_read_bits_rev_sram_out,	
  output       io_sp_read_bits_delay_sram_out,	
  output       io_sp_read_bits_rev_delayer_out,	
  output       io_acc_read_valid,	
  output       io_acc_read_bits_is_constant,	
  output [4:0] io_acc_read_bits_addr,	
  output       io_acc_read_bits_rmw,	
  output       io_cmp_ctrl_valid,	
  output [2:0] io_cmp_ctrl_bits_cmd,	
  output       io_pe_ctrl_0_valid,	
  output       io_pe_ctrl_0_bits_mac,	
  output       io_pe_ctrl_0_bits_acc_ui,	
  output       io_pe_ctrl_0_bits_load_reg_li,	
  output       io_pe_ctrl_0_bits_load_reg_ui,	
  output       io_pe_ctrl_0_bits_flow_lr,	
  output       io_pe_ctrl_0_bits_flow_ud,	
  output       io_pe_ctrl_0_bits_flow_du,	
  output       io_pe_ctrl_0_bits_update_reg,	
  output       io_pe_ctrl_0_bits_exp2,	
  output       io_pe_ctrl_1_valid,	
  output       io_pe_ctrl_1_bits_mac,	
  output       io_pe_ctrl_1_bits_acc_ui,	
  output       io_pe_ctrl_1_bits_load_reg_li,	
  output       io_pe_ctrl_1_bits_load_reg_ui,	
  output       io_pe_ctrl_1_bits_flow_lr,	
  output       io_pe_ctrl_1_bits_flow_ud,	
  output       io_pe_ctrl_1_bits_flow_du,	
  output       io_pe_ctrl_1_bits_update_reg,	
  output       io_pe_ctrl_1_bits_exp2,	
  output       io_pe_ctrl_2_valid,	
  output       io_pe_ctrl_2_bits_mac,	
  output       io_pe_ctrl_2_bits_acc_ui,	
  output       io_pe_ctrl_2_bits_load_reg_li,	
  output       io_pe_ctrl_2_bits_load_reg_ui,	
  output       io_pe_ctrl_2_bits_flow_lr,	
  output       io_pe_ctrl_2_bits_flow_ud,	
  output       io_pe_ctrl_2_bits_flow_du,	
  output       io_pe_ctrl_2_bits_update_reg,	
  output       io_pe_ctrl_2_bits_exp2,	
  output       io_pe_ctrl_3_valid,	
  output       io_pe_ctrl_3_bits_mac,	
  output       io_pe_ctrl_3_bits_acc_ui,	
  output       io_pe_ctrl_3_bits_load_reg_li,	
  output       io_pe_ctrl_3_bits_load_reg_ui,	
  output       io_pe_ctrl_3_bits_flow_lr,	
  output       io_pe_ctrl_3_bits_flow_ud,	
  output       io_pe_ctrl_3_bits_flow_du,	
  output       io_pe_ctrl_3_bits_update_reg,	
  output       io_pe_ctrl_3_bits_exp2,	
  output       io_pe_ctrl_4_valid,	
  output       io_pe_ctrl_4_bits_mac,	
  output       io_pe_ctrl_4_bits_acc_ui,	
  output       io_pe_ctrl_4_bits_load_reg_li,	
  output       io_pe_ctrl_4_bits_load_reg_ui,	
  output       io_pe_ctrl_4_bits_flow_lr,	
  output       io_pe_ctrl_4_bits_flow_ud,	
  output       io_pe_ctrl_4_bits_flow_du,	
  output       io_pe_ctrl_4_bits_update_reg,	
  output       io_pe_ctrl_4_bits_exp2,	
  output       io_pe_ctrl_5_valid,	
  output       io_pe_ctrl_5_bits_mac,	
  output       io_pe_ctrl_5_bits_acc_ui,	
  output       io_pe_ctrl_5_bits_load_reg_li,	
  output       io_pe_ctrl_5_bits_load_reg_ui,	
  output       io_pe_ctrl_5_bits_flow_lr,	
  output       io_pe_ctrl_5_bits_flow_ud,	
  output       io_pe_ctrl_5_bits_flow_du,	
  output       io_pe_ctrl_5_bits_update_reg,	
  output       io_pe_ctrl_5_bits_exp2,	
  output       io_pe_ctrl_6_valid,	
  output       io_pe_ctrl_6_bits_mac,	
  output       io_pe_ctrl_6_bits_acc_ui,	
  output       io_pe_ctrl_6_bits_load_reg_li,	
  output       io_pe_ctrl_6_bits_load_reg_ui,	
  output       io_pe_ctrl_6_bits_flow_lr,	
  output       io_pe_ctrl_6_bits_flow_ud,	
  output       io_pe_ctrl_6_bits_flow_du,	
  output       io_pe_ctrl_6_bits_update_reg,	
  output       io_pe_ctrl_6_bits_exp2,	
  output       io_pe_ctrl_7_valid,	
  output       io_pe_ctrl_7_bits_mac,	
  output       io_pe_ctrl_7_bits_acc_ui,	
  output       io_pe_ctrl_7_bits_load_reg_li,	
  output       io_pe_ctrl_7_bits_load_reg_ui,	
  output       io_pe_ctrl_7_bits_flow_lr,	
  output       io_pe_ctrl_7_bits_flow_ud,	
  output       io_pe_ctrl_7_bits_flow_du,	
  output       io_pe_ctrl_7_bits_update_reg,	
  output       io_pe_ctrl_7_bits_exp2,	
  output       io_pe_ctrl_8_valid,	
  output       io_pe_ctrl_8_bits_mac,	
  output       io_pe_ctrl_8_bits_acc_ui,	
  output       io_pe_ctrl_8_bits_load_reg_li,	
  output       io_pe_ctrl_8_bits_load_reg_ui,	
  output       io_pe_ctrl_8_bits_flow_lr,	
  output       io_pe_ctrl_8_bits_flow_ud,	
  output       io_pe_ctrl_8_bits_flow_du,	
  output       io_pe_ctrl_8_bits_update_reg,	
  output       io_pe_ctrl_8_bits_exp2,	
  output       io_pe_ctrl_9_valid,	
  output       io_pe_ctrl_9_bits_mac,	
  output       io_pe_ctrl_9_bits_acc_ui,	
  output       io_pe_ctrl_9_bits_load_reg_li,	
  output       io_pe_ctrl_9_bits_load_reg_ui,	
  output       io_pe_ctrl_9_bits_flow_lr,	
  output       io_pe_ctrl_9_bits_flow_ud,	
  output       io_pe_ctrl_9_bits_flow_du,	
  output       io_pe_ctrl_9_bits_update_reg,	
  output       io_pe_ctrl_9_bits_exp2,	
  output       io_pe_ctrl_10_valid,	
  output       io_pe_ctrl_10_bits_mac,	
  output       io_pe_ctrl_10_bits_acc_ui,	
  output       io_pe_ctrl_10_bits_load_reg_li,	
  output       io_pe_ctrl_10_bits_load_reg_ui,	
  output       io_pe_ctrl_10_bits_flow_lr,	
  output       io_pe_ctrl_10_bits_flow_ud,	
  output       io_pe_ctrl_10_bits_flow_du,	
  output       io_pe_ctrl_10_bits_update_reg,	
  output       io_pe_ctrl_10_bits_exp2,	
  output       io_pe_ctrl_11_valid,	
  output       io_pe_ctrl_11_bits_mac,	
  output       io_pe_ctrl_11_bits_acc_ui,	
  output       io_pe_ctrl_11_bits_load_reg_li,	
  output       io_pe_ctrl_11_bits_load_reg_ui,	
  output       io_pe_ctrl_11_bits_flow_lr,	
  output       io_pe_ctrl_11_bits_flow_ud,	
  output       io_pe_ctrl_11_bits_flow_du,	
  output       io_pe_ctrl_11_bits_update_reg,	
  output       io_pe_ctrl_11_bits_exp2,	
  output       io_pe_ctrl_12_valid,	
  output       io_pe_ctrl_12_bits_mac,	
  output       io_pe_ctrl_12_bits_acc_ui,	
  output       io_pe_ctrl_12_bits_load_reg_li,	
  output       io_pe_ctrl_12_bits_load_reg_ui,	
  output       io_pe_ctrl_12_bits_flow_lr,	
  output       io_pe_ctrl_12_bits_flow_ud,	
  output       io_pe_ctrl_12_bits_flow_du,	
  output       io_pe_ctrl_12_bits_update_reg,	
  output       io_pe_ctrl_12_bits_exp2,	
  output       io_pe_ctrl_13_valid,	
  output       io_pe_ctrl_13_bits_mac,	
  output       io_pe_ctrl_13_bits_acc_ui,	
  output       io_pe_ctrl_13_bits_load_reg_li,	
  output       io_pe_ctrl_13_bits_load_reg_ui,	
  output       io_pe_ctrl_13_bits_flow_lr,	
  output       io_pe_ctrl_13_bits_flow_ud,	
  output       io_pe_ctrl_13_bits_flow_du,	
  output       io_pe_ctrl_13_bits_update_reg,	
  output       io_pe_ctrl_13_bits_exp2,	
  output       io_pe_ctrl_14_valid,	
  output       io_pe_ctrl_14_bits_mac,	
  output       io_pe_ctrl_14_bits_acc_ui,	
  output       io_pe_ctrl_14_bits_load_reg_li,	
  output       io_pe_ctrl_14_bits_load_reg_ui,	
  output       io_pe_ctrl_14_bits_flow_lr,	
  output       io_pe_ctrl_14_bits_flow_ud,	
  output       io_pe_ctrl_14_bits_flow_du,	
  output       io_pe_ctrl_14_bits_update_reg,	
  output       io_pe_ctrl_14_bits_exp2,	
  output       io_pe_ctrl_15_valid,	
  output       io_pe_ctrl_15_bits_mac,	
  output       io_pe_ctrl_15_bits_acc_ui,	
  output       io_pe_ctrl_15_bits_load_reg_li,	
  output       io_pe_ctrl_15_bits_load_reg_ui,	
  output       io_pe_ctrl_15_bits_flow_lr,	
  output       io_pe_ctrl_15_bits_flow_ud,	
  output       io_pe_ctrl_15_bits_flow_du,	
  output       io_pe_ctrl_15_bits_update_reg,	
  output       io_pe_ctrl_15_bits_exp2,	
  output       io_acc_ctrl_valid,	
  output [2:0] io_acc_ctrl_bits_cmd,	
  output       io_sem_release_valid,	
  output [4:0] io_sem_release_bits_id,	
  output [2:0] io_sem_release_bits_value,	
  output       io_busy,	
  output       io_conflictFree	
);

  wire [7:0] _GEN;	
  wire       conflictFreeFlag_io_write_1_valid = ~(|_GEN) & io_in_valid;	
  reg  [4:0] header_semId;	
  reg        header_releaseValid;	
  reg  [2:0] header_releaseSemValue;	
  reg  [6:0] rs1_addr;	
  reg  [4:0] rs1_stride;	
  reg        rs1_revInput;	
  reg        rs1_revOutput;	
  reg        rs1_delayOutput;	
  reg  [4:0] rs2_addr;	
  reg  [4:0] rs2_stride;	
  reg        rs2_zero;	
  reg        computeFlags_0;	
  reg        computeFlags_1;	
  reg        computeFlags_2;	
  reg        computeFlags_4;	
  reg        accumFlags_1;	
  reg        accumFlags_2;	
  reg        accumFlags_3;	
  reg        accumFlags_4;	
  reg  [5:0] computeTimer;	
  reg  [4:0] accumTimer;	
  wire       _x0_T_46 = computeTimer < 6'h11;	
  wire       x0 = computeFlags_0 & (|computeTimer) & _x0_T_46;	
  wire       x0_1 = computeFlags_1 & (|computeTimer) & _x0_T_46;	
  reg        regs_0;	
  reg        regs_1;	
  reg        regs_2;	
  reg        regs_3;	
  reg        regs_4;	
  reg        regs_5;	
  reg        regs_6;	
  reg        regs_7;	
  reg        regs_8;	
  reg        regs_9;	
  reg        regs_10;	
  reg        regs_11;	
  reg        regs_12;	
  reg        regs_13;	
  reg        regs_14;	
  wire       _x0_T_22 = computeTimer < 6'h2D;	
  wire       x0_2 = computeFlags_1 & computeTimer > 6'h2B & _x0_T_22;	
  reg        regs_0_1;	
  reg        regs_1_1;	
  reg        regs_2_1;	
  reg        regs_3_1;	
  reg        regs_4_1;	
  reg        regs_5_1;	
  reg        regs_6_1;	
  reg        regs_7_1;	
  reg        regs_8_1;	
  reg        regs_9_1;	
  reg        regs_10_1;	
  reg        regs_11_1;	
  reg        regs_12_1;	
  reg        regs_13_1;	
  reg        regs_14_1;	
  wire       _io_cmp_ctrl_T_6 = computeTimer > 6'h21;	
  wire       _io_cmp_ctrl_T_7 = computeTimer < 6'h23;	
  wire       x0_3 = computeFlags_1 & _io_cmp_ctrl_T_6 & _io_cmp_ctrl_T_7;	
  reg        regs_0_2;	
  reg        regs_1_2;	
  reg        regs_2_2;	
  reg        regs_3_2;	
  reg        regs_4_2;	
  reg        regs_5_2;	
  reg        regs_6_2;	
  reg        regs_7_2;	
  reg        regs_8_2;	
  reg        regs_9_2;	
  reg        regs_10_2;	
  reg        regs_11_2;	
  reg        regs_12_2;	
  reg        regs_13_2;	
  reg        regs_14_2;	
  wire       _x0_T_36 = computeTimer > 6'h23;	
  wire       x0_4 = computeFlags_1 & _x0_T_36 & _x0_T_22;	
  reg        regs_0_3;	
  reg        regs_1_3;	
  reg        regs_2_3;	
  reg        regs_3_3;	
  reg        regs_4_3;	
  reg        regs_5_3;	
  reg        regs_6_3;	
  reg        regs_7_3;	
  reg        regs_8_3;	
  reg        regs_9_3;	
  reg        regs_10_3;	
  reg        regs_11_3;	
  reg        regs_12_3;	
  reg        regs_13_3;	
  reg        regs_14_3;	
  wire       _io_cmp_ctrl_T_3 = computeTimer > 6'h20;	
  wire       _io_cmp_ctrl_T_4 = computeTimer < 6'h22;	
  wire       x0_5 = computeFlags_1 & _io_cmp_ctrl_T_3 & _io_cmp_ctrl_T_4;	
  wire       x0_6 = computeFlags_1 & (|computeTimer) & _x0_T_46;	
  reg        regs_0_4;	
  reg        regs_1_4;	
  reg        regs_2_4;	
  reg        regs_3_4;	
  reg        regs_4_4;	
  reg        regs_5_4;	
  reg        regs_6_4;	
  reg        regs_7_4;	
  reg        regs_8_4;	
  reg        regs_9_4;	
  reg        regs_10_4;	
  reg        regs_11_4;	
  reg        regs_12_4;	
  reg        regs_13_4;	
  reg        regs_14_4;	
  wire       x0_7 = computeFlags_1 & _io_cmp_ctrl_T_6 & _x0_T_22;	
  reg        regs_0_5;	
  reg        regs_1_5;	
  reg        regs_2_5;	
  reg        regs_3_5;	
  reg        regs_4_5;	
  reg        regs_5_5;	
  reg        regs_6_5;	
  reg        regs_7_5;	
  reg        regs_8_5;	
  reg        regs_9_5;	
  reg        regs_10_5;	
  reg        regs_11_5;	
  reg        regs_12_5;	
  reg        regs_13_5;	
  reg        regs_14_5;	
  wire       _io_cmp_ctrl_T = computeTimer > 6'h10;	
  wire       _io_cmp_ctrl_T_1 = computeTimer < 6'h21;	
  wire       x0_8 = computeFlags_1 & _io_cmp_ctrl_T & _io_cmp_ctrl_T_1;	
  reg        regs_0_6;	
  reg        regs_1_6;	
  reg        regs_2_6;	
  reg        regs_3_6;	
  reg        regs_4_6;	
  reg        regs_5_6;	
  reg        regs_6_6;	
  reg        regs_7_6;	
  reg        regs_8_6;	
  reg        regs_9_6;	
  reg        regs_10_6;	
  reg        regs_11_6;	
  reg        regs_12_6;	
  reg        regs_13_6;	
  reg        regs_14_6;	
  wire       _conflictFree_T_4 = computeTimer < 6'h2C;	
  wire       x0_9 = computeFlags_1 & _io_cmp_ctrl_T_6 & _conflictFree_T_4;	
  reg        regs_0_7;	
  reg        regs_1_7;	
  reg        regs_2_7;	
  reg        regs_3_7;	
  reg        regs_4_7;	
  reg        regs_5_7;	
  reg        regs_6_7;	
  reg        regs_7_7;	
  reg        regs_8_7;	
  reg        regs_9_7;	
  reg        regs_10_7;	
  reg        regs_11_7;	
  reg        regs_12_7;	
  reg        regs_13_7;	
  reg        regs_14_7;	
  wire [1:0] _GEN_0 = {x0_8, x0_9};	
  wire [1:0] _GEN_1 = {regs_0_6, regs_0_7};	
  wire [1:0] _GEN_2 = {regs_1_6, regs_1_7};	
  wire [1:0] _GEN_3 = {regs_2_6, regs_2_7};	
  wire [1:0] _GEN_4 = {regs_3_6, regs_3_7};	
  wire [1:0] _GEN_5 = {regs_4_6, regs_4_7};	
  wire [1:0] _GEN_6 = {regs_5_6, regs_5_7};	
  wire [1:0] _GEN_7 = {regs_6_6, regs_6_7};	
  wire [1:0] _GEN_8 = {regs_7_6, regs_7_7};	
  wire [1:0] _GEN_9 = {regs_8_6, regs_8_7};	
  wire [1:0] _GEN_10 = {regs_9_6, regs_9_7};	
  wire [1:0] _GEN_11 = {regs_10_6, regs_10_7};	
  wire [1:0] _GEN_12 = {regs_11_6, regs_11_7};	
  wire [1:0] _GEN_13 = {regs_12_6, regs_12_7};	
  wire [1:0] _GEN_14 = {regs_13_6, regs_13_7};	
  wire [1:0] _GEN_15 = {regs_14_6, regs_14_7};	
  wire       _x0_T_34 = computeTimer < 6'h24;	
  wire       x0_10 = computeFlags_1 & computeTimer > 6'h13 & _x0_T_34;	
  reg        regs_0_8;	
  reg        regs_1_8;	
  reg        regs_2_8;	
  reg        regs_3_8;	
  reg        regs_4_8;	
  reg        regs_5_8;	
  reg        regs_6_8;	
  reg        regs_7_8;	
  reg        regs_8_8;	
  reg        regs_9_8;	
  reg        regs_10_8;	
  reg        regs_11_8;	
  reg        regs_12_8;	
  reg        regs_13_8;	
  reg        regs_14_8;	
  wire       x0_11 = computeFlags_1 & _io_cmp_ctrl_T_6 & _x0_T_34;	
  reg        regs_0_9;	
  reg        regs_1_9;	
  reg        regs_2_9;	
  reg        regs_3_9;	
  reg        regs_4_9;	
  reg        regs_5_9;	
  reg        regs_6_9;	
  reg        regs_7_9;	
  reg        regs_8_9;	
  reg        regs_9_9;	
  reg        regs_10_9;	
  reg        regs_11_9;	
  reg        regs_12_9;	
  reg        regs_13_9;	
  reg        regs_14_9;	
  wire       x0_12 = computeFlags_1 & _x0_T_36 & _conflictFree_T_4;	
  reg        regs_0_10;	
  reg        regs_1_10;	
  reg        regs_2_10;	
  reg        regs_3_10;	
  reg        regs_4_10;	
  reg        regs_5_10;	
  reg        regs_6_10;	
  reg        regs_7_10;	
  reg        regs_8_10;	
  reg        regs_9_10;	
  reg        regs_10_10;	
  reg        regs_11_10;	
  reg        regs_12_10;	
  reg        regs_13_10;	
  reg        regs_14_10;	
  wire       x0_13 = computeFlags_2 & (|computeTimer) & _x0_T_46;	
  reg        regs_0_11;	
  reg        regs_1_11;	
  reg        regs_2_11;	
  reg        regs_3_11;	
  reg        regs_4_11;	
  reg        regs_5_11;	
  reg        regs_6_11;	
  reg        regs_7_11;	
  reg        regs_8_11;	
  reg        regs_9_11;	
  reg        regs_10_11;	
  reg        regs_11_11;	
  reg        regs_12_11;	
  reg        regs_13_11;	
  reg        regs_14_11;	
  wire       x0_14 = computeFlags_2 & (|computeTimer) & _x0_T_46;	
  reg        regs_0_12;	
  reg        regs_1_12;	
  reg        regs_2_12;	
  reg        regs_3_12;	
  reg        regs_4_12;	
  reg        regs_5_12;	
  reg        regs_6_12;	
  reg        regs_7_12;	
  reg        regs_8_12;	
  reg        regs_9_12;	
  reg        regs_10_12;	
  reg        regs_11_12;	
  reg        regs_12_12;	
  reg        regs_13_12;	
  reg        regs_14_12;	
  wire       x0_15 = computeFlags_2 & (|computeTimer) & _x0_T_46;	
  reg        regs_0_13;	
  reg        regs_1_13;	
  reg        regs_2_13;	
  reg        regs_3_13;	
  reg        regs_4_13;	
  reg        regs_5_13;	
  reg        regs_6_13;	
  reg        regs_7_13;	
  reg        regs_8_13;	
  reg        regs_9_13;	
  reg        regs_10_13;	
  reg        regs_11_13;	
  reg        regs_12_13;	
  reg        regs_13_13;	
  reg        regs_14_13;	
  wire       io_pe_ctrl_0_bits_mac_0 = (|{regs_14, x0_2}) | x0_13;	
  wire       io_pe_ctrl_0_bits_acc_ui_0 = (|{x0_3, x0_4}) | x0_14;	
  wire       io_pe_ctrl_0_bits_flow_lr_0 = (|{regs_14_4, x0_7}) | x0_15;	
  wire       io_pe_ctrl_1_bits_mac_0 = (|{regs_13, regs_0_1}) | regs_0_11;	
  wire       io_pe_ctrl_1_bits_acc_ui_0 = (|{regs_0_2, regs_0_3}) | regs_0_12;	
  wire       io_pe_ctrl_1_bits_flow_lr_0 = (|{regs_13_4, regs_0_5}) | regs_0_13;	
  wire       io_pe_ctrl_2_bits_mac_0 = (|{regs_12, regs_1_1}) | regs_1_11;	
  wire       io_pe_ctrl_2_bits_acc_ui_0 = (|{regs_1_2, regs_1_3}) | regs_1_12;	
  wire       io_pe_ctrl_2_bits_flow_lr_0 = (|{regs_12_4, regs_1_5}) | regs_1_13;	
  wire       io_pe_ctrl_3_bits_mac_0 = (|{regs_11, regs_2_1}) | regs_2_11;	
  wire       io_pe_ctrl_3_bits_acc_ui_0 = (|{regs_2_2, regs_2_3}) | regs_2_12;	
  wire       io_pe_ctrl_3_bits_flow_lr_0 = (|{regs_11_4, regs_2_5}) | regs_2_13;	
  wire       io_pe_ctrl_4_bits_mac_0 = (|{regs_10, regs_3_1}) | regs_3_11;	
  wire       io_pe_ctrl_4_bits_acc_ui_0 = (|{regs_3_2, regs_3_3}) | regs_3_12;	
  wire       io_pe_ctrl_4_bits_flow_lr_0 = (|{regs_10_4, regs_3_5}) | regs_3_13;	
  wire       io_pe_ctrl_5_bits_mac_0 = (|{regs_9, regs_4_1}) | regs_4_11;	
  wire       io_pe_ctrl_5_bits_acc_ui_0 = (|{regs_4_2, regs_4_3}) | regs_4_12;	
  wire       io_pe_ctrl_5_bits_flow_lr_0 = (|{regs_9_4, regs_4_5}) | regs_4_13;	
  wire       io_pe_ctrl_6_bits_mac_0 = (|{regs_8, regs_5_1}) | regs_5_11;	
  wire       io_pe_ctrl_6_bits_acc_ui_0 = (|{regs_5_2, regs_5_3}) | regs_5_12;	
  wire       io_pe_ctrl_6_bits_flow_lr_0 = (|{regs_8_4, regs_5_5}) | regs_5_13;	
  wire       io_pe_ctrl_7_bits_mac_0 = (|{regs_7, regs_6_1}) | regs_6_11;	
  wire       io_pe_ctrl_7_bits_acc_ui_0 = (|{regs_6_2, regs_6_3}) | regs_6_12;	
  wire       io_pe_ctrl_7_bits_flow_lr_0 = (|{regs_7_4, regs_6_5}) | regs_6_13;	
  wire       io_pe_ctrl_8_bits_mac_0 = (|{regs_6, regs_7_1}) | regs_7_11;	
  wire       io_pe_ctrl_8_bits_acc_ui_0 = (|{regs_7_2, regs_7_3}) | regs_7_12;	
  wire       io_pe_ctrl_8_bits_flow_lr_0 = (|{regs_6_4, regs_7_5}) | regs_7_13;	
  wire       io_pe_ctrl_9_bits_mac_0 = (|{regs_5, regs_8_1}) | regs_8_11;	
  wire       io_pe_ctrl_9_bits_acc_ui_0 = (|{regs_8_2, regs_8_3}) | regs_8_12;	
  wire       io_pe_ctrl_9_bits_flow_lr_0 = (|{regs_5_4, regs_8_5}) | regs_8_13;	
  wire       io_pe_ctrl_10_bits_mac_0 = (|{regs_4, regs_9_1}) | regs_9_11;	
  wire       io_pe_ctrl_10_bits_acc_ui_0 = (|{regs_9_2, regs_9_3}) | regs_9_12;	
  wire       io_pe_ctrl_10_bits_flow_lr_0 = (|{regs_4_4, regs_9_5}) | regs_9_13;	
  wire       io_pe_ctrl_11_bits_mac_0 = (|{regs_3, regs_10_1}) | regs_10_11;	
  wire       io_pe_ctrl_11_bits_acc_ui_0 = (|{regs_10_2, regs_10_3}) | regs_10_12;	
  wire       io_pe_ctrl_11_bits_flow_lr_0 = (|{regs_3_4, regs_10_5}) | regs_10_13;	
  wire       io_pe_ctrl_12_bits_mac_0 = (|{regs_2, regs_11_1}) | regs_11_11;	
  wire       io_pe_ctrl_12_bits_acc_ui_0 = (|{regs_11_2, regs_11_3}) | regs_11_12;	
  wire       io_pe_ctrl_12_bits_flow_lr_0 = (|{regs_2_4, regs_11_5}) | regs_11_13;	
  wire       io_pe_ctrl_13_bits_mac_0 = (|{regs_1, regs_12_1}) | regs_12_11;	
  wire       io_pe_ctrl_13_bits_acc_ui_0 = (|{regs_12_2, regs_12_3}) | regs_12_12;	
  wire       io_pe_ctrl_13_bits_flow_lr_0 = (|{regs_1_4, regs_12_5}) | regs_12_13;	
  wire       io_pe_ctrl_14_bits_mac_0 = (|{regs_0, regs_13_1}) | regs_13_11;	
  wire       io_pe_ctrl_14_bits_acc_ui_0 = (|{regs_13_2, regs_13_3}) | regs_13_12;	
  wire       io_pe_ctrl_14_bits_flow_lr_0 = (|{regs_0_4, regs_13_5}) | regs_13_13;	
  wire       io_pe_ctrl_15_bits_mac_0 = (|{x0_1, regs_14_1}) | regs_14_11;	
  wire       io_pe_ctrl_15_bits_acc_ui_0 = (|{regs_14_2, regs_14_3}) | regs_14_12;	
  wire       io_pe_ctrl_15_bits_flow_lr_0 = (|{x0_6, regs_14_5}) | regs_14_13;	
  wire       _conflictFree_T_1 = computeTimer < 6'h10;	
  wire       io_sp_read_valid_0 = computeFlags_0 & _conflictFree_T_1;	
  wire       io_sp_read_valid_1 = computeFlags_1 & _conflictFree_T_1;	
  wire       io_sp_read_valid_2 = computeFlags_1 & _io_cmp_ctrl_T_3 & _io_cmp_ctrl_T_4;	
  wire       io_sp_read_valid_3 = computeFlags_1 & _io_cmp_ctrl_T_6 & _io_cmp_ctrl_T_7;	
  wire       _io_cmp_ctrl_T_9 = computeTimer > 6'h22;	
  wire       _io_cmp_ctrl_T_10 = computeTimer < 6'h2B;	
  wire       io_sp_read_valid_4 = computeFlags_1 & _io_cmp_ctrl_T_9 & _io_cmp_ctrl_T_10;	
  wire       _conflictFree_T_3 = computeTimer > 6'h2A;	
  wire       io_sp_read_valid_5 = computeFlags_1 & _conflictFree_T_3 & _conflictFree_T_4;	
  wire       io_sp_read_valid_6 = computeFlags_2 & _conflictFree_T_1;	
  wire [6:0] _io_sp_read_out_valid_T = {io_sp_read_valid_0, io_sp_read_valid_1, io_sp_read_valid_2, io_sp_read_valid_3, io_sp_read_valid_4, io_sp_read_valid_5, io_sp_read_valid_6};	
  wire       io_acc_read_valid_0 = accumFlags_1 & accumTimer > 5'hD & accumTimer < 5'hF;	
  wire       io_acc_read_valid_1 = accumFlags_2 & ~(accumTimer[4]);	
  wire       io_acc_read_valid_2 = accumFlags_3 & accumTimer == 5'h0;	
  wire       io_acc_read_valid_3 = accumFlags_4 & ~(accumTimer[4]);	
  wire [3:0] _io_acc_read_out_valid_T = {io_acc_read_valid_0, io_acc_read_valid_1, io_acc_read_valid_2, io_acc_read_valid_3};	
  wire       io_cmp_ctrl_valid_1 = computeFlags_1 & _io_cmp_ctrl_T_3 & _io_cmp_ctrl_T_4;	
  wire       io_cmp_ctrl_valid_2 = computeFlags_1 & _io_cmp_ctrl_T_6 & _io_cmp_ctrl_T_7;	
  wire       io_cmp_ctrl_valid_3 = computeFlags_1 & _io_cmp_ctrl_T_9 & _io_cmp_ctrl_T_10;	
  wire       io_cmp_ctrl_valid_4 = computeFlags_1 & _conflictFree_T_3 & _conflictFree_T_4;	
  wire       io_cmp_ctrl_valid_5 = computeFlags_4 & computeTimer == 6'h0;	
  wire       io_acc_ctrl_valid_1 = accumFlags_1 & accumTimer > 5'h6 & accumTimer < 5'h8;	
  wire       io_acc_ctrl_valid_2 = accumFlags_1 & accumTimer > 5'hE & ~(accumTimer[4]);	
  wire       _conflictFree_T_13 = accumTimer < 5'h11;	
  wire       io_acc_ctrl_valid_3 = accumFlags_2 & (|accumTimer) & _conflictFree_T_13;	
  wire       io_acc_ctrl_valid_4 = accumFlags_3 & (|accumTimer) & accumTimer < 5'h2;	
  wire       _conflictFree_T_10 = accumTimer < 5'h15;	
  wire       io_acc_ctrl_valid_5 = accumFlags_3 & (|(accumTimer[4:1])) & _conflictFree_T_10;	
  wire       io_acc_ctrl_valid_6 = accumFlags_4 & (|accumTimer) & _conflictFree_T_13;	
  wire       _conflictFree_T = computeTimer > 6'hE;	
  wire       _conflictFree_T_9 = accumTimer > 5'h13;	
  assign _GEN = {computeFlags_0, computeFlags_1, computeFlags_2, computeFlags_4, accumFlags_1, accumFlags_2, accumFlags_3, accumFlags_4};	
  reg        REG;	
  reg        REG_1;	
  reg        REG_2;	
  reg        REG_3;	
  `ifndef SYNTHESIS	
    always @(posedge clock) begin	
      if (~reset & ~REG_1) begin	
        if (`ASSERT_VERBOSE_COND_)	
          $error("Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n");	
        if (`STOP_COND_)	
          $fatal;	
      end
      if (~reset & ~REG_3) begin	
        if (`ASSERT_VERBOSE_COND_)	
          $error("Assertion failed\n    at DelayedAssert.scala:9 assert((0 until delay).foldLeft(cond){(c, _) => RegNext(c, init = true.B)})\n");	
        if (`STOP_COND_)	
          $fatal;	
      end
    end // always @(posedge)
  `endif // not def SYNTHESIS
  wire       computeDone_0 = computeFlags_0 & computeTimer == 6'h10;	
  wire       _aStart_T = computeTimer == 6'h3B;	
  wire       computeDone_1 = computeFlags_1 & _aStart_T;	
  wire       accumDone_1 = accumFlags_1 & accumTimer == 5'hF;	
  wire       computeDone_2 = computeFlags_2 & computeTimer == 6'h1F;	
  wire       _aDone_T_3 = accumTimer == 5'h10;	
  wire       accumDone_2 = accumFlags_2 & _aDone_T_3;	
  wire       accumDone_3 = accumFlags_3 & accumTimer == 5'h14;	
  wire       computeDone_4 = computeFlags_4 & computeTimer == 6'h0;	
  wire       accumDone_4 = accumFlags_4 & _aDone_T_3;	
  wire       set_cf_sel_4 = io_in_bits_header_func == 5'h4;	
  always @(posedge clock) begin	
    if (conflictFreeFlag_io_write_1_valid) begin	
      header_semId <= io_in_bits_header_semId;	
      header_releaseValid <= io_in_bits_header_releaseValid;	
      header_releaseSemValue <= io_in_bits_header_releaseSemValue;	
      rs1_stride <= io_in_bits_spad_stride;	
      rs1_revInput <= io_in_bits_spad_revInput;	
      rs1_revOutput <= io_in_bits_spad_revOutput;	
      rs1_delayOutput <= io_in_bits_spad_delayOutput;	
      rs2_stride <= io_in_bits_acc_stride;	
      rs2_zero <= io_in_bits_acc_zero;	
    end
    if (|_io_sp_read_out_valid_T)	
      rs1_addr <= rs1_addr + {{2{rs1_stride[4]}}, rs1_stride};	
    else if (conflictFreeFlag_io_write_1_valid)	
      rs1_addr <= io_in_bits_spad_addr;	
    if (|_io_acc_read_out_valid_T)	
      rs2_addr <= rs2_addr + rs2_stride;	
    else if (conflictFreeFlag_io_write_1_valid)	
      rs2_addr <= io_in_bits_acc_addr;	
    if (reset) begin	
      computeFlags_0 <= 1'h0;	
      computeFlags_1 <= 1'h0;	
      computeFlags_2 <= 1'h0;	
      computeFlags_4 <= 1'h0;	
      accumFlags_1 <= 1'h0;	
      accumFlags_2 <= 1'h0;	
      accumFlags_3 <= 1'h0;	
      accumFlags_4 <= 1'h0;	
      computeTimer <= 6'h0;	
      accumTimer <= 5'h0;	
      regs_0 <= 1'h0;	
      regs_1 <= 1'h0;	
      regs_2 <= 1'h0;	
      regs_3 <= 1'h0;	
      regs_4 <= 1'h0;	
      regs_5 <= 1'h0;	
      regs_6 <= 1'h0;	
      regs_7 <= 1'h0;	
      regs_8 <= 1'h0;	
      regs_9 <= 1'h0;	
      regs_10 <= 1'h0;	
      regs_11 <= 1'h0;	
      regs_12 <= 1'h0;	
      regs_13 <= 1'h0;	
      regs_14 <= 1'h0;	
      regs_0_1 <= 1'h0;	
      regs_1_1 <= 1'h0;	
      regs_2_1 <= 1'h0;	
      regs_3_1 <= 1'h0;	
      regs_4_1 <= 1'h0;	
      regs_5_1 <= 1'h0;	
      regs_6_1 <= 1'h0;	
      regs_7_1 <= 1'h0;	
      regs_8_1 <= 1'h0;	
      regs_9_1 <= 1'h0;	
      regs_10_1 <= 1'h0;	
      regs_11_1 <= 1'h0;	
      regs_12_1 <= 1'h0;	
      regs_13_1 <= 1'h0;	
      regs_14_1 <= 1'h0;	
      regs_0_2 <= 1'h0;	
      regs_1_2 <= 1'h0;	
      regs_2_2 <= 1'h0;	
      regs_3_2 <= 1'h0;	
      regs_4_2 <= 1'h0;	
      regs_5_2 <= 1'h0;	
      regs_6_2 <= 1'h0;	
      regs_7_2 <= 1'h0;	
      regs_8_2 <= 1'h0;	
      regs_9_2 <= 1'h0;	
      regs_10_2 <= 1'h0;	
      regs_11_2 <= 1'h0;	
      regs_12_2 <= 1'h0;	
      regs_13_2 <= 1'h0;	
      regs_14_2 <= 1'h0;	
      regs_0_3 <= 1'h0;	
      regs_1_3 <= 1'h0;	
      regs_2_3 <= 1'h0;	
      regs_3_3 <= 1'h0;	
      regs_4_3 <= 1'h0;	
      regs_5_3 <= 1'h0;	
      regs_6_3 <= 1'h0;	
      regs_7_3 <= 1'h0;	
      regs_8_3 <= 1'h0;	
      regs_9_3 <= 1'h0;	
      regs_10_3 <= 1'h0;	
      regs_11_3 <= 1'h0;	
      regs_12_3 <= 1'h0;	
      regs_13_3 <= 1'h0;	
      regs_14_3 <= 1'h0;	
      regs_0_4 <= 1'h0;	
      regs_1_4 <= 1'h0;	
      regs_2_4 <= 1'h0;	
      regs_3_4 <= 1'h0;	
      regs_4_4 <= 1'h0;	
      regs_5_4 <= 1'h0;	
      regs_6_4 <= 1'h0;	
      regs_7_4 <= 1'h0;	
      regs_8_4 <= 1'h0;	
      regs_9_4 <= 1'h0;	
      regs_10_4 <= 1'h0;	
      regs_11_4 <= 1'h0;	
      regs_12_4 <= 1'h0;	
      regs_13_4 <= 1'h0;	
      regs_14_4 <= 1'h0;	
      regs_0_5 <= 1'h0;	
      regs_1_5 <= 1'h0;	
      regs_2_5 <= 1'h0;	
      regs_3_5 <= 1'h0;	
      regs_4_5 <= 1'h0;	
      regs_5_5 <= 1'h0;	
      regs_6_5 <= 1'h0;	
      regs_7_5 <= 1'h0;	
      regs_8_5 <= 1'h0;	
      regs_9_5 <= 1'h0;	
      regs_10_5 <= 1'h0;	
      regs_11_5 <= 1'h0;	
      regs_12_5 <= 1'h0;	
      regs_13_5 <= 1'h0;	
      regs_14_5 <= 1'h0;	
      regs_0_6 <= 1'h0;	
      regs_1_6 <= 1'h0;	
      regs_2_6 <= 1'h0;	
      regs_3_6 <= 1'h0;	
      regs_4_6 <= 1'h0;	
      regs_5_6 <= 1'h0;	
      regs_6_6 <= 1'h0;	
      regs_7_6 <= 1'h0;	
      regs_8_6 <= 1'h0;	
      regs_9_6 <= 1'h0;	
      regs_10_6 <= 1'h0;	
      regs_11_6 <= 1'h0;	
      regs_12_6 <= 1'h0;	
      regs_13_6 <= 1'h0;	
      regs_14_6 <= 1'h0;	
      regs_0_7 <= 1'h0;	
      regs_1_7 <= 1'h0;	
      regs_2_7 <= 1'h0;	
      regs_3_7 <= 1'h0;	
      regs_4_7 <= 1'h0;	
      regs_5_7 <= 1'h0;	
      regs_6_7 <= 1'h0;	
      regs_7_7 <= 1'h0;	
      regs_8_7 <= 1'h0;	
      regs_9_7 <= 1'h0;	
      regs_10_7 <= 1'h0;	
      regs_11_7 <= 1'h0;	
      regs_12_7 <= 1'h0;	
      regs_13_7 <= 1'h0;	
      regs_14_7 <= 1'h0;	
      regs_0_8 <= 1'h0;	
      regs_1_8 <= 1'h0;	
      regs_2_8 <= 1'h0;	
      regs_3_8 <= 1'h0;	
      regs_4_8 <= 1'h0;	
      regs_5_8 <= 1'h0;	
      regs_6_8 <= 1'h0;	
      regs_7_8 <= 1'h0;	
      regs_8_8 <= 1'h0;	
      regs_9_8 <= 1'h0;	
      regs_10_8 <= 1'h0;	
      regs_11_8 <= 1'h0;	
      regs_12_8 <= 1'h0;	
      regs_13_8 <= 1'h0;	
      regs_14_8 <= 1'h0;	
      regs_0_9 <= 1'h0;	
      regs_1_9 <= 1'h0;	
      regs_2_9 <= 1'h0;	
      regs_3_9 <= 1'h0;	
      regs_4_9 <= 1'h0;	
      regs_5_9 <= 1'h0;	
      regs_6_9 <= 1'h0;	
      regs_7_9 <= 1'h0;	
      regs_8_9 <= 1'h0;	
      regs_9_9 <= 1'h0;	
      regs_10_9 <= 1'h0;	
      regs_11_9 <= 1'h0;	
      regs_12_9 <= 1'h0;	
      regs_13_9 <= 1'h0;	
      regs_14_9 <= 1'h0;	
      regs_0_10 <= 1'h0;	
      regs_1_10 <= 1'h0;	
      regs_2_10 <= 1'h0;	
      regs_3_10 <= 1'h0;	
      regs_4_10 <= 1'h0;	
      regs_5_10 <= 1'h0;	
      regs_6_10 <= 1'h0;	
      regs_7_10 <= 1'h0;	
      regs_8_10 <= 1'h0;	
      regs_9_10 <= 1'h0;	
      regs_10_10 <= 1'h0;	
      regs_11_10 <= 1'h0;	
      regs_12_10 <= 1'h0;	
      regs_13_10 <= 1'h0;	
      regs_14_10 <= 1'h0;	
      regs_0_11 <= 1'h0;	
      regs_1_11 <= 1'h0;	
      regs_2_11 <= 1'h0;	
      regs_3_11 <= 1'h0;	
      regs_4_11 <= 1'h0;	
      regs_5_11 <= 1'h0;	
      regs_6_11 <= 1'h0;	
      regs_7_11 <= 1'h0;	
      regs_8_11 <= 1'h0;	
      regs_9_11 <= 1'h0;	
      regs_10_11 <= 1'h0;	
      regs_11_11 <= 1'h0;	
      regs_12_11 <= 1'h0;	
      regs_13_11 <= 1'h0;	
      regs_14_11 <= 1'h0;	
      regs_0_12 <= 1'h0;	
      regs_1_12 <= 1'h0;	
      regs_2_12 <= 1'h0;	
      regs_3_12 <= 1'h0;	
      regs_4_12 <= 1'h0;	
      regs_5_12 <= 1'h0;	
      regs_6_12 <= 1'h0;	
      regs_7_12 <= 1'h0;	
      regs_8_12 <= 1'h0;	
      regs_9_12 <= 1'h0;	
      regs_10_12 <= 1'h0;	
      regs_11_12 <= 1'h0;	
      regs_12_12 <= 1'h0;	
      regs_13_12 <= 1'h0;	
      regs_14_12 <= 1'h0;	
      regs_0_13 <= 1'h0;	
      regs_1_13 <= 1'h0;	
      regs_2_13 <= 1'h0;	
      regs_3_13 <= 1'h0;	
      regs_4_13 <= 1'h0;	
      regs_5_13 <= 1'h0;	
      regs_6_13 <= 1'h0;	
      regs_7_13 <= 1'h0;	
      regs_8_13 <= 1'h0;	
      regs_9_13 <= 1'h0;	
      regs_10_13 <= 1'h0;	
      regs_11_13 <= 1'h0;	
      regs_12_13 <= 1'h0;	
      regs_13_13 <= 1'h0;	
      regs_14_13 <= 1'h0;	
      REG <= 1'h1;	
      REG_1 <= 1'h1;	
      REG_2 <= 1'h1;	
      REG_3 <= 1'h1;	
    end
    else begin	
      computeFlags_0 <= conflictFreeFlag_io_write_1_valid ? io_in_bits_header_func == 5'h0 : ~computeDone_0 & computeFlags_0;	
      computeFlags_1 <= conflictFreeFlag_io_write_1_valid ? io_in_bits_header_func == 5'h1 : ~computeDone_1 & computeFlags_1;	
      computeFlags_2 <= conflictFreeFlag_io_write_1_valid ? io_in_bits_header_func == 5'h2 : ~computeDone_2 & computeFlags_2;	
      computeFlags_4 <= conflictFreeFlag_io_write_1_valid ? set_cf_sel_4 : ~computeDone_4 & computeFlags_4;	
      accumFlags_1 <= ~accumDone_1 & (computeFlags_1 & _aStart_T | accumFlags_1);	
      accumFlags_2 <= ~accumDone_2 & (computeFlags_2 & computeTimer == 6'h1E | accumFlags_2);	
      accumFlags_3 <= conflictFreeFlag_io_write_1_valid ? io_in_bits_header_func == 5'h3 : ~accumDone_3 & accumFlags_3;	
      accumFlags_4 <= conflictFreeFlag_io_write_1_valid ? set_cf_sel_4 : ~accumDone_4 & accumFlags_4;	
      if (|{computeDone_0, computeDone_1, computeDone_2, computeDone_4})	
        computeTimer <= 6'h0;	
      else if (|{computeFlags_0, computeFlags_1, computeFlags_2, computeFlags_4})	
        computeTimer <= computeTimer + 6'h1;	
      if (|{accumDone_1, accumDone_2, accumDone_3, accumDone_4})	
        accumTimer <= 5'h0;	
      else if (|{accumFlags_1, accumFlags_2, accumFlags_3, accumFlags_4})	
        accumTimer <= accumTimer + 5'h1;	
      regs_0 <= x0_1;	
      regs_1 <= regs_0;	
      regs_2 <= regs_1;	
      regs_3 <= regs_2;	
      regs_4 <= regs_3;	
      regs_5 <= regs_4;	
      regs_6 <= regs_5;	
      regs_7 <= regs_6;	
      regs_8 <= regs_7;	
      regs_9 <= regs_8;	
      regs_10 <= regs_9;	
      regs_11 <= regs_10;	
      regs_12 <= regs_11;	
      regs_13 <= regs_12;	
      regs_14 <= regs_13;	
      regs_0_1 <= x0_2;	
      regs_1_1 <= regs_0_1;	
      regs_2_1 <= regs_1_1;	
      regs_3_1 <= regs_2_1;	
      regs_4_1 <= regs_3_1;	
      regs_5_1 <= regs_4_1;	
      regs_6_1 <= regs_5_1;	
      regs_7_1 <= regs_6_1;	
      regs_8_1 <= regs_7_1;	
      regs_9_1 <= regs_8_1;	
      regs_10_1 <= regs_9_1;	
      regs_11_1 <= regs_10_1;	
      regs_12_1 <= regs_11_1;	
      regs_13_1 <= regs_12_1;	
      regs_14_1 <= regs_13_1;	
      regs_0_2 <= x0_3;	
      regs_1_2 <= regs_0_2;	
      regs_2_2 <= regs_1_2;	
      regs_3_2 <= regs_2_2;	
      regs_4_2 <= regs_3_2;	
      regs_5_2 <= regs_4_2;	
      regs_6_2 <= regs_5_2;	
      regs_7_2 <= regs_6_2;	
      regs_8_2 <= regs_7_2;	
      regs_9_2 <= regs_8_2;	
      regs_10_2 <= regs_9_2;	
      regs_11_2 <= regs_10_2;	
      regs_12_2 <= regs_11_2;	
      regs_13_2 <= regs_12_2;	
      regs_14_2 <= regs_13_2;	
      regs_0_3 <= x0_4;	
      regs_1_3 <= regs_0_3;	
      regs_2_3 <= regs_1_3;	
      regs_3_3 <= regs_2_3;	
      regs_4_3 <= regs_3_3;	
      regs_5_3 <= regs_4_3;	
      regs_6_3 <= regs_5_3;	
      regs_7_3 <= regs_6_3;	
      regs_8_3 <= regs_7_3;	
      regs_9_3 <= regs_8_3;	
      regs_10_3 <= regs_9_3;	
      regs_11_3 <= regs_10_3;	
      regs_12_3 <= regs_11_3;	
      regs_13_3 <= regs_12_3;	
      regs_14_3 <= regs_13_3;	
      regs_0_4 <= x0_6;	
      regs_1_4 <= regs_0_4;	
      regs_2_4 <= regs_1_4;	
      regs_3_4 <= regs_2_4;	
      regs_4_4 <= regs_3_4;	
      regs_5_4 <= regs_4_4;	
      regs_6_4 <= regs_5_4;	
      regs_7_4 <= regs_6_4;	
      regs_8_4 <= regs_7_4;	
      regs_9_4 <= regs_8_4;	
      regs_10_4 <= regs_9_4;	
      regs_11_4 <= regs_10_4;	
      regs_12_4 <= regs_11_4;	
      regs_13_4 <= regs_12_4;	
      regs_14_4 <= regs_13_4;	
      regs_0_5 <= x0_7;	
      regs_1_5 <= regs_0_5;	
      regs_2_5 <= regs_1_5;	
      regs_3_5 <= regs_2_5;	
      regs_4_5 <= regs_3_5;	
      regs_5_5 <= regs_4_5;	
      regs_6_5 <= regs_5_5;	
      regs_7_5 <= regs_6_5;	
      regs_8_5 <= regs_7_5;	
      regs_9_5 <= regs_8_5;	
      regs_10_5 <= regs_9_5;	
      regs_11_5 <= regs_10_5;	
      regs_12_5 <= regs_11_5;	
      regs_13_5 <= regs_12_5;	
      regs_14_5 <= regs_13_5;	
      regs_0_6 <= x0_8;	
      regs_1_6 <= regs_0_6;	
      regs_2_6 <= regs_1_6;	
      regs_3_6 <= regs_2_6;	
      regs_4_6 <= regs_3_6;	
      regs_5_6 <= regs_4_6;	
      regs_6_6 <= regs_5_6;	
      regs_7_6 <= regs_6_6;	
      regs_8_6 <= regs_7_6;	
      regs_9_6 <= regs_8_6;	
      regs_10_6 <= regs_9_6;	
      regs_11_6 <= regs_10_6;	
      regs_12_6 <= regs_11_6;	
      regs_13_6 <= regs_12_6;	
      regs_14_6 <= regs_13_6;	
      regs_0_7 <= x0_9;	
      regs_1_7 <= regs_0_7;	
      regs_2_7 <= regs_1_7;	
      regs_3_7 <= regs_2_7;	
      regs_4_7 <= regs_3_7;	
      regs_5_7 <= regs_4_7;	
      regs_6_7 <= regs_5_7;	
      regs_7_7 <= regs_6_7;	
      regs_8_7 <= regs_7_7;	
      regs_9_7 <= regs_8_7;	
      regs_10_7 <= regs_9_7;	
      regs_11_7 <= regs_10_7;	
      regs_12_7 <= regs_11_7;	
      regs_13_7 <= regs_12_7;	
      regs_14_7 <= regs_13_7;	
      regs_0_8 <= x0_10;	
      regs_1_8 <= regs_0_8;	
      regs_2_8 <= regs_1_8;	
      regs_3_8 <= regs_2_8;	
      regs_4_8 <= regs_3_8;	
      regs_5_8 <= regs_4_8;	
      regs_6_8 <= regs_5_8;	
      regs_7_8 <= regs_6_8;	
      regs_8_8 <= regs_7_8;	
      regs_9_8 <= regs_8_8;	
      regs_10_8 <= regs_9_8;	
      regs_11_8 <= regs_10_8;	
      regs_12_8 <= regs_11_8;	
      regs_13_8 <= regs_12_8;	
      regs_14_8 <= regs_13_8;	
      regs_0_9 <= x0_11;	
      regs_1_9 <= regs_0_9;	
      regs_2_9 <= regs_1_9;	
      regs_3_9 <= regs_2_9;	
      regs_4_9 <= regs_3_9;	
      regs_5_9 <= regs_4_9;	
      regs_6_9 <= regs_5_9;	
      regs_7_9 <= regs_6_9;	
      regs_8_9 <= regs_7_9;	
      regs_9_9 <= regs_8_9;	
      regs_10_9 <= regs_9_9;	
      regs_11_9 <= regs_10_9;	
      regs_12_9 <= regs_11_9;	
      regs_13_9 <= regs_12_9;	
      regs_14_9 <= regs_13_9;	
      regs_0_10 <= x0_12;	
      regs_1_10 <= regs_0_10;	
      regs_2_10 <= regs_1_10;	
      regs_3_10 <= regs_2_10;	
      regs_4_10 <= regs_3_10;	
      regs_5_10 <= regs_4_10;	
      regs_6_10 <= regs_5_10;	
      regs_7_10 <= regs_6_10;	
      regs_8_10 <= regs_7_10;	
      regs_9_10 <= regs_8_10;	
      regs_10_10 <= regs_9_10;	
      regs_11_10 <= regs_10_10;	
      regs_12_10 <= regs_11_10;	
      regs_13_10 <= regs_12_10;	
      regs_14_10 <= regs_13_10;	
      regs_0_11 <= x0_13;	
      regs_1_11 <= regs_0_11;	
      regs_2_11 <= regs_1_11;	
      regs_3_11 <= regs_2_11;	
      regs_4_11 <= regs_3_11;	
      regs_5_11 <= regs_4_11;	
      regs_6_11 <= regs_5_11;	
      regs_7_11 <= regs_6_11;	
      regs_8_11 <= regs_7_11;	
      regs_9_11 <= regs_8_11;	
      regs_10_11 <= regs_9_11;	
      regs_11_11 <= regs_10_11;	
      regs_12_11 <= regs_11_11;	
      regs_13_11 <= regs_12_11;	
      regs_14_11 <= regs_13_11;	
      regs_0_12 <= x0_14;	
      regs_1_12 <= regs_0_12;	
      regs_2_12 <= regs_1_12;	
      regs_3_12 <= regs_2_12;	
      regs_4_12 <= regs_3_12;	
      regs_5_12 <= regs_4_12;	
      regs_6_12 <= regs_5_12;	
      regs_7_12 <= regs_6_12;	
      regs_8_12 <= regs_7_12;	
      regs_9_12 <= regs_8_12;	
      regs_10_12 <= regs_9_12;	
      regs_11_12 <= regs_10_12;	
      regs_12_12 <= regs_11_12;	
      regs_13_12 <= regs_12_12;	
      regs_14_12 <= regs_13_12;	
      regs_0_13 <= x0_15;	
      regs_1_13 <= regs_0_13;	
      regs_2_13 <= regs_1_13;	
      regs_3_13 <= regs_2_13;	
      regs_4_13 <= regs_3_13;	
      regs_5_13 <= regs_4_13;	
      regs_6_13 <= regs_5_13;	
      regs_7_13 <= regs_6_13;	
      regs_8_13 <= regs_7_13;	
      regs_9_13 <= regs_8_13;	
      regs_10_13 <= regs_9_13;	
      regs_11_13 <= regs_10_13;	
      regs_12_13 <= regs_11_13;	
      regs_13_13 <= regs_12_13;	
      regs_14_13 <= regs_13_13;	
      REG <= {1'h0, {1'h0, computeFlags_0} + {1'h0, computeFlags_1}} + {1'h0, {1'h0, computeFlags_4} + {1'h0, computeFlags_2}} < 3'h2;	
      REG_1 <= REG;	
      REG_2 <= {2'h0, accumFlags_1} + {1'h0, {1'h0, accumFlags_2} + {1'h0, accumFlags_3} + {1'h0, accumFlags_4}} < 3'h2;	
      REG_3 <= REG_2;	
    end
  end // always @(posedge)
  
  Ehr conflictFreeFlag (	
    .clock            (clock),
    .reset            (reset),
    .io_read_1        (io_conflictFree),
    .io_write_0_valid (|{computeFlags_0 & _conflictFree_T & _conflictFree_T_1, computeFlags_1 & _conflictFree_T_3 & _conflictFree_T_4, computeFlags_2 & computeTimer > 6'h1D & computeTimer < 6'h1F, accumFlags_3 & _conflictFree_T_9 & _conflictFree_T_10, accumFlags_4 & accumTimer[4] & _conflictFree_T_13}),	
    .io_write_1_valid (conflictFreeFlag_io_write_1_valid)	
  );	
  assign io_in_ready = ~(|_GEN);	
  assign io_sp_read_valid = |_io_sp_read_out_valid_T;	
  assign io_sp_read_bits_is_constant = io_sp_read_valid_2 | io_sp_read_valid_3 | io_sp_read_valid_4 | io_sp_read_valid_5;	
  assign io_sp_read_bits_addr = (io_sp_read_valid_0 | io_sp_read_valid_1 ? rs1_addr : 7'h0) | (io_sp_read_valid_6 ? rs1_addr : 7'h0) | {5'h0, io_sp_read_valid_4, io_sp_read_valid_3};	
  assign io_sp_read_bits_rev_sram_out = io_sp_read_valid_0 & rs1_revInput | io_sp_read_valid_1 & rs1_revInput | io_sp_read_valid_6 & rs1_revInput;	
  assign io_sp_read_bits_delay_sram_out = io_sp_read_valid_0 & rs1_delayOutput | io_sp_read_valid_1 & rs1_delayOutput | io_sp_read_valid_2 | io_sp_read_valid_3 | io_sp_read_valid_4 | io_sp_read_valid_5 | io_sp_read_valid_6 & rs1_delayOutput;	
  assign io_sp_read_bits_rev_delayer_out = io_sp_read_valid_0 & rs1_revOutput | io_sp_read_valid_1 & rs1_revOutput | io_sp_read_valid_6 & rs1_revOutput;	
  assign io_acc_read_valid = |_io_acc_read_out_valid_T;	
  assign io_acc_read_bits_is_constant = io_acc_read_valid_0 & rs2_zero | io_acc_read_valid_1 & rs2_zero | io_acc_read_valid_2 & rs2_zero | io_acc_read_valid_3 & rs2_zero;	
  assign io_acc_read_bits_addr = io_acc_read_valid_0 | io_acc_read_valid_1 | io_acc_read_valid_2 | io_acc_read_valid_3 ? rs2_addr : 5'h0;	
  assign io_acc_read_bits_rmw = io_acc_read_valid_0 | io_acc_read_valid_1 | io_acc_read_valid_3;	
  assign io_cmp_ctrl_valid = |{computeFlags_1 & _io_cmp_ctrl_T & _io_cmp_ctrl_T_1, io_cmp_ctrl_valid_1, io_cmp_ctrl_valid_2, io_cmp_ctrl_valid_3, io_cmp_ctrl_valid_4, io_cmp_ctrl_valid_5};	
  assign io_cmp_ctrl_bits_cmd = (io_cmp_ctrl_valid_3 ? 3'h5 : 3'h0) | (io_cmp_ctrl_valid_4 ? 3'h3 : 3'h0) | {io_cmp_ctrl_valid_5, io_cmp_ctrl_valid_2, io_cmp_ctrl_valid_1};	
  assign io_pe_ctrl_0_valid = |{io_pe_ctrl_0_bits_mac_0, io_pe_ctrl_0_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_0_bits_flow_lr_0, |_GEN_0, regs_14_8, x0_11, x0_12};	
  assign io_pe_ctrl_0_bits_mac = io_pe_ctrl_0_bits_mac_0;	
  assign io_pe_ctrl_0_bits_acc_ui = io_pe_ctrl_0_bits_acc_ui_0;	
  assign io_pe_ctrl_0_bits_load_reg_li = x0;	
  assign io_pe_ctrl_0_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_0_bits_flow_lr = io_pe_ctrl_0_bits_flow_lr_0;	
  assign io_pe_ctrl_0_bits_flow_ud = |_GEN_0;	
  assign io_pe_ctrl_0_bits_flow_du = regs_14_8;	
  assign io_pe_ctrl_0_bits_update_reg = x0_11;	
  assign io_pe_ctrl_0_bits_exp2 = x0_12;	
  assign io_pe_ctrl_1_valid = |{io_pe_ctrl_1_bits_mac_0, io_pe_ctrl_1_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_1_bits_flow_lr_0, |_GEN_1, regs_13_8, regs_0_9, regs_0_10};	
  assign io_pe_ctrl_1_bits_mac = io_pe_ctrl_1_bits_mac_0;	
  assign io_pe_ctrl_1_bits_acc_ui = io_pe_ctrl_1_bits_acc_ui_0;	
  assign io_pe_ctrl_1_bits_load_reg_li = x0;	
  assign io_pe_ctrl_1_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_1_bits_flow_lr = io_pe_ctrl_1_bits_flow_lr_0;	
  assign io_pe_ctrl_1_bits_flow_ud = |_GEN_1;	
  assign io_pe_ctrl_1_bits_flow_du = regs_13_8;	
  assign io_pe_ctrl_1_bits_update_reg = regs_0_9;	
  assign io_pe_ctrl_1_bits_exp2 = regs_0_10;	
  assign io_pe_ctrl_2_valid = |{io_pe_ctrl_2_bits_mac_0, io_pe_ctrl_2_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_2_bits_flow_lr_0, |_GEN_2, regs_12_8, regs_1_9, regs_1_10};	
  assign io_pe_ctrl_2_bits_mac = io_pe_ctrl_2_bits_mac_0;	
  assign io_pe_ctrl_2_bits_acc_ui = io_pe_ctrl_2_bits_acc_ui_0;	
  assign io_pe_ctrl_2_bits_load_reg_li = x0;	
  assign io_pe_ctrl_2_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_2_bits_flow_lr = io_pe_ctrl_2_bits_flow_lr_0;	
  assign io_pe_ctrl_2_bits_flow_ud = |_GEN_2;	
  assign io_pe_ctrl_2_bits_flow_du = regs_12_8;	
  assign io_pe_ctrl_2_bits_update_reg = regs_1_9;	
  assign io_pe_ctrl_2_bits_exp2 = regs_1_10;	
  assign io_pe_ctrl_3_valid = |{io_pe_ctrl_3_bits_mac_0, io_pe_ctrl_3_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_3_bits_flow_lr_0, |_GEN_3, regs_11_8, regs_2_9, regs_2_10};	
  assign io_pe_ctrl_3_bits_mac = io_pe_ctrl_3_bits_mac_0;	
  assign io_pe_ctrl_3_bits_acc_ui = io_pe_ctrl_3_bits_acc_ui_0;	
  assign io_pe_ctrl_3_bits_load_reg_li = x0;	
  assign io_pe_ctrl_3_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_3_bits_flow_lr = io_pe_ctrl_3_bits_flow_lr_0;	
  assign io_pe_ctrl_3_bits_flow_ud = |_GEN_3;	
  assign io_pe_ctrl_3_bits_flow_du = regs_11_8;	
  assign io_pe_ctrl_3_bits_update_reg = regs_2_9;	
  assign io_pe_ctrl_3_bits_exp2 = regs_2_10;	
  assign io_pe_ctrl_4_valid = |{io_pe_ctrl_4_bits_mac_0, io_pe_ctrl_4_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_4_bits_flow_lr_0, |_GEN_4, regs_10_8, regs_3_9, regs_3_10};	
  assign io_pe_ctrl_4_bits_mac = io_pe_ctrl_4_bits_mac_0;	
  assign io_pe_ctrl_4_bits_acc_ui = io_pe_ctrl_4_bits_acc_ui_0;	
  assign io_pe_ctrl_4_bits_load_reg_li = x0;	
  assign io_pe_ctrl_4_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_4_bits_flow_lr = io_pe_ctrl_4_bits_flow_lr_0;	
  assign io_pe_ctrl_4_bits_flow_ud = |_GEN_4;	
  assign io_pe_ctrl_4_bits_flow_du = regs_10_8;	
  assign io_pe_ctrl_4_bits_update_reg = regs_3_9;	
  assign io_pe_ctrl_4_bits_exp2 = regs_3_10;	
  assign io_pe_ctrl_5_valid = |{io_pe_ctrl_5_bits_mac_0, io_pe_ctrl_5_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_5_bits_flow_lr_0, |_GEN_5, regs_9_8, regs_4_9, regs_4_10};	
  assign io_pe_ctrl_5_bits_mac = io_pe_ctrl_5_bits_mac_0;	
  assign io_pe_ctrl_5_bits_acc_ui = io_pe_ctrl_5_bits_acc_ui_0;	
  assign io_pe_ctrl_5_bits_load_reg_li = x0;	
  assign io_pe_ctrl_5_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_5_bits_flow_lr = io_pe_ctrl_5_bits_flow_lr_0;	
  assign io_pe_ctrl_5_bits_flow_ud = |_GEN_5;	
  assign io_pe_ctrl_5_bits_flow_du = regs_9_8;	
  assign io_pe_ctrl_5_bits_update_reg = regs_4_9;	
  assign io_pe_ctrl_5_bits_exp2 = regs_4_10;	
  assign io_pe_ctrl_6_valid = |{io_pe_ctrl_6_bits_mac_0, io_pe_ctrl_6_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_6_bits_flow_lr_0, |_GEN_6, regs_8_8, regs_5_9, regs_5_10};	
  assign io_pe_ctrl_6_bits_mac = io_pe_ctrl_6_bits_mac_0;	
  assign io_pe_ctrl_6_bits_acc_ui = io_pe_ctrl_6_bits_acc_ui_0;	
  assign io_pe_ctrl_6_bits_load_reg_li = x0;	
  assign io_pe_ctrl_6_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_6_bits_flow_lr = io_pe_ctrl_6_bits_flow_lr_0;	
  assign io_pe_ctrl_6_bits_flow_ud = |_GEN_6;	
  assign io_pe_ctrl_6_bits_flow_du = regs_8_8;	
  assign io_pe_ctrl_6_bits_update_reg = regs_5_9;	
  assign io_pe_ctrl_6_bits_exp2 = regs_5_10;	
  assign io_pe_ctrl_7_valid = |{io_pe_ctrl_7_bits_mac_0, io_pe_ctrl_7_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_7_bits_flow_lr_0, |_GEN_7, regs_7_8, regs_6_9, regs_6_10};	
  assign io_pe_ctrl_7_bits_mac = io_pe_ctrl_7_bits_mac_0;	
  assign io_pe_ctrl_7_bits_acc_ui = io_pe_ctrl_7_bits_acc_ui_0;	
  assign io_pe_ctrl_7_bits_load_reg_li = x0;	
  assign io_pe_ctrl_7_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_7_bits_flow_lr = io_pe_ctrl_7_bits_flow_lr_0;	
  assign io_pe_ctrl_7_bits_flow_ud = |_GEN_7;	
  assign io_pe_ctrl_7_bits_flow_du = regs_7_8;	
  assign io_pe_ctrl_7_bits_update_reg = regs_6_9;	
  assign io_pe_ctrl_7_bits_exp2 = regs_6_10;	
  assign io_pe_ctrl_8_valid = |{io_pe_ctrl_8_bits_mac_0, io_pe_ctrl_8_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_8_bits_flow_lr_0, |_GEN_8, regs_6_8, regs_7_9, regs_7_10};	
  assign io_pe_ctrl_8_bits_mac = io_pe_ctrl_8_bits_mac_0;	
  assign io_pe_ctrl_8_bits_acc_ui = io_pe_ctrl_8_bits_acc_ui_0;	
  assign io_pe_ctrl_8_bits_load_reg_li = x0;	
  assign io_pe_ctrl_8_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_8_bits_flow_lr = io_pe_ctrl_8_bits_flow_lr_0;	
  assign io_pe_ctrl_8_bits_flow_ud = |_GEN_8;	
  assign io_pe_ctrl_8_bits_flow_du = regs_6_8;	
  assign io_pe_ctrl_8_bits_update_reg = regs_7_9;	
  assign io_pe_ctrl_8_bits_exp2 = regs_7_10;	
  assign io_pe_ctrl_9_valid = |{io_pe_ctrl_9_bits_mac_0, io_pe_ctrl_9_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_9_bits_flow_lr_0, |_GEN_9, regs_5_8, regs_8_9, regs_8_10};	
  assign io_pe_ctrl_9_bits_mac = io_pe_ctrl_9_bits_mac_0;	
  assign io_pe_ctrl_9_bits_acc_ui = io_pe_ctrl_9_bits_acc_ui_0;	
  assign io_pe_ctrl_9_bits_load_reg_li = x0;	
  assign io_pe_ctrl_9_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_9_bits_flow_lr = io_pe_ctrl_9_bits_flow_lr_0;	
  assign io_pe_ctrl_9_bits_flow_ud = |_GEN_9;	
  assign io_pe_ctrl_9_bits_flow_du = regs_5_8;	
  assign io_pe_ctrl_9_bits_update_reg = regs_8_9;	
  assign io_pe_ctrl_9_bits_exp2 = regs_8_10;	
  assign io_pe_ctrl_10_valid = |{io_pe_ctrl_10_bits_mac_0, io_pe_ctrl_10_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_10_bits_flow_lr_0, |_GEN_10, regs_4_8, regs_9_9, regs_9_10};	
  assign io_pe_ctrl_10_bits_mac = io_pe_ctrl_10_bits_mac_0;	
  assign io_pe_ctrl_10_bits_acc_ui = io_pe_ctrl_10_bits_acc_ui_0;	
  assign io_pe_ctrl_10_bits_load_reg_li = x0;	
  assign io_pe_ctrl_10_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_10_bits_flow_lr = io_pe_ctrl_10_bits_flow_lr_0;	
  assign io_pe_ctrl_10_bits_flow_ud = |_GEN_10;	
  assign io_pe_ctrl_10_bits_flow_du = regs_4_8;	
  assign io_pe_ctrl_10_bits_update_reg = regs_9_9;	
  assign io_pe_ctrl_10_bits_exp2 = regs_9_10;	
  assign io_pe_ctrl_11_valid = |{io_pe_ctrl_11_bits_mac_0, io_pe_ctrl_11_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_11_bits_flow_lr_0, |_GEN_11, regs_3_8, regs_10_9, regs_10_10};	
  assign io_pe_ctrl_11_bits_mac = io_pe_ctrl_11_bits_mac_0;	
  assign io_pe_ctrl_11_bits_acc_ui = io_pe_ctrl_11_bits_acc_ui_0;	
  assign io_pe_ctrl_11_bits_load_reg_li = x0;	
  assign io_pe_ctrl_11_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_11_bits_flow_lr = io_pe_ctrl_11_bits_flow_lr_0;	
  assign io_pe_ctrl_11_bits_flow_ud = |_GEN_11;	
  assign io_pe_ctrl_11_bits_flow_du = regs_3_8;	
  assign io_pe_ctrl_11_bits_update_reg = regs_10_9;	
  assign io_pe_ctrl_11_bits_exp2 = regs_10_10;	
  assign io_pe_ctrl_12_valid = |{io_pe_ctrl_12_bits_mac_0, io_pe_ctrl_12_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_12_bits_flow_lr_0, |_GEN_12, regs_2_8, regs_11_9, regs_11_10};	
  assign io_pe_ctrl_12_bits_mac = io_pe_ctrl_12_bits_mac_0;	
  assign io_pe_ctrl_12_bits_acc_ui = io_pe_ctrl_12_bits_acc_ui_0;	
  assign io_pe_ctrl_12_bits_load_reg_li = x0;	
  assign io_pe_ctrl_12_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_12_bits_flow_lr = io_pe_ctrl_12_bits_flow_lr_0;	
  assign io_pe_ctrl_12_bits_flow_ud = |_GEN_12;	
  assign io_pe_ctrl_12_bits_flow_du = regs_2_8;	
  assign io_pe_ctrl_12_bits_update_reg = regs_11_9;	
  assign io_pe_ctrl_12_bits_exp2 = regs_11_10;	
  assign io_pe_ctrl_13_valid = |{io_pe_ctrl_13_bits_mac_0, io_pe_ctrl_13_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_13_bits_flow_lr_0, |_GEN_13, regs_1_8, regs_12_9, regs_12_10};	
  assign io_pe_ctrl_13_bits_mac = io_pe_ctrl_13_bits_mac_0;	
  assign io_pe_ctrl_13_bits_acc_ui = io_pe_ctrl_13_bits_acc_ui_0;	
  assign io_pe_ctrl_13_bits_load_reg_li = x0;	
  assign io_pe_ctrl_13_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_13_bits_flow_lr = io_pe_ctrl_13_bits_flow_lr_0;	
  assign io_pe_ctrl_13_bits_flow_ud = |_GEN_13;	
  assign io_pe_ctrl_13_bits_flow_du = regs_1_8;	
  assign io_pe_ctrl_13_bits_update_reg = regs_12_9;	
  assign io_pe_ctrl_13_bits_exp2 = regs_12_10;	
  assign io_pe_ctrl_14_valid = |{io_pe_ctrl_14_bits_mac_0, io_pe_ctrl_14_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_14_bits_flow_lr_0, |_GEN_14, regs_0_8, regs_13_9, regs_13_10};	
  assign io_pe_ctrl_14_bits_mac = io_pe_ctrl_14_bits_mac_0;	
  assign io_pe_ctrl_14_bits_acc_ui = io_pe_ctrl_14_bits_acc_ui_0;	
  assign io_pe_ctrl_14_bits_load_reg_li = x0;	
  assign io_pe_ctrl_14_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_14_bits_flow_lr = io_pe_ctrl_14_bits_flow_lr_0;	
  assign io_pe_ctrl_14_bits_flow_ud = |_GEN_14;	
  assign io_pe_ctrl_14_bits_flow_du = regs_0_8;	
  assign io_pe_ctrl_14_bits_update_reg = regs_13_9;	
  assign io_pe_ctrl_14_bits_exp2 = regs_13_10;	
  assign io_pe_ctrl_15_valid = |{io_pe_ctrl_15_bits_mac_0, io_pe_ctrl_15_bits_acc_ui_0, x0, x0_5, io_pe_ctrl_15_bits_flow_lr_0, |_GEN_15, x0_10, regs_14_9, regs_14_10};	
  assign io_pe_ctrl_15_bits_mac = io_pe_ctrl_15_bits_mac_0;	
  assign io_pe_ctrl_15_bits_acc_ui = io_pe_ctrl_15_bits_acc_ui_0;	
  assign io_pe_ctrl_15_bits_load_reg_li = x0;	
  assign io_pe_ctrl_15_bits_load_reg_ui = x0_5;	
  assign io_pe_ctrl_15_bits_flow_lr = io_pe_ctrl_15_bits_flow_lr_0;	
  assign io_pe_ctrl_15_bits_flow_ud = |_GEN_15;	
  assign io_pe_ctrl_15_bits_flow_du = x0_10;	
  assign io_pe_ctrl_15_bits_update_reg = regs_14_9;	
  assign io_pe_ctrl_15_bits_exp2 = regs_14_10;	
  assign io_acc_ctrl_valid = |{accumFlags_1 & accumTimer > 5'h5 & accumTimer < 5'h7, io_acc_ctrl_valid_1, io_acc_ctrl_valid_2, io_acc_ctrl_valid_3, io_acc_ctrl_valid_4, io_acc_ctrl_valid_5, io_acc_ctrl_valid_6};	
  assign io_acc_ctrl_bits_cmd = {io_acc_ctrl_valid_4, io_acc_ctrl_valid_2 | io_acc_ctrl_valid_3, io_acc_ctrl_valid_1} | (io_acc_ctrl_valid_5 ? 3'h5 : 3'h0) | (io_acc_ctrl_valid_6 ? 3'h3 : 3'h0);	
  assign io_sem_release_valid = |{computeFlags_0 & _conflictFree_T & _conflictFree_T_1 & header_releaseValid, computeFlags_1 & _conflictFree_T & _conflictFree_T_1 & header_releaseValid, computeFlags_2 & _conflictFree_T & _conflictFree_T_1 & header_releaseValid, accumFlags_3 & _conflictFree_T_9 & _conflictFree_T_10 & header_releaseValid, accumFlags_4 & accumTimer[4] & _conflictFree_T_13 & header_releaseValid};	
  assign io_sem_release_bits_id = header_semId;	
  assign io_sem_release_bits_value = header_releaseSemValue;	
  assign io_busy = |_GEN;	
endmodule

