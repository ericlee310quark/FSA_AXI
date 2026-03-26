
module Reciprocal(	
  input         clock,	
  input         reset,	
  input  [31:0] io_in,	
  input         io_in_valid,	
  output        io_out_valid,	
  output        io_fma_rawA_isZero,	
  output        io_fma_rawA_isInf,	
  output        io_fma_rawA_isNaN,	
  output        io_fma_rawA_sign,	
  output [8:0]  io_fma_rawA_exp,	
  output [23:0] io_fma_rawA_mantissa,	
  output        io_fma_rawB_isZero,	
  output        io_fma_rawB_isInf,	
  output        io_fma_rawB_isNaN,	
  output        io_fma_rawB_sign,	
  output [8:0]  io_fma_rawB_exp,	
  output [23:0] io_fma_rawB_mantissa,	
  output        io_fma_rawC_isZero,	
  output [8:0]  io_fma_rawC_exp,	
  output [23:0] io_fma_rawC_mantissa,	
  input  [31:0] io_fma_rounded_result	
);

  wire        xe_isInf = io_in[30:23] == 8'h0;	
  wire        xm_isInf = (&(io_in[30:23])) & ~(|(io_in[22:0]));	
  reg  [4:0]  cnt;	
  wire        done = cnt == 5'h12;	
  reg         reg_r_isZero;	
  reg         reg_r_isInf;	
  reg         reg_r_isNaN;	
  reg         reg_r_sign;	
  reg  [8:0]  reg_r_exp;	
  reg  [23:0] reg_r_mantissa;	
  reg         reg_p_isZero;	
  reg         reg_p_isInf;	
  reg         reg_p_isNaN;	
  reg         reg_p_sign;	
  reg  [8:0]  reg_p_exp;	
  reg  [23:0] reg_p_mantissa;	
  wire        _GEN = done | cnt[0];	
  wire        _GEN_0 = io_in_valid & cnt[0];	
  always @(posedge clock) begin	
    if (reset) begin	
      cnt <= 5'h0;	
      reg_r_isZero <= 1'h0;	
      reg_r_isInf <= 1'h0;	
      reg_r_isNaN <= 1'h0;	
      reg_r_sign <= 1'h0;	
      reg_r_exp <= 9'h0;	
      reg_r_mantissa <= 24'h800000;	
    end
    else begin	
      if (io_in_valid & cnt != 5'h12)	
        cnt <= cnt + 5'h1;	
      else if (done)	
        cnt <= 5'h0;	
      reg_r_isZero <= ~done & (_GEN_0 ? io_fma_rounded_result[30:23] == 8'h0 : reg_r_isZero);	
      reg_r_isInf <= ~done & (_GEN_0 ? (&(io_fma_rounded_result[30:23])) & ~(|(io_fma_rounded_result[22:0])) : reg_r_isInf);	
      reg_r_isNaN <= ~done & (_GEN_0 ? (&(io_fma_rounded_result[30:23])) & (|(io_fma_rounded_result[22:0])) : reg_r_isNaN);	
      reg_r_sign <= ~done & (_GEN_0 ? io_fma_rounded_result[31] : reg_r_sign);	
      if (done) begin	
        reg_r_exp <= 9'h0;	
        reg_r_mantissa <= 24'h800000;	
      end
      else if (_GEN_0) begin	
        reg_r_exp <= {1'h0, io_fma_rounded_result[30:23]} - 9'h7F;	
        reg_r_mantissa <= {1'h1, io_fma_rounded_result[22:0]};	
      end
    end
    if (done | ~io_in_valid | cnt[0]) begin	
    end
    else begin	
      reg_p_isZero <= io_fma_rounded_result[30:23] == 8'h0;	
      reg_p_isInf <= (&(io_fma_rounded_result[30:23])) & ~(|(io_fma_rounded_result[22:0]));	
      reg_p_isNaN <= (&(io_fma_rounded_result[30:23])) & (|(io_fma_rounded_result[22:0]));	
      reg_p_sign <= io_fma_rounded_result[31];	
      reg_p_exp <= {1'h0, io_fma_rounded_result[30:23]} - 9'h7F;	
      reg_p_mantissa <= {1'h1, io_fma_rounded_result[22:0]};	
    end
  end // always @(posedge)
  
  assign io_out_valid = done;	
  assign io_fma_rawA_isZero = reg_r_isZero;	
  assign io_fma_rawA_isInf = reg_r_isInf;	
  assign io_fma_rawA_isNaN = reg_r_isNaN;	
  assign io_fma_rawA_sign = reg_r_sign;	
  assign io_fma_rawA_exp = reg_r_exp;	
  assign io_fma_rawA_mantissa = reg_r_mantissa;	
  assign io_fma_rawB_isZero = done ? xm_isInf : cnt[0] ? reg_p_isZero : xe_isInf;	
  assign io_fma_rawB_isInf = done ? xe_isInf : cnt[0] ? reg_p_isInf : xm_isInf;	
  assign io_fma_rawB_isNaN = done | ~(cnt[0]) ? (&(io_in[30:23])) & (|(io_in[22:0])) : reg_p_isNaN;	
  assign io_fma_rawB_sign = done ? io_in[31] : ~(cnt[0]) | reg_p_sign;	
  assign io_fma_rawB_exp = done ? 9'h0 - ({1'h0, io_in[30:23]} - 9'h7F) : cnt[0] ? reg_p_exp : 9'h0;	
  assign io_fma_rawB_mantissa = done ? 24'h800000 : cnt[0] ? reg_p_mantissa : {1'h1, io_in[22:0]};	
  assign io_fma_rawC_isZero = done | cnt[0];	
  assign io_fma_rawC_exp = {8'h0, ~_GEN};	
  assign io_fma_rawC_mantissa = {~_GEN, 23'h0};	
endmodule

