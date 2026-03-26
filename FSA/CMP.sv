
module CMP(	
  input         clock,	
  input         reset,	
  input         io_d_input_bits_sign,	
  input  [7:0]  io_d_input_bits_exp,	
  input  [22:0] io_d_input_bits_mantissa,	
  output        io_d_output_valid,	
  output        io_d_output_bits_sign,	
  output [7:0]  io_d_output_bits_exp,	
  output [22:0] io_d_output_bits_mantissa,	
  input         io_in_ctrl_valid,	
  input  [2:0]  io_in_ctrl_bits_cmd,	
  output        io_out_ctrl_valid,	
  output [2:0]  io_out_ctrl_bits_cmd	
);

  wire             _cmpUnit_io_out_max_sign;	
  wire [7:0]       _cmpUnit_io_out_max_exp;	
  wire [22:0]      _cmpUnit_io_out_max_mantissa;	
  wire             _cmpUnit_io_out_diff_sign;	
  wire [7:0]       _cmpUnit_io_out_diff_exp;	
  wire [22:0]      _cmpUnit_io_out_diff_mantissa;	
  wire [7:0][22:0] _GEN = '{23'h5CAE0F, 23'h640507, 23'h6AE156, 23'h711D65, 23'h768DCF, 23'h7B00A2, 23'h7E3C91, 23'h0};
  wire [7:0][7:0]  _GEN_0 = '{8'hE, 8'hC, 8'hA, 8'h8, 8'h6, 8'h4, 8'h2, 8'h1};
  reg              oldMax_sign;	
  reg  [7:0]       oldMax_exp;	
  reg  [22:0]      oldMax_mantissa;	
  reg              newMax_sign;	
  reg  [7:0]       newMax_exp;	
  reg  [22:0]      newMax_mantissa;	
  wire             update_new_max = io_in_ctrl_bits_cmd == 3'h0;	
  wire             prop_new_max = io_in_ctrl_bits_cmd == 3'h1;	
  wire             prop_zero = io_in_ctrl_bits_cmd == 3'h3;	
  wire             prop_exp2_intercepts = io_in_ctrl_bits_cmd == 3'h5;	
  reg  [2:0]       exp2_counter_value;	
  wire             _GEN_1 = prop_zero | prop_exp2_intercepts;	
  wire             downCastDIn_rawA_isZero = io_d_input_bits_exp == 8'h0;	
  wire             downCastDIn_rawA_isInf = (&io_d_input_bits_exp) & ~(|io_d_input_bits_mantissa);	
  wire             downCastDIn_rawA_isNaN = (&io_d_input_bits_exp) & (|io_d_input_bits_mantissa);	
  wire [8:0]       _downCastDIn_rawA_exp_T_1 = {1'h0, io_d_input_bits_exp} - 9'h7F;	
  wire [10:0]      downCastDIn_roundedMantissa = {1'h0, io_d_input_bits_mantissa[22:13]} + {10'h0, io_d_input_bits_mantissa[12] & (|(io_d_input_bits_mantissa[11:0])) | io_d_input_bits_mantissa[12] & ~(|(io_d_input_bits_mantissa[11:0])) & io_d_input_bits_mantissa[13]};	
  wire [9:0]       downCastDIn_roundedExp = {_downCastDIn_rawA_exp_T_1[8], _downCastDIn_rawA_exp_T_1} + {9'h0, downCastDIn_roundedMantissa[10]};	
  wire             downCastDIn_overflow = $signed(downCastDIn_roundedExp) > 10'shF;	
  wire             downCastDIn_underflow = $signed(downCastDIn_roundedExp) < -10'shE;	
  wire             do_reset = io_in_ctrl_bits_cmd == 3'h4;	
  wire             _GEN_2 = _GEN_1 | io_in_ctrl_bits_cmd != 3'h2;	
  always @(posedge clock) begin	
    if (reset) begin	
      oldMax_sign <= 1'h1;	
      oldMax_exp <= 8'hFF;	
      oldMax_mantissa <= 23'h0;	
      newMax_sign <= 1'h1;	
      newMax_exp <= 8'hFF;	
      newMax_mantissa <= 23'h0;	
      exp2_counter_value <= 3'h0;	
    end
    else begin	
      if (io_in_ctrl_valid) begin	
        oldMax_sign <= do_reset | (_GEN_2 ? oldMax_sign : _cmpUnit_io_out_max_sign);	
        if (do_reset) begin	
          oldMax_exp <= 8'hFF;	
          oldMax_mantissa <= 23'h0;	
          newMax_exp <= 8'hFF;	
          newMax_mantissa <= 23'h0;	
        end
        else begin	
          if (_GEN_2) begin	
          end
          else begin	
            oldMax_exp <= _cmpUnit_io_out_max_exp;	
            oldMax_mantissa <= _cmpUnit_io_out_max_mantissa;	
          end
          if (~_GEN_1) begin	
            newMax_exp <= _cmpUnit_io_out_max_exp;	
            newMax_mantissa <= _cmpUnit_io_out_max_mantissa;	
          end
        end
        newMax_sign <= do_reset | (_GEN_1 ? newMax_sign : _cmpUnit_io_out_max_sign);	
      end
      if (io_in_ctrl_valid & prop_exp2_intercepts)	
        exp2_counter_value <= exp2_counter_value + 3'h1;	
    end
  end // always @(posedge)
  
  FPCmpUnit cmpUnit (	
    .io_in_a_sign         (update_new_max ? io_d_input_bits_sign : ~prop_new_max & oldMax_sign),	
    .io_in_a_exp          (update_new_max ? io_d_input_bits_exp : prop_new_max ? 8'h0 : oldMax_exp),	
    .io_in_a_mantissa     (update_new_max ? io_d_input_bits_mantissa : prop_new_max ? 23'h0 : oldMax_mantissa),	
    .io_in_b_sign         (newMax_sign),	
    .io_in_b_exp          (newMax_exp),	
    .io_in_b_mantissa     (newMax_mantissa),	
    .io_out_max_sign      (_cmpUnit_io_out_max_sign),
    .io_out_max_exp       (_cmpUnit_io_out_max_exp),
    .io_out_max_mantissa  (_cmpUnit_io_out_max_mantissa),
    .io_out_diff_sign     (_cmpUnit_io_out_diff_sign),
    .io_out_diff_exp      (_cmpUnit_io_out_diff_exp),
    .io_out_diff_mantissa (_cmpUnit_io_out_diff_mantissa)
  );	
  assign io_d_output_valid = io_in_ctrl_valid & io_in_ctrl_bits_cmd != 3'h4;	
  assign io_d_output_bits_sign = ~_GEN_1 & ~update_new_max & _cmpUnit_io_out_diff_sign;	
  assign io_d_output_bits_exp = prop_zero ? 8'h0 : prop_exp2_intercepts ? _GEN_0[exp2_counter_value] : update_new_max ? 8'h0 : _cmpUnit_io_out_diff_exp;	
  assign io_d_output_bits_mantissa = prop_zero ? 23'h0 : prop_exp2_intercepts ? _GEN[exp2_counter_value] : update_new_max ? {7'h0, io_d_input_bits_sign & ~downCastDIn_rawA_isNaN, downCastDIn_rawA_isInf | downCastDIn_rawA_isNaN | downCastDIn_overflow ? 5'h1F : downCastDIn_rawA_isZero | downCastDIn_underflow ? 5'h0 : downCastDIn_roundedExp[4:0] + 5'hF, downCastDIn_rawA_isNaN ? 10'h200 : downCastDIn_rawA_isZero | downCastDIn_rawA_isInf | downCastDIn_underflow | downCastDIn_overflow ? 10'h0 : downCastDIn_roundedMantissa[9:0]} : _cmpUnit_io_out_diff_mantissa;	
  assign io_out_ctrl_valid = io_in_ctrl_valid;	
  assign io_out_ctrl_bits_cmd = io_in_ctrl_bits_cmd;	
endmodule

