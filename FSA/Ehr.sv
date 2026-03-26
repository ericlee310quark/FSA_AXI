
module Ehr(	
  input  clock,	
  input  reset,	
  output io_read_1,	
  input  io_write_0_valid,	
  input  io_write_1_valid	
);

  reg reg_0;	
  always @(posedge clock) begin	
    if (reset)	
      reg_0 <= 1'h0;	
    else if (io_write_1_valid ? io_write_1_valid : io_write_0_valid)	
      reg_0 <= ~io_write_1_valid;	
  end // always @(posedge)
  
  assign io_read_1 = io_write_0_valid | reg_0;	
endmodule

