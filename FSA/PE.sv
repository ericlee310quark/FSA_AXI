
module PE(	
  input         clock,	
  input         io_in_ctrl_valid,	
  input         io_in_ctrl_bits_mac,	
  input         io_in_ctrl_bits_acc_ui,	
  input         io_in_ctrl_bits_load_reg_li,	
  input         io_in_ctrl_bits_load_reg_ui,	
  input         io_in_ctrl_bits_flow_lr,	
  input         io_in_ctrl_bits_flow_ud,	
  input         io_in_ctrl_bits_flow_du,	
  input         io_in_ctrl_bits_update_reg,	
  input         io_in_ctrl_bits_exp2,	
  output        io_out_ctrl_valid,	
  output        io_out_ctrl_bits_mac,	
  output        io_out_ctrl_bits_acc_ui,	
  output        io_out_ctrl_bits_load_reg_li,	
  output        io_out_ctrl_bits_load_reg_ui,	
  output        io_out_ctrl_bits_flow_lr,	
  output        io_out_ctrl_bits_flow_ud,	
  output        io_out_ctrl_bits_flow_du,	
  output        io_out_ctrl_bits_update_reg,	
  output        io_out_ctrl_bits_exp2,	
  input         io_u_input_bits_sign,	
  input  [7:0]  io_u_input_bits_exp,	
  input  [22:0] io_u_input_bits_mantissa,	
  output        io_u_output_valid,	
  output        io_u_output_bits_sign,	
  output [7:0]  io_u_output_bits_exp,	
  output [22:0] io_u_output_bits_mantissa,	
  input         io_d_input_bits_sign,	
  input  [7:0]  io_d_input_bits_exp,	
  input  [22:0] io_d_input_bits_mantissa,	
  output        io_d_output_valid,	
  output        io_d_output_bits_sign,	
  output [7:0]  io_d_output_bits_exp,	
  output [22:0] io_d_output_bits_mantissa,	
  input         io_l_input_bits_sign,	
  input  [4:0]  io_l_input_bits_exp,	
  input  [9:0]  io_l_input_bits_mantissa,	
  output        io_r_output_valid,	
  output        io_r_output_bits_sign,	
  output [4:0]  io_r_output_bits_exp,	
  output [9:0]  io_r_output_bits_mantissa	
);

  wire        _macUnit_io_out_accType_sign;	
  wire [7:0]  _macUnit_io_out_accType_exp;	
  wire [22:0] _macUnit_io_out_accType_mantissa;	
  wire        _macUnit_io_out_elemType_sign;	
  wire [4:0]  _macUnit_io_out_elemType_exp;	
  wire [9:0]  _macUnit_io_out_elemType_mantissa;	
  wire        _macUnit_io_out_exp2;	
  reg         reg_sign;	
  reg  [4:0]  reg_exp;	
  reg  [9:0]  reg_mantissa;	
  reg         exp2Done;	
  wire        _io_d_output_valid_T = io_in_ctrl_bits_mac & io_in_ctrl_bits_acc_ui;	
  wire        _io_u_output_bits_T_1 = io_in_ctrl_bits_mac & ~io_in_ctrl_bits_acc_ui;	
  always @(posedge clock) begin	
    if (io_in_ctrl_valid) begin	
      if (io_in_ctrl_bits_load_reg_li) begin	
        reg_sign <= io_l_input_bits_sign;	
        reg_exp <= io_l_input_bits_exp;	
        reg_mantissa <= io_l_input_bits_mantissa;	
      end
      else if (io_in_ctrl_bits_load_reg_ui) begin	
        reg_sign <= io_u_input_bits_mantissa[15];	
        reg_exp <= io_u_input_bits_mantissa[14:10];	
        reg_mantissa <= io_u_input_bits_mantissa[9:0];	
      end
      else if (io_in_ctrl_bits_update_reg | _macUnit_io_out_exp2 & ~exp2Done) begin	
        reg_sign <= _macUnit_io_out_elemType_sign;	
        reg_exp <= _macUnit_io_out_elemType_exp;	
        reg_mantissa <= _macUnit_io_out_elemType_mantissa;	
      end
      exp2Done <= io_in_ctrl_bits_exp2 & (exp2Done | _macUnit_io_out_exp2);	
    end
  end // always @(posedge)
  
  FPMacUnit macUnit (	
    .io_in_a_sign             (reg_sign),	
    .io_in_a_exp              (reg_exp),	
    .io_in_a_mantissa         (reg_mantissa),	
    .io_in_b_sign             (io_l_input_bits_sign),
    .io_in_b_exp              (io_l_input_bits_exp),
    .io_in_b_mantissa         (io_l_input_bits_mantissa),
    .io_in_c_sign             (io_in_ctrl_bits_acc_ui ? io_u_input_bits_sign : io_d_input_bits_sign),	
    .io_in_c_exp              (io_in_ctrl_bits_acc_ui ? io_u_input_bits_exp : io_d_input_bits_exp),	
    .io_in_c_mantissa         (io_in_ctrl_bits_acc_ui ? io_u_input_bits_mantissa : io_d_input_bits_mantissa),	
    .io_in_cmd                (io_in_ctrl_bits_exp2),
    .io_out_accType_sign      (_macUnit_io_out_accType_sign),
    .io_out_accType_exp       (_macUnit_io_out_accType_exp),
    .io_out_accType_mantissa  (_macUnit_io_out_accType_mantissa),
    .io_out_elemType_sign     (_macUnit_io_out_elemType_sign),
    .io_out_elemType_exp      (_macUnit_io_out_elemType_exp),
    .io_out_elemType_mantissa (_macUnit_io_out_elemType_mantissa),
    .io_out_exp2              (_macUnit_io_out_exp2)
  );	
  assign io_out_ctrl_valid = io_in_ctrl_valid;	
  assign io_out_ctrl_bits_mac = io_in_ctrl_bits_mac;	
  assign io_out_ctrl_bits_acc_ui = io_in_ctrl_bits_acc_ui;	
  assign io_out_ctrl_bits_load_reg_li = io_in_ctrl_bits_load_reg_li;	
  assign io_out_ctrl_bits_load_reg_ui = io_in_ctrl_bits_load_reg_ui;	
  assign io_out_ctrl_bits_flow_lr = io_in_ctrl_bits_flow_lr;	
  assign io_out_ctrl_bits_flow_ud = io_in_ctrl_bits_flow_ud;	
  assign io_out_ctrl_bits_flow_du = io_in_ctrl_bits_flow_du;	
  assign io_out_ctrl_bits_update_reg = io_in_ctrl_bits_update_reg;	
  assign io_out_ctrl_bits_exp2 = io_in_ctrl_bits_exp2;	
  assign io_u_output_valid = io_in_ctrl_valid & (io_in_ctrl_bits_mac & ~io_in_ctrl_bits_acc_ui | io_in_ctrl_bits_flow_du);	
  assign io_u_output_bits_sign = _io_u_output_bits_T_1 ? _macUnit_io_out_accType_sign : io_d_input_bits_sign;	
  assign io_u_output_bits_exp = _io_u_output_bits_T_1 ? _macUnit_io_out_accType_exp : io_d_input_bits_exp;	
  assign io_u_output_bits_mantissa = _io_u_output_bits_T_1 ? _macUnit_io_out_accType_mantissa : io_d_input_bits_mantissa;	
  assign io_d_output_valid = io_in_ctrl_valid & (_io_d_output_valid_T | io_in_ctrl_bits_flow_ud);	
  assign io_d_output_bits_sign = _io_d_output_valid_T ? _macUnit_io_out_accType_sign : io_u_input_bits_sign;	
  assign io_d_output_bits_exp = _io_d_output_valid_T ? _macUnit_io_out_accType_exp : io_u_input_bits_exp;	
  assign io_d_output_bits_mantissa = _io_d_output_valid_T ? _macUnit_io_out_accType_mantissa : io_u_input_bits_mantissa;	
  assign io_r_output_valid = io_in_ctrl_valid & (io_in_ctrl_bits_load_reg_li | io_in_ctrl_bits_flow_lr);	
  assign io_r_output_bits_sign = io_in_ctrl_bits_load_reg_li ? reg_sign : io_l_input_bits_sign;	
  assign io_r_output_bits_exp = io_in_ctrl_bits_load_reg_li ? reg_exp : io_l_input_bits_exp;	
  assign io_r_output_bits_mantissa = io_in_ctrl_bits_load_reg_li ? reg_mantissa : io_l_input_bits_mantissa;	
endmodule

