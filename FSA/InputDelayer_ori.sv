
module InputDelayer(	
  input        clock,	
  input        io_in_valid,	
  input        io_in_bits_data_0_sign,	
  input  [4:0] io_in_bits_data_0_exp,	
  input  [9:0] io_in_bits_data_0_mantissa,	
  input        io_in_bits_data_1_sign,	
  input  [4:0] io_in_bits_data_1_exp,	
  input  [9:0] io_in_bits_data_1_mantissa,	
  input        io_in_bits_data_2_sign,	
  input  [4:0] io_in_bits_data_2_exp,	
  input  [9:0] io_in_bits_data_2_mantissa,	
  input        io_in_bits_data_3_sign,	
  input  [4:0] io_in_bits_data_3_exp,	
  input  [9:0] io_in_bits_data_3_mantissa,	
  input        io_in_bits_data_4_sign,	
  input  [4:0] io_in_bits_data_4_exp,	
  input  [9:0] io_in_bits_data_4_mantissa,	
  input        io_in_bits_data_5_sign,	
  input  [4:0] io_in_bits_data_5_exp,	
  input  [9:0] io_in_bits_data_5_mantissa,	
  input        io_in_bits_data_6_sign,	
  input  [4:0] io_in_bits_data_6_exp,	
  input  [9:0] io_in_bits_data_6_mantissa,	
  input        io_in_bits_data_7_sign,	
  input  [4:0] io_in_bits_data_7_exp,	
  input  [9:0] io_in_bits_data_7_mantissa,	
  input        io_in_bits_data_8_sign,	
  input  [4:0] io_in_bits_data_8_exp,	
  input  [9:0] io_in_bits_data_8_mantissa,	
  input        io_in_bits_data_9_sign,	
  input  [4:0] io_in_bits_data_9_exp,	
  input  [9:0] io_in_bits_data_9_mantissa,	
  input        io_in_bits_data_10_sign,	
  input  [4:0] io_in_bits_data_10_exp,	
  input  [9:0] io_in_bits_data_10_mantissa,	
  input        io_in_bits_data_11_sign,	
  input  [4:0] io_in_bits_data_11_exp,	
  input  [9:0] io_in_bits_data_11_mantissa,	
  input        io_in_bits_data_12_sign,	
  input  [4:0] io_in_bits_data_12_exp,	
  input  [9:0] io_in_bits_data_12_mantissa,	
  input        io_in_bits_data_13_sign,	
  input  [4:0] io_in_bits_data_13_exp,	
  input  [9:0] io_in_bits_data_13_mantissa,	
  input        io_in_bits_data_14_sign,	
  input  [4:0] io_in_bits_data_14_exp,	
  input  [9:0] io_in_bits_data_14_mantissa,	
  input        io_in_bits_data_15_sign,	
  input  [4:0] io_in_bits_data_15_exp,	
  input  [9:0] io_in_bits_data_15_mantissa,	
  input        io_in_bits_rev_input,	
  input        io_in_bits_delay_output,	
  input        io_in_bits_rev_output,	
  output       io_out_0_sign,	
  output [4:0] io_out_0_exp,	
  output [9:0] io_out_0_mantissa,	
  output       io_out_1_sign,	
  output [4:0] io_out_1_exp,	
  output [9:0] io_out_1_mantissa,	
  output       io_out_2_sign,	
  output [4:0] io_out_2_exp,	
  output [9:0] io_out_2_mantissa,	
  output       io_out_3_sign,	
  output [4:0] io_out_3_exp,	
  output [9:0] io_out_3_mantissa,	
  output       io_out_4_sign,	
  output [4:0] io_out_4_exp,	
  output [9:0] io_out_4_mantissa,	
  output       io_out_5_sign,	
  output [4:0] io_out_5_exp,	
  output [9:0] io_out_5_mantissa,	
  output       io_out_6_sign,	
  output [4:0] io_out_6_exp,	
  output [9:0] io_out_6_mantissa,	
  output       io_out_7_sign,	
  output [4:0] io_out_7_exp,	
  output [9:0] io_out_7_mantissa,	
  output       io_out_8_sign,	
  output [4:0] io_out_8_exp,	
  output [9:0] io_out_8_mantissa,	
  output       io_out_9_sign,	
  output [4:0] io_out_9_exp,	
  output [9:0] io_out_9_mantissa,	
  output       io_out_10_sign,	
  output [4:0] io_out_10_exp,	
  output [9:0] io_out_10_mantissa,	
  output       io_out_11_sign,	
  output [4:0] io_out_11_exp,	
  output [9:0] io_out_11_mantissa,	
  output       io_out_12_sign,	
  output [4:0] io_out_12_exp,	
  output [9:0] io_out_12_mantissa,	
  output       io_out_13_sign,	
  output [4:0] io_out_13_exp,	
  output [9:0] io_out_13_mantissa,	
  output       io_out_14_sign,	
  output [4:0] io_out_14_exp,	
  output [9:0] io_out_14_mantissa,	
  output       io_out_15_sign,	
  output [4:0] io_out_15_exp,	
  output [9:0] io_out_15_mantissa	
);

  reg        rev_out_r;	
  wire       rev_out = io_in_valid ? io_in_bits_rev_output : rev_out_r;	
  reg        delay_r;	
  wire       delay = io_in_valid ? io_in_bits_delay_output : delay_r;	
  wire       in_data_0_sign = io_in_bits_rev_input ? io_in_bits_data_15_sign : io_in_bits_data_0_sign;	
  wire [4:0] in_data_0_exp = io_in_bits_rev_input ? io_in_bits_data_15_exp : io_in_bits_data_0_exp;	
  wire [9:0] in_data_0_mantissa = io_in_bits_rev_input ? io_in_bits_data_15_mantissa : io_in_bits_data_0_mantissa;	
  wire       in_data_1_sign = io_in_bits_rev_input ? io_in_bits_data_14_sign : io_in_bits_data_1_sign;	
  wire [4:0] in_data_1_exp = io_in_bits_rev_input ? io_in_bits_data_14_exp : io_in_bits_data_1_exp;	
  wire [9:0] in_data_1_mantissa = io_in_bits_rev_input ? io_in_bits_data_14_mantissa : io_in_bits_data_1_mantissa;	
  wire       in_data_2_sign = io_in_bits_rev_input ? io_in_bits_data_13_sign : io_in_bits_data_2_sign;	
  wire [4:0] in_data_2_exp = io_in_bits_rev_input ? io_in_bits_data_13_exp : io_in_bits_data_2_exp;	
  wire [9:0] in_data_2_mantissa = io_in_bits_rev_input ? io_in_bits_data_13_mantissa : io_in_bits_data_2_mantissa;	
  wire       in_data_3_sign = io_in_bits_rev_input ? io_in_bits_data_12_sign : io_in_bits_data_3_sign;	
  wire [4:0] in_data_3_exp = io_in_bits_rev_input ? io_in_bits_data_12_exp : io_in_bits_data_3_exp;	
  wire [9:0] in_data_3_mantissa = io_in_bits_rev_input ? io_in_bits_data_12_mantissa : io_in_bits_data_3_mantissa;	
  wire       in_data_4_sign = io_in_bits_rev_input ? io_in_bits_data_11_sign : io_in_bits_data_4_sign;	
  wire [4:0] in_data_4_exp = io_in_bits_rev_input ? io_in_bits_data_11_exp : io_in_bits_data_4_exp;	
  wire [9:0] in_data_4_mantissa = io_in_bits_rev_input ? io_in_bits_data_11_mantissa : io_in_bits_data_4_mantissa;	
  wire       in_data_5_sign = io_in_bits_rev_input ? io_in_bits_data_10_sign : io_in_bits_data_5_sign;	
  wire [4:0] in_data_5_exp = io_in_bits_rev_input ? io_in_bits_data_10_exp : io_in_bits_data_5_exp;	
  wire [9:0] in_data_5_mantissa = io_in_bits_rev_input ? io_in_bits_data_10_mantissa : io_in_bits_data_5_mantissa;	
  wire       in_data_6_sign = io_in_bits_rev_input ? io_in_bits_data_9_sign : io_in_bits_data_6_sign;	
  wire [4:0] in_data_6_exp = io_in_bits_rev_input ? io_in_bits_data_9_exp : io_in_bits_data_6_exp;	
  wire [9:0] in_data_6_mantissa = io_in_bits_rev_input ? io_in_bits_data_9_mantissa : io_in_bits_data_6_mantissa;	
  wire       in_data_7_sign = io_in_bits_rev_input ? io_in_bits_data_8_sign : io_in_bits_data_7_sign;	
  wire [4:0] in_data_7_exp = io_in_bits_rev_input ? io_in_bits_data_8_exp : io_in_bits_data_7_exp;	
  wire [9:0] in_data_7_mantissa = io_in_bits_rev_input ? io_in_bits_data_8_mantissa : io_in_bits_data_7_mantissa;	
  wire       in_data_8_sign = io_in_bits_rev_input ? io_in_bits_data_7_sign : io_in_bits_data_8_sign;	
  wire [4:0] in_data_8_exp = io_in_bits_rev_input ? io_in_bits_data_7_exp : io_in_bits_data_8_exp;	
  wire [9:0] in_data_8_mantissa = io_in_bits_rev_input ? io_in_bits_data_7_mantissa : io_in_bits_data_8_mantissa;	
  wire       in_data_9_sign = io_in_bits_rev_input ? io_in_bits_data_6_sign : io_in_bits_data_9_sign;	
  wire [4:0] in_data_9_exp = io_in_bits_rev_input ? io_in_bits_data_6_exp : io_in_bits_data_9_exp;	
  wire [9:0] in_data_9_mantissa = io_in_bits_rev_input ? io_in_bits_data_6_mantissa : io_in_bits_data_9_mantissa;	
  wire       in_data_10_sign = io_in_bits_rev_input ? io_in_bits_data_5_sign : io_in_bits_data_10_sign;	
  wire [4:0] in_data_10_exp = io_in_bits_rev_input ? io_in_bits_data_5_exp : io_in_bits_data_10_exp;	
  wire [9:0] in_data_10_mantissa = io_in_bits_rev_input ? io_in_bits_data_5_mantissa : io_in_bits_data_10_mantissa;	
  wire       in_data_11_sign = io_in_bits_rev_input ? io_in_bits_data_4_sign : io_in_bits_data_11_sign;	
  wire [4:0] in_data_11_exp = io_in_bits_rev_input ? io_in_bits_data_4_exp : io_in_bits_data_11_exp;	
  wire [9:0] in_data_11_mantissa = io_in_bits_rev_input ? io_in_bits_data_4_mantissa : io_in_bits_data_11_mantissa;	
  wire       in_data_12_sign = io_in_bits_rev_input ? io_in_bits_data_3_sign : io_in_bits_data_12_sign;	
  wire [4:0] in_data_12_exp = io_in_bits_rev_input ? io_in_bits_data_3_exp : io_in_bits_data_12_exp;	
  wire [9:0] in_data_12_mantissa = io_in_bits_rev_input ? io_in_bits_data_3_mantissa : io_in_bits_data_12_mantissa;	
  wire       in_data_13_sign = io_in_bits_rev_input ? io_in_bits_data_2_sign : io_in_bits_data_13_sign;	
  wire [4:0] in_data_13_exp = io_in_bits_rev_input ? io_in_bits_data_2_exp : io_in_bits_data_13_exp;	
  wire [9:0] in_data_13_mantissa = io_in_bits_rev_input ? io_in_bits_data_2_mantissa : io_in_bits_data_13_mantissa;	
  wire       in_data_14_sign = io_in_bits_rev_input ? io_in_bits_data_1_sign : io_in_bits_data_14_sign;	
  wire [4:0] in_data_14_exp = io_in_bits_rev_input ? io_in_bits_data_1_exp : io_in_bits_data_14_exp;	
  wire [9:0] in_data_14_mantissa = io_in_bits_rev_input ? io_in_bits_data_1_mantissa : io_in_bits_data_14_mantissa;	
  wire       in_data_15_sign = io_in_bits_rev_input ? io_in_bits_data_0_sign : io_in_bits_data_15_sign;	
  wire [4:0] in_data_15_exp = io_in_bits_rev_input ? io_in_bits_data_0_exp : io_in_bits_data_15_exp;	
  wire [9:0] in_data_15_mantissa = io_in_bits_rev_input ? io_in_bits_data_0_mantissa : io_in_bits_data_15_mantissa;	
  reg        out_delay_r_sign;	
  reg  [4:0] out_delay_r_exp;	
  reg  [9:0] out_delay_r_mantissa;	
  reg        out_delay_r_1_sign;	
  reg  [4:0] out_delay_r_1_exp;	
  reg  [9:0] out_delay_r_1_mantissa;	
  reg        out_delay_r_2_sign;	
  reg  [4:0] out_delay_r_2_exp;	
  reg  [9:0] out_delay_r_2_mantissa;	
  reg        out_delay_r_3_sign;	
  reg  [4:0] out_delay_r_3_exp;	
  reg  [9:0] out_delay_r_3_mantissa;	
  reg        out_delay_r_4_sign;	
  reg  [4:0] out_delay_r_4_exp;	
  reg  [9:0] out_delay_r_4_mantissa;	
  reg        out_delay_r_5_sign;	
  reg  [4:0] out_delay_r_5_exp;	
  reg  [9:0] out_delay_r_5_mantissa;	
  reg        out_delay_r_6_sign;	
  reg  [4:0] out_delay_r_6_exp;	
  reg  [9:0] out_delay_r_6_mantissa;	
  reg        out_delay_r_7_sign;	
  reg  [4:0] out_delay_r_7_exp;	
  reg  [9:0] out_delay_r_7_mantissa;	
  reg        out_delay_r_8_sign;	
  reg  [4:0] out_delay_r_8_exp;	
  reg  [9:0] out_delay_r_8_mantissa;	
  reg        out_delay_r_9_sign;	
  reg  [4:0] out_delay_r_9_exp;	
  reg  [9:0] out_delay_r_9_mantissa;	
  reg        out_delay_r_10_sign;	
  reg  [4:0] out_delay_r_10_exp;	
  reg  [9:0] out_delay_r_10_mantissa;	
  reg        out_delay_r_11_sign;	
  reg  [4:0] out_delay_r_11_exp;	
  reg  [9:0] out_delay_r_11_mantissa;	
  reg        out_delay_r_12_sign;	
  reg  [4:0] out_delay_r_12_exp;	
  reg  [9:0] out_delay_r_12_mantissa;	
  reg        out_delay_r_13_sign;	
  reg  [4:0] out_delay_r_13_exp;	
  reg  [9:0] out_delay_r_13_mantissa;	
  reg        out_delay_r_14_sign;	
  reg  [4:0] out_delay_r_14_exp;	
  reg  [9:0] out_delay_r_14_mantissa;	
  reg        out_delay_r_15_sign;	
  reg  [4:0] out_delay_r_15_exp;	
  reg  [9:0] out_delay_r_15_mantissa;	
  reg        out_delay_r_16_sign;	
  reg  [4:0] out_delay_r_16_exp;	
  reg  [9:0] out_delay_r_16_mantissa;	
  reg        out_delay_r_17_sign;	
  reg  [4:0] out_delay_r_17_exp;	
  reg  [9:0] out_delay_r_17_mantissa;	
  reg        out_delay_r_18_sign;	
  reg  [4:0] out_delay_r_18_exp;	
  reg  [9:0] out_delay_r_18_mantissa;	
  reg        out_delay_r_19_sign;	
  reg  [4:0] out_delay_r_19_exp;	
  reg  [9:0] out_delay_r_19_mantissa;	
  reg        out_delay_r_20_sign;	
  reg  [4:0] out_delay_r_20_exp;	
  reg  [9:0] out_delay_r_20_mantissa;	
  reg        out_delay_r_21_sign;	
  reg  [4:0] out_delay_r_21_exp;	
  reg  [9:0] out_delay_r_21_mantissa;	
  reg        out_delay_r_22_sign;	
  reg  [4:0] out_delay_r_22_exp;	
  reg  [9:0] out_delay_r_22_mantissa;	
  reg        out_delay_r_23_sign;	
  reg  [4:0] out_delay_r_23_exp;	
  reg  [9:0] out_delay_r_23_mantissa;	
  reg        out_delay_r_24_sign;	
  reg  [4:0] out_delay_r_24_exp;	
  reg  [9:0] out_delay_r_24_mantissa;	
  reg        out_delay_r_25_sign;	
  reg  [4:0] out_delay_r_25_exp;	
  reg  [9:0] out_delay_r_25_mantissa;	
  reg        out_delay_r_26_sign;	
  reg  [4:0] out_delay_r_26_exp;	
  reg  [9:0] out_delay_r_26_mantissa;	
  reg        out_delay_r_27_sign;	
  reg  [4:0] out_delay_r_27_exp;	
  reg  [9:0] out_delay_r_27_mantissa;	
  reg        out_delay_r_28_sign;	
  reg  [4:0] out_delay_r_28_exp;	
  reg  [9:0] out_delay_r_28_mantissa;	
  reg        out_delay_r_29_sign;	
  reg  [4:0] out_delay_r_29_exp;	
  reg  [9:0] out_delay_r_29_mantissa;	
  reg        out_delay_r_30_sign;	
  reg  [4:0] out_delay_r_30_exp;	
  reg  [9:0] out_delay_r_30_mantissa;	
  reg        out_delay_r_31_sign;	
  reg  [4:0] out_delay_r_31_exp;	
  reg  [9:0] out_delay_r_31_mantissa;	
  reg        out_delay_r_32_sign;	
  reg  [4:0] out_delay_r_32_exp;	
  reg  [9:0] out_delay_r_32_mantissa;	
  reg        out_delay_r_33_sign;	
  reg  [4:0] out_delay_r_33_exp;	
  reg  [9:0] out_delay_r_33_mantissa;	
  reg        out_delay_r_34_sign;	
  reg  [4:0] out_delay_r_34_exp;	
  reg  [9:0] out_delay_r_34_mantissa;	
  reg        out_delay_r_35_sign;	
  reg  [4:0] out_delay_r_35_exp;	
  reg  [9:0] out_delay_r_35_mantissa;	
  reg        out_delay_r_36_sign;	
  reg  [4:0] out_delay_r_36_exp;	
  reg  [9:0] out_delay_r_36_mantissa;	
  reg        out_delay_r_37_sign;	
  reg  [4:0] out_delay_r_37_exp;	
  reg  [9:0] out_delay_r_37_mantissa;	
  reg        out_delay_r_38_sign;	
  reg  [4:0] out_delay_r_38_exp;	
  reg  [9:0] out_delay_r_38_mantissa;	
  reg        out_delay_r_39_sign;	
  reg  [4:0] out_delay_r_39_exp;	
  reg  [9:0] out_delay_r_39_mantissa;	
  reg        out_delay_r_40_sign;	
  reg  [4:0] out_delay_r_40_exp;	
  reg  [9:0] out_delay_r_40_mantissa;	
  reg        out_delay_r_41_sign;	
  reg  [4:0] out_delay_r_41_exp;	
  reg  [9:0] out_delay_r_41_mantissa;	
  reg        out_delay_r_42_sign;	
  reg  [4:0] out_delay_r_42_exp;	
  reg  [9:0] out_delay_r_42_mantissa;	
  reg        out_delay_r_43_sign;	
  reg  [4:0] out_delay_r_43_exp;	
  reg  [9:0] out_delay_r_43_mantissa;	
  reg        out_delay_r_44_sign;	
  reg  [4:0] out_delay_r_44_exp;	
  reg  [9:0] out_delay_r_44_mantissa;	
  reg        out_delay_r_45_sign;	
  reg  [4:0] out_delay_r_45_exp;	
  reg  [9:0] out_delay_r_45_mantissa;	
  reg        out_delay_r_46_sign;	
  reg  [4:0] out_delay_r_46_exp;	
  reg  [9:0] out_delay_r_46_mantissa;	
  reg        out_delay_r_47_sign;	
  reg  [4:0] out_delay_r_47_exp;	
  reg  [9:0] out_delay_r_47_mantissa;	
  reg        out_delay_r_48_sign;	
  reg  [4:0] out_delay_r_48_exp;	
  reg  [9:0] out_delay_r_48_mantissa;	
  reg        out_delay_r_49_sign;	
  reg  [4:0] out_delay_r_49_exp;	
  reg  [9:0] out_delay_r_49_mantissa;	
  reg        out_delay_r_50_sign;	
  reg  [4:0] out_delay_r_50_exp;	
  reg  [9:0] out_delay_r_50_mantissa;	
  reg        out_delay_r_51_sign;	
  reg  [4:0] out_delay_r_51_exp;	
  reg  [9:0] out_delay_r_51_mantissa;	
  reg        out_delay_r_52_sign;	
  reg  [4:0] out_delay_r_52_exp;	
  reg  [9:0] out_delay_r_52_mantissa;	
  reg        out_delay_r_53_sign;	
  reg  [4:0] out_delay_r_53_exp;	
  reg  [9:0] out_delay_r_53_mantissa;	
  reg        out_delay_r_54_sign;	
  reg  [4:0] out_delay_r_54_exp;	
  reg  [9:0] out_delay_r_54_mantissa;	
  reg        out_delay_r_55_sign;	
  reg  [4:0] out_delay_r_55_exp;	
  reg  [9:0] out_delay_r_55_mantissa;	
  reg        out_delay_r_56_sign;	
  reg  [4:0] out_delay_r_56_exp;	
  reg  [9:0] out_delay_r_56_mantissa;	
  reg        out_delay_r_57_sign;	
  reg  [4:0] out_delay_r_57_exp;	
  reg  [9:0] out_delay_r_57_mantissa;	
  reg        out_delay_r_58_sign;	
  reg  [4:0] out_delay_r_58_exp;	
  reg  [9:0] out_delay_r_58_mantissa;	
  reg        out_delay_r_59_sign;	
  reg  [4:0] out_delay_r_59_exp;	
  reg  [9:0] out_delay_r_59_mantissa;	
  reg        out_delay_r_60_sign;	
  reg  [4:0] out_delay_r_60_exp;	
  reg  [9:0] out_delay_r_60_mantissa;	
  reg        out_delay_r_61_sign;	
  reg  [4:0] out_delay_r_61_exp;	
  reg  [9:0] out_delay_r_61_mantissa;	
  reg        out_delay_r_62_sign;	
  reg  [4:0] out_delay_r_62_exp;	
  reg  [9:0] out_delay_r_62_mantissa;	
  reg        out_delay_r_63_sign;	
  reg  [4:0] out_delay_r_63_exp;	
  reg  [9:0] out_delay_r_63_mantissa;	
  reg        out_delay_r_64_sign;	
  reg  [4:0] out_delay_r_64_exp;	
  reg  [9:0] out_delay_r_64_mantissa;	
  reg        out_delay_r_65_sign;	
  reg  [4:0] out_delay_r_65_exp;	
  reg  [9:0] out_delay_r_65_mantissa;	
  reg        out_delay_r_66_sign;	
  reg  [4:0] out_delay_r_66_exp;	
  reg  [9:0] out_delay_r_66_mantissa;	
  reg        out_delay_r_67_sign;	
  reg  [4:0] out_delay_r_67_exp;	
  reg  [9:0] out_delay_r_67_mantissa;	
  reg        out_delay_r_68_sign;	
  reg  [4:0] out_delay_r_68_exp;	
  reg  [9:0] out_delay_r_68_mantissa;	
  reg        out_delay_r_69_sign;	
  reg  [4:0] out_delay_r_69_exp;	
  reg  [9:0] out_delay_r_69_mantissa;	
  reg        out_delay_r_70_sign;	
  reg  [4:0] out_delay_r_70_exp;	
  reg  [9:0] out_delay_r_70_mantissa;	
  reg        out_delay_r_71_sign;	
  reg  [4:0] out_delay_r_71_exp;	
  reg  [9:0] out_delay_r_71_mantissa;	
  reg        out_delay_r_72_sign;	
  reg  [4:0] out_delay_r_72_exp;	
  reg  [9:0] out_delay_r_72_mantissa;	
  reg        out_delay_r_73_sign;	
  reg  [4:0] out_delay_r_73_exp;	
  reg  [9:0] out_delay_r_73_mantissa;	
  reg        out_delay_r_74_sign;	
  reg  [4:0] out_delay_r_74_exp;	
  reg  [9:0] out_delay_r_74_mantissa;	
  reg        out_delay_r_75_sign;	
  reg  [4:0] out_delay_r_75_exp;	
  reg  [9:0] out_delay_r_75_mantissa;	
  reg        out_delay_r_76_sign;	
  reg  [4:0] out_delay_r_76_exp;	
  reg  [9:0] out_delay_r_76_mantissa;	
  reg        out_delay_r_77_sign;	
  reg  [4:0] out_delay_r_77_exp;	
  reg  [9:0] out_delay_r_77_mantissa;	
  reg        out_delay_r_78_sign;	
  reg  [4:0] out_delay_r_78_exp;	
  reg  [9:0] out_delay_r_78_mantissa;	
  reg        out_delay_r_79_sign;	
  reg  [4:0] out_delay_r_79_exp;	
  reg  [9:0] out_delay_r_79_mantissa;	
  reg        out_delay_r_80_sign;	
  reg  [4:0] out_delay_r_80_exp;	
  reg  [9:0] out_delay_r_80_mantissa;	
  reg        out_delay_r_81_sign;	
  reg  [4:0] out_delay_r_81_exp;	
  reg  [9:0] out_delay_r_81_mantissa;	
  reg        out_delay_r_82_sign;	
  reg  [4:0] out_delay_r_82_exp;	
  reg  [9:0] out_delay_r_82_mantissa;	
  reg        out_delay_r_83_sign;	
  reg  [4:0] out_delay_r_83_exp;	
  reg  [9:0] out_delay_r_83_mantissa;	
  reg        out_delay_r_84_sign;	
  reg  [4:0] out_delay_r_84_exp;	
  reg  [9:0] out_delay_r_84_mantissa;	
  reg        out_delay_r_85_sign;	
  reg  [4:0] out_delay_r_85_exp;	
  reg  [9:0] out_delay_r_85_mantissa;	
  reg        out_delay_r_86_sign;	
  reg  [4:0] out_delay_r_86_exp;	
  reg  [9:0] out_delay_r_86_mantissa;	
  reg        out_delay_r_87_sign;	
  reg  [4:0] out_delay_r_87_exp;	
  reg  [9:0] out_delay_r_87_mantissa;	
  reg        out_delay_r_88_sign;	
  reg  [4:0] out_delay_r_88_exp;	
  reg  [9:0] out_delay_r_88_mantissa;	
  reg        out_delay_r_89_sign;	
  reg  [4:0] out_delay_r_89_exp;	
  reg  [9:0] out_delay_r_89_mantissa;	
  reg        out_delay_r_90_sign;	
  reg  [4:0] out_delay_r_90_exp;	
  reg  [9:0] out_delay_r_90_mantissa;	
  reg        out_delay_r_91_sign;	
  reg  [4:0] out_delay_r_91_exp;	
  reg  [9:0] out_delay_r_91_mantissa;	
  reg        out_delay_r_92_sign;	
  reg  [4:0] out_delay_r_92_exp;	
  reg  [9:0] out_delay_r_92_mantissa;	
  reg        out_delay_r_93_sign;	
  reg  [4:0] out_delay_r_93_exp;	
  reg  [9:0] out_delay_r_93_mantissa;	
  reg        out_delay_r_94_sign;	
  reg  [4:0] out_delay_r_94_exp;	
  reg  [9:0] out_delay_r_94_mantissa;	
  reg        out_delay_r_95_sign;	
  reg  [4:0] out_delay_r_95_exp;	
  reg  [9:0] out_delay_r_95_mantissa;	
  reg        out_delay_r_96_sign;	
  reg  [4:0] out_delay_r_96_exp;	
  reg  [9:0] out_delay_r_96_mantissa;	
  reg        out_delay_r_97_sign;	
  reg  [4:0] out_delay_r_97_exp;	
  reg  [9:0] out_delay_r_97_mantissa;	
  reg        out_delay_r_98_sign;	
  reg  [4:0] out_delay_r_98_exp;	
  reg  [9:0] out_delay_r_98_mantissa;	
  reg        out_delay_r_99_sign;	
  reg  [4:0] out_delay_r_99_exp;	
  reg  [9:0] out_delay_r_99_mantissa;	
  reg        out_delay_r_100_sign;	
  reg  [4:0] out_delay_r_100_exp;	
  reg  [9:0] out_delay_r_100_mantissa;	
  reg        out_delay_r_101_sign;	
  reg  [4:0] out_delay_r_101_exp;	
  reg  [9:0] out_delay_r_101_mantissa;	
  reg        out_delay_r_102_sign;	
  reg  [4:0] out_delay_r_102_exp;	
  reg  [9:0] out_delay_r_102_mantissa;	
  reg        out_delay_r_103_sign;	
  reg  [4:0] out_delay_r_103_exp;	
  reg  [9:0] out_delay_r_103_mantissa;	
  reg        out_delay_r_104_sign;	
  reg  [4:0] out_delay_r_104_exp;	
  reg  [9:0] out_delay_r_104_mantissa;	
  reg        out_delay_r_105_sign;	
  reg  [4:0] out_delay_r_105_exp;	
  reg  [9:0] out_delay_r_105_mantissa;	
  reg        out_delay_r_106_sign;	
  reg  [4:0] out_delay_r_106_exp;	
  reg  [9:0] out_delay_r_106_mantissa;	
  reg        out_delay_r_107_sign;	
  reg  [4:0] out_delay_r_107_exp;	
  reg  [9:0] out_delay_r_107_mantissa;	
  reg        out_delay_r_108_sign;	
  reg  [4:0] out_delay_r_108_exp;	
  reg  [9:0] out_delay_r_108_mantissa;	
  reg        out_delay_r_109_sign;	
  reg  [4:0] out_delay_r_109_exp;	
  reg  [9:0] out_delay_r_109_mantissa;	
  reg        out_delay_r_110_sign;	
  reg  [4:0] out_delay_r_110_exp;	
  reg  [9:0] out_delay_r_110_mantissa;	
  reg        out_delay_r_111_sign;	
  reg  [4:0] out_delay_r_111_exp;	
  reg  [9:0] out_delay_r_111_mantissa;	
  reg        out_delay_r_112_sign;	
  reg  [4:0] out_delay_r_112_exp;	
  reg  [9:0] out_delay_r_112_mantissa;	
  reg        out_delay_r_113_sign;	
  reg  [4:0] out_delay_r_113_exp;	
  reg  [9:0] out_delay_r_113_mantissa;	
  reg        out_delay_r_114_sign;	
  reg  [4:0] out_delay_r_114_exp;	
  reg  [9:0] out_delay_r_114_mantissa;	
  reg        out_delay_r_115_sign;	
  reg  [4:0] out_delay_r_115_exp;	
  reg  [9:0] out_delay_r_115_mantissa;	
  reg        out_delay_r_116_sign;	
  reg  [4:0] out_delay_r_116_exp;	
  reg  [9:0] out_delay_r_116_mantissa;	
  reg        out_delay_r_117_sign;	
  reg  [4:0] out_delay_r_117_exp;	
  reg  [9:0] out_delay_r_117_mantissa;	
  reg        out_delay_r_118_sign;	
  reg  [4:0] out_delay_r_118_exp;	
  reg  [9:0] out_delay_r_118_mantissa;	
  reg        out_delay_r_119_sign;	
  reg  [4:0] out_delay_r_119_exp;	
  reg  [9:0] out_delay_r_119_mantissa;	
  wire       out_1_sign = delay ? out_delay_r_sign : in_data_1_sign;	
  wire [4:0] out_1_exp = delay ? out_delay_r_exp : in_data_1_exp;	
  wire [9:0] out_1_mantissa = delay ? out_delay_r_mantissa : in_data_1_mantissa;	
  wire       out_2_sign = delay ? out_delay_r_2_sign : in_data_2_sign;	
  wire [4:0] out_2_exp = delay ? out_delay_r_2_exp : in_data_2_exp;	
  wire [9:0] out_2_mantissa = delay ? out_delay_r_2_mantissa : in_data_2_mantissa;	
  wire       out_3_sign = delay ? out_delay_r_5_sign : in_data_3_sign;	
  wire [4:0] out_3_exp = delay ? out_delay_r_5_exp : in_data_3_exp;	
  wire [9:0] out_3_mantissa = delay ? out_delay_r_5_mantissa : in_data_3_mantissa;	
  wire       out_4_sign = delay ? out_delay_r_9_sign : in_data_4_sign;	
  wire [4:0] out_4_exp = delay ? out_delay_r_9_exp : in_data_4_exp;	
  wire [9:0] out_4_mantissa = delay ? out_delay_r_9_mantissa : in_data_4_mantissa;	
  wire       out_5_sign = delay ? out_delay_r_14_sign : in_data_5_sign;	
  wire [4:0] out_5_exp = delay ? out_delay_r_14_exp : in_data_5_exp;	
  wire [9:0] out_5_mantissa = delay ? out_delay_r_14_mantissa : in_data_5_mantissa;	
  wire       out_6_sign = delay ? out_delay_r_20_sign : in_data_6_sign;	
  wire [4:0] out_6_exp = delay ? out_delay_r_20_exp : in_data_6_exp;	
  wire [9:0] out_6_mantissa = delay ? out_delay_r_20_mantissa : in_data_6_mantissa;	
  wire       out_7_sign = delay ? out_delay_r_27_sign : in_data_7_sign;	
  wire [4:0] out_7_exp = delay ? out_delay_r_27_exp : in_data_7_exp;	
  wire [9:0] out_7_mantissa = delay ? out_delay_r_27_mantissa : in_data_7_mantissa;	
  wire       out_8_sign = delay ? out_delay_r_35_sign : in_data_8_sign;	
  wire [4:0] out_8_exp = delay ? out_delay_r_35_exp : in_data_8_exp;	
  wire [9:0] out_8_mantissa = delay ? out_delay_r_35_mantissa : in_data_8_mantissa;	
  wire       out_9_sign = delay ? out_delay_r_44_sign : in_data_9_sign;	
  wire [4:0] out_9_exp = delay ? out_delay_r_44_exp : in_data_9_exp;	
  wire [9:0] out_9_mantissa = delay ? out_delay_r_44_mantissa : in_data_9_mantissa;	
  wire       out_10_sign = delay ? out_delay_r_54_sign : in_data_10_sign;	
  wire [4:0] out_10_exp = delay ? out_delay_r_54_exp : in_data_10_exp;	
  wire [9:0] out_10_mantissa = delay ? out_delay_r_54_mantissa : in_data_10_mantissa;	
  wire       out_11_sign = delay ? out_delay_r_65_sign : in_data_11_sign;	
  wire [4:0] out_11_exp = delay ? out_delay_r_65_exp : in_data_11_exp;	
  wire [9:0] out_11_mantissa = delay ? out_delay_r_65_mantissa : in_data_11_mantissa;	
  wire       out_12_sign = delay ? out_delay_r_77_sign : in_data_12_sign;	
  wire [4:0] out_12_exp = delay ? out_delay_r_77_exp : in_data_12_exp;	
  wire [9:0] out_12_mantissa = delay ? out_delay_r_77_mantissa : in_data_12_mantissa;	
  wire       out_13_sign = delay ? out_delay_r_90_sign : in_data_13_sign;	
  wire [4:0] out_13_exp = delay ? out_delay_r_90_exp : in_data_13_exp;	
  wire [9:0] out_13_mantissa = delay ? out_delay_r_90_mantissa : in_data_13_mantissa;	
  wire       out_14_sign = delay ? out_delay_r_104_sign : in_data_14_sign;	
  wire [4:0] out_14_exp = delay ? out_delay_r_104_exp : in_data_14_exp;	
  wire [9:0] out_14_mantissa = delay ? out_delay_r_104_mantissa : in_data_14_mantissa;	
  wire       out_15_sign = delay ? out_delay_r_119_sign : in_data_15_sign;	
  wire [4:0] out_15_exp = delay ? out_delay_r_119_exp : in_data_15_exp;	
  wire [9:0] out_15_mantissa = delay ? out_delay_r_119_mantissa : in_data_15_mantissa;	
  always @(posedge clock) begin	
    if (io_in_valid) begin	
      rev_out_r <= io_in_bits_rev_output;	
      delay_r <= io_in_bits_delay_output;	
    end
    out_delay_r_sign <= in_data_1_sign;	
    out_delay_r_exp <= in_data_1_exp;	
    out_delay_r_mantissa <= in_data_1_mantissa;	
    out_delay_r_1_sign <= in_data_2_sign;	
    out_delay_r_1_exp <= in_data_2_exp;	
    out_delay_r_1_mantissa <= in_data_2_mantissa;	
    out_delay_r_2_sign <= out_delay_r_1_sign;	
    out_delay_r_2_exp <= out_delay_r_1_exp;	
    out_delay_r_2_mantissa <= out_delay_r_1_mantissa;	
    out_delay_r_3_sign <= in_data_3_sign;	
    out_delay_r_3_exp <= in_data_3_exp;	
    out_delay_r_3_mantissa <= in_data_3_mantissa;	
    out_delay_r_4_sign <= out_delay_r_3_sign;	
    out_delay_r_4_exp <= out_delay_r_3_exp;	
    out_delay_r_4_mantissa <= out_delay_r_3_mantissa;	
    out_delay_r_5_sign <= out_delay_r_4_sign;	
    out_delay_r_5_exp <= out_delay_r_4_exp;	
    out_delay_r_5_mantissa <= out_delay_r_4_mantissa;	
    out_delay_r_6_sign <= in_data_4_sign;	
    out_delay_r_6_exp <= in_data_4_exp;	
    out_delay_r_6_mantissa <= in_data_4_mantissa;	
    out_delay_r_7_sign <= out_delay_r_6_sign;	
    out_delay_r_7_exp <= out_delay_r_6_exp;	
    out_delay_r_7_mantissa <= out_delay_r_6_mantissa;	
    out_delay_r_8_sign <= out_delay_r_7_sign;	
    out_delay_r_8_exp <= out_delay_r_7_exp;	
    out_delay_r_8_mantissa <= out_delay_r_7_mantissa;	
    out_delay_r_9_sign <= out_delay_r_8_sign;	
    out_delay_r_9_exp <= out_delay_r_8_exp;	
    out_delay_r_9_mantissa <= out_delay_r_8_mantissa;	
    out_delay_r_10_sign <= in_data_5_sign;	
    out_delay_r_10_exp <= in_data_5_exp;	
    out_delay_r_10_mantissa <= in_data_5_mantissa;	
    out_delay_r_11_sign <= out_delay_r_10_sign;	
    out_delay_r_11_exp <= out_delay_r_10_exp;	
    out_delay_r_11_mantissa <= out_delay_r_10_mantissa;	
    out_delay_r_12_sign <= out_delay_r_11_sign;	
    out_delay_r_12_exp <= out_delay_r_11_exp;	
    out_delay_r_12_mantissa <= out_delay_r_11_mantissa;	
    out_delay_r_13_sign <= out_delay_r_12_sign;	
    out_delay_r_13_exp <= out_delay_r_12_exp;	
    out_delay_r_13_mantissa <= out_delay_r_12_mantissa;	
    out_delay_r_14_sign <= out_delay_r_13_sign;	
    out_delay_r_14_exp <= out_delay_r_13_exp;	
    out_delay_r_14_mantissa <= out_delay_r_13_mantissa;	
    out_delay_r_15_sign <= in_data_6_sign;	
    out_delay_r_15_exp <= in_data_6_exp;	
    out_delay_r_15_mantissa <= in_data_6_mantissa;	
    out_delay_r_16_sign <= out_delay_r_15_sign;	
    out_delay_r_16_exp <= out_delay_r_15_exp;	
    out_delay_r_16_mantissa <= out_delay_r_15_mantissa;	
    out_delay_r_17_sign <= out_delay_r_16_sign;	
    out_delay_r_17_exp <= out_delay_r_16_exp;	
    out_delay_r_17_mantissa <= out_delay_r_16_mantissa;	
    out_delay_r_18_sign <= out_delay_r_17_sign;	
    out_delay_r_18_exp <= out_delay_r_17_exp;	
    out_delay_r_18_mantissa <= out_delay_r_17_mantissa;	
    out_delay_r_19_sign <= out_delay_r_18_sign;	
    out_delay_r_19_exp <= out_delay_r_18_exp;	
    out_delay_r_19_mantissa <= out_delay_r_18_mantissa;	
    out_delay_r_20_sign <= out_delay_r_19_sign;	
    out_delay_r_20_exp <= out_delay_r_19_exp;	
    out_delay_r_20_mantissa <= out_delay_r_19_mantissa;	
    out_delay_r_21_sign <= in_data_7_sign;	
    out_delay_r_21_exp <= in_data_7_exp;	
    out_delay_r_21_mantissa <= in_data_7_mantissa;	
    out_delay_r_22_sign <= out_delay_r_21_sign;	
    out_delay_r_22_exp <= out_delay_r_21_exp;	
    out_delay_r_22_mantissa <= out_delay_r_21_mantissa;	
    out_delay_r_23_sign <= out_delay_r_22_sign;	
    out_delay_r_23_exp <= out_delay_r_22_exp;	
    out_delay_r_23_mantissa <= out_delay_r_22_mantissa;	
    out_delay_r_24_sign <= out_delay_r_23_sign;	
    out_delay_r_24_exp <= out_delay_r_23_exp;	
    out_delay_r_24_mantissa <= out_delay_r_23_mantissa;	
    out_delay_r_25_sign <= out_delay_r_24_sign;	
    out_delay_r_25_exp <= out_delay_r_24_exp;	
    out_delay_r_25_mantissa <= out_delay_r_24_mantissa;	
    out_delay_r_26_sign <= out_delay_r_25_sign;	
    out_delay_r_26_exp <= out_delay_r_25_exp;	
    out_delay_r_26_mantissa <= out_delay_r_25_mantissa;	
    out_delay_r_27_sign <= out_delay_r_26_sign;	
    out_delay_r_27_exp <= out_delay_r_26_exp;	
    out_delay_r_27_mantissa <= out_delay_r_26_mantissa;	
    out_delay_r_28_sign <= in_data_8_sign;	
    out_delay_r_28_exp <= in_data_8_exp;	
    out_delay_r_28_mantissa <= in_data_8_mantissa;	
    out_delay_r_29_sign <= out_delay_r_28_sign;	
    out_delay_r_29_exp <= out_delay_r_28_exp;	
    out_delay_r_29_mantissa <= out_delay_r_28_mantissa;	
    out_delay_r_30_sign <= out_delay_r_29_sign;	
    out_delay_r_30_exp <= out_delay_r_29_exp;	
    out_delay_r_30_mantissa <= out_delay_r_29_mantissa;	
    out_delay_r_31_sign <= out_delay_r_30_sign;	
    out_delay_r_31_exp <= out_delay_r_30_exp;	
    out_delay_r_31_mantissa <= out_delay_r_30_mantissa;	
    out_delay_r_32_sign <= out_delay_r_31_sign;	
    out_delay_r_32_exp <= out_delay_r_31_exp;	
    out_delay_r_32_mantissa <= out_delay_r_31_mantissa;	
    out_delay_r_33_sign <= out_delay_r_32_sign;	
    out_delay_r_33_exp <= out_delay_r_32_exp;	
    out_delay_r_33_mantissa <= out_delay_r_32_mantissa;	
    out_delay_r_34_sign <= out_delay_r_33_sign;	
    out_delay_r_34_exp <= out_delay_r_33_exp;	
    out_delay_r_34_mantissa <= out_delay_r_33_mantissa;	
    out_delay_r_35_sign <= out_delay_r_34_sign;	
    out_delay_r_35_exp <= out_delay_r_34_exp;	
    out_delay_r_35_mantissa <= out_delay_r_34_mantissa;	
    out_delay_r_36_sign <= in_data_9_sign;	
    out_delay_r_36_exp <= in_data_9_exp;	
    out_delay_r_36_mantissa <= in_data_9_mantissa;	
    out_delay_r_37_sign <= out_delay_r_36_sign;	
    out_delay_r_37_exp <= out_delay_r_36_exp;	
    out_delay_r_37_mantissa <= out_delay_r_36_mantissa;	
    out_delay_r_38_sign <= out_delay_r_37_sign;	
    out_delay_r_38_exp <= out_delay_r_37_exp;	
    out_delay_r_38_mantissa <= out_delay_r_37_mantissa;	
    out_delay_r_39_sign <= out_delay_r_38_sign;	
    out_delay_r_39_exp <= out_delay_r_38_exp;	
    out_delay_r_39_mantissa <= out_delay_r_38_mantissa;	
    out_delay_r_40_sign <= out_delay_r_39_sign;	
    out_delay_r_40_exp <= out_delay_r_39_exp;	
    out_delay_r_40_mantissa <= out_delay_r_39_mantissa;	
    out_delay_r_41_sign <= out_delay_r_40_sign;	
    out_delay_r_41_exp <= out_delay_r_40_exp;	
    out_delay_r_41_mantissa <= out_delay_r_40_mantissa;	
    out_delay_r_42_sign <= out_delay_r_41_sign;	
    out_delay_r_42_exp <= out_delay_r_41_exp;	
    out_delay_r_42_mantissa <= out_delay_r_41_mantissa;	
    out_delay_r_43_sign <= out_delay_r_42_sign;	
    out_delay_r_43_exp <= out_delay_r_42_exp;	
    out_delay_r_43_mantissa <= out_delay_r_42_mantissa;	
    out_delay_r_44_sign <= out_delay_r_43_sign;	
    out_delay_r_44_exp <= out_delay_r_43_exp;	
    out_delay_r_44_mantissa <= out_delay_r_43_mantissa;	
    out_delay_r_45_sign <= in_data_10_sign;	
    out_delay_r_45_exp <= in_data_10_exp;	
    out_delay_r_45_mantissa <= in_data_10_mantissa;	
    out_delay_r_46_sign <= out_delay_r_45_sign;	
    out_delay_r_46_exp <= out_delay_r_45_exp;	
    out_delay_r_46_mantissa <= out_delay_r_45_mantissa;	
    out_delay_r_47_sign <= out_delay_r_46_sign;	
    out_delay_r_47_exp <= out_delay_r_46_exp;	
    out_delay_r_47_mantissa <= out_delay_r_46_mantissa;	
    out_delay_r_48_sign <= out_delay_r_47_sign;	
    out_delay_r_48_exp <= out_delay_r_47_exp;	
    out_delay_r_48_mantissa <= out_delay_r_47_mantissa;	
    out_delay_r_49_sign <= out_delay_r_48_sign;	
    out_delay_r_49_exp <= out_delay_r_48_exp;	
    out_delay_r_49_mantissa <= out_delay_r_48_mantissa;	
    out_delay_r_50_sign <= out_delay_r_49_sign;	
    out_delay_r_50_exp <= out_delay_r_49_exp;	
    out_delay_r_50_mantissa <= out_delay_r_49_mantissa;	
    out_delay_r_51_sign <= out_delay_r_50_sign;	
    out_delay_r_51_exp <= out_delay_r_50_exp;	
    out_delay_r_51_mantissa <= out_delay_r_50_mantissa;	
    out_delay_r_52_sign <= out_delay_r_51_sign;	
    out_delay_r_52_exp <= out_delay_r_51_exp;	
    out_delay_r_52_mantissa <= out_delay_r_51_mantissa;	
    out_delay_r_53_sign <= out_delay_r_52_sign;	
    out_delay_r_53_exp <= out_delay_r_52_exp;	
    out_delay_r_53_mantissa <= out_delay_r_52_mantissa;	
    out_delay_r_54_sign <= out_delay_r_53_sign;	
    out_delay_r_54_exp <= out_delay_r_53_exp;	
    out_delay_r_54_mantissa <= out_delay_r_53_mantissa;	
    out_delay_r_55_sign <= in_data_11_sign;	
    out_delay_r_55_exp <= in_data_11_exp;	
    out_delay_r_55_mantissa <= in_data_11_mantissa;	
    out_delay_r_56_sign <= out_delay_r_55_sign;	
    out_delay_r_56_exp <= out_delay_r_55_exp;	
    out_delay_r_56_mantissa <= out_delay_r_55_mantissa;	
    out_delay_r_57_sign <= out_delay_r_56_sign;	
    out_delay_r_57_exp <= out_delay_r_56_exp;	
    out_delay_r_57_mantissa <= out_delay_r_56_mantissa;	
    out_delay_r_58_sign <= out_delay_r_57_sign;	
    out_delay_r_58_exp <= out_delay_r_57_exp;	
    out_delay_r_58_mantissa <= out_delay_r_57_mantissa;	
    out_delay_r_59_sign <= out_delay_r_58_sign;	
    out_delay_r_59_exp <= out_delay_r_58_exp;	
    out_delay_r_59_mantissa <= out_delay_r_58_mantissa;	
    out_delay_r_60_sign <= out_delay_r_59_sign;	
    out_delay_r_60_exp <= out_delay_r_59_exp;	
    out_delay_r_60_mantissa <= out_delay_r_59_mantissa;	
    out_delay_r_61_sign <= out_delay_r_60_sign;	
    out_delay_r_61_exp <= out_delay_r_60_exp;	
    out_delay_r_61_mantissa <= out_delay_r_60_mantissa;	
    out_delay_r_62_sign <= out_delay_r_61_sign;	
    out_delay_r_62_exp <= out_delay_r_61_exp;	
    out_delay_r_62_mantissa <= out_delay_r_61_mantissa;	
    out_delay_r_63_sign <= out_delay_r_62_sign;	
    out_delay_r_63_exp <= out_delay_r_62_exp;	
    out_delay_r_63_mantissa <= out_delay_r_62_mantissa;	
    out_delay_r_64_sign <= out_delay_r_63_sign;	
    out_delay_r_64_exp <= out_delay_r_63_exp;	
    out_delay_r_64_mantissa <= out_delay_r_63_mantissa;	
    out_delay_r_65_sign <= out_delay_r_64_sign;	
    out_delay_r_65_exp <= out_delay_r_64_exp;	
    out_delay_r_65_mantissa <= out_delay_r_64_mantissa;	
    out_delay_r_66_sign <= in_data_12_sign;	
    out_delay_r_66_exp <= in_data_12_exp;	
    out_delay_r_66_mantissa <= in_data_12_mantissa;	
    out_delay_r_67_sign <= out_delay_r_66_sign;	
    out_delay_r_67_exp <= out_delay_r_66_exp;	
    out_delay_r_67_mantissa <= out_delay_r_66_mantissa;	
    out_delay_r_68_sign <= out_delay_r_67_sign;	
    out_delay_r_68_exp <= out_delay_r_67_exp;	
    out_delay_r_68_mantissa <= out_delay_r_67_mantissa;	
    out_delay_r_69_sign <= out_delay_r_68_sign;	
    out_delay_r_69_exp <= out_delay_r_68_exp;	
    out_delay_r_69_mantissa <= out_delay_r_68_mantissa;	
    out_delay_r_70_sign <= out_delay_r_69_sign;	
    out_delay_r_70_exp <= out_delay_r_69_exp;	
    out_delay_r_70_mantissa <= out_delay_r_69_mantissa;	
    out_delay_r_71_sign <= out_delay_r_70_sign;	
    out_delay_r_71_exp <= out_delay_r_70_exp;	
    out_delay_r_71_mantissa <= out_delay_r_70_mantissa;	
    out_delay_r_72_sign <= out_delay_r_71_sign;	
    out_delay_r_72_exp <= out_delay_r_71_exp;	
    out_delay_r_72_mantissa <= out_delay_r_71_mantissa;	
    out_delay_r_73_sign <= out_delay_r_72_sign;	
    out_delay_r_73_exp <= out_delay_r_72_exp;	
    out_delay_r_73_mantissa <= out_delay_r_72_mantissa;	
    out_delay_r_74_sign <= out_delay_r_73_sign;	
    out_delay_r_74_exp <= out_delay_r_73_exp;	
    out_delay_r_74_mantissa <= out_delay_r_73_mantissa;	
    out_delay_r_75_sign <= out_delay_r_74_sign;	
    out_delay_r_75_exp <= out_delay_r_74_exp;	
    out_delay_r_75_mantissa <= out_delay_r_74_mantissa;	
    out_delay_r_76_sign <= out_delay_r_75_sign;	
    out_delay_r_76_exp <= out_delay_r_75_exp;	
    out_delay_r_76_mantissa <= out_delay_r_75_mantissa;	
    out_delay_r_77_sign <= out_delay_r_76_sign;	
    out_delay_r_77_exp <= out_delay_r_76_exp;	
    out_delay_r_77_mantissa <= out_delay_r_76_mantissa;	
    out_delay_r_78_sign <= in_data_13_sign;	
    out_delay_r_78_exp <= in_data_13_exp;	
    out_delay_r_78_mantissa <= in_data_13_mantissa;	
    out_delay_r_79_sign <= out_delay_r_78_sign;	
    out_delay_r_79_exp <= out_delay_r_78_exp;	
    out_delay_r_79_mantissa <= out_delay_r_78_mantissa;	
    out_delay_r_80_sign <= out_delay_r_79_sign;	
    out_delay_r_80_exp <= out_delay_r_79_exp;	
    out_delay_r_80_mantissa <= out_delay_r_79_mantissa;	
    out_delay_r_81_sign <= out_delay_r_80_sign;	
    out_delay_r_81_exp <= out_delay_r_80_exp;	
    out_delay_r_81_mantissa <= out_delay_r_80_mantissa;	
    out_delay_r_82_sign <= out_delay_r_81_sign;	
    out_delay_r_82_exp <= out_delay_r_81_exp;	
    out_delay_r_82_mantissa <= out_delay_r_81_mantissa;	
    out_delay_r_83_sign <= out_delay_r_82_sign;	
    out_delay_r_83_exp <= out_delay_r_82_exp;	
    out_delay_r_83_mantissa <= out_delay_r_82_mantissa;	
    out_delay_r_84_sign <= out_delay_r_83_sign;	
    out_delay_r_84_exp <= out_delay_r_83_exp;	
    out_delay_r_84_mantissa <= out_delay_r_83_mantissa;	
    out_delay_r_85_sign <= out_delay_r_84_sign;	
    out_delay_r_85_exp <= out_delay_r_84_exp;	
    out_delay_r_85_mantissa <= out_delay_r_84_mantissa;	
    out_delay_r_86_sign <= out_delay_r_85_sign;	
    out_delay_r_86_exp <= out_delay_r_85_exp;	
    out_delay_r_86_mantissa <= out_delay_r_85_mantissa;	
    out_delay_r_87_sign <= out_delay_r_86_sign;	
    out_delay_r_87_exp <= out_delay_r_86_exp;	
    out_delay_r_87_mantissa <= out_delay_r_86_mantissa;	
    out_delay_r_88_sign <= out_delay_r_87_sign;	
    out_delay_r_88_exp <= out_delay_r_87_exp;	
    out_delay_r_88_mantissa <= out_delay_r_87_mantissa;	
    out_delay_r_89_sign <= out_delay_r_88_sign;	
    out_delay_r_89_exp <= out_delay_r_88_exp;	
    out_delay_r_89_mantissa <= out_delay_r_88_mantissa;	
    out_delay_r_90_sign <= out_delay_r_89_sign;	
    out_delay_r_90_exp <= out_delay_r_89_exp;	
    out_delay_r_90_mantissa <= out_delay_r_89_mantissa;	
    out_delay_r_91_sign <= in_data_14_sign;	
    out_delay_r_91_exp <= in_data_14_exp;	
    out_delay_r_91_mantissa <= in_data_14_mantissa;	
    out_delay_r_92_sign <= out_delay_r_91_sign;	
    out_delay_r_92_exp <= out_delay_r_91_exp;	
    out_delay_r_92_mantissa <= out_delay_r_91_mantissa;	
    out_delay_r_93_sign <= out_delay_r_92_sign;	
    out_delay_r_93_exp <= out_delay_r_92_exp;	
    out_delay_r_93_mantissa <= out_delay_r_92_mantissa;	
    out_delay_r_94_sign <= out_delay_r_93_sign;	
    out_delay_r_94_exp <= out_delay_r_93_exp;	
    out_delay_r_94_mantissa <= out_delay_r_93_mantissa;	
    out_delay_r_95_sign <= out_delay_r_94_sign;	
    out_delay_r_95_exp <= out_delay_r_94_exp;	
    out_delay_r_95_mantissa <= out_delay_r_94_mantissa;	
    out_delay_r_96_sign <= out_delay_r_95_sign;	
    out_delay_r_96_exp <= out_delay_r_95_exp;	
    out_delay_r_96_mantissa <= out_delay_r_95_mantissa;	
    out_delay_r_97_sign <= out_delay_r_96_sign;	
    out_delay_r_97_exp <= out_delay_r_96_exp;	
    out_delay_r_97_mantissa <= out_delay_r_96_mantissa;	
    out_delay_r_98_sign <= out_delay_r_97_sign;	
    out_delay_r_98_exp <= out_delay_r_97_exp;	
    out_delay_r_98_mantissa <= out_delay_r_97_mantissa;	
    out_delay_r_99_sign <= out_delay_r_98_sign;	
    out_delay_r_99_exp <= out_delay_r_98_exp;	
    out_delay_r_99_mantissa <= out_delay_r_98_mantissa;	
    out_delay_r_100_sign <= out_delay_r_99_sign;	
    out_delay_r_100_exp <= out_delay_r_99_exp;	
    out_delay_r_100_mantissa <= out_delay_r_99_mantissa;	
    out_delay_r_101_sign <= out_delay_r_100_sign;	
    out_delay_r_101_exp <= out_delay_r_100_exp;	
    out_delay_r_101_mantissa <= out_delay_r_100_mantissa;	
    out_delay_r_102_sign <= out_delay_r_101_sign;	
    out_delay_r_102_exp <= out_delay_r_101_exp;	
    out_delay_r_102_mantissa <= out_delay_r_101_mantissa;	
    out_delay_r_103_sign <= out_delay_r_102_sign;	
    out_delay_r_103_exp <= out_delay_r_102_exp;	
    out_delay_r_103_mantissa <= out_delay_r_102_mantissa;	
    out_delay_r_104_sign <= out_delay_r_103_sign;	
    out_delay_r_104_exp <= out_delay_r_103_exp;	
    out_delay_r_104_mantissa <= out_delay_r_103_mantissa;	
    out_delay_r_105_sign <= in_data_15_sign;	
    out_delay_r_105_exp <= in_data_15_exp;	
    out_delay_r_105_mantissa <= in_data_15_mantissa;	
    out_delay_r_106_sign <= out_delay_r_105_sign;	
    out_delay_r_106_exp <= out_delay_r_105_exp;	
    out_delay_r_106_mantissa <= out_delay_r_105_mantissa;	
    out_delay_r_107_sign <= out_delay_r_106_sign;	
    out_delay_r_107_exp <= out_delay_r_106_exp;	
    out_delay_r_107_mantissa <= out_delay_r_106_mantissa;	
    out_delay_r_108_sign <= out_delay_r_107_sign;	
    out_delay_r_108_exp <= out_delay_r_107_exp;	
    out_delay_r_108_mantissa <= out_delay_r_107_mantissa;	
    out_delay_r_109_sign <= out_delay_r_108_sign;	
    out_delay_r_109_exp <= out_delay_r_108_exp;	
    out_delay_r_109_mantissa <= out_delay_r_108_mantissa;	
    out_delay_r_110_sign <= out_delay_r_109_sign;	
    out_delay_r_110_exp <= out_delay_r_109_exp;	
    out_delay_r_110_mantissa <= out_delay_r_109_mantissa;	
    out_delay_r_111_sign <= out_delay_r_110_sign;	
    out_delay_r_111_exp <= out_delay_r_110_exp;	
    out_delay_r_111_mantissa <= out_delay_r_110_mantissa;	
    out_delay_r_112_sign <= out_delay_r_111_sign;	
    out_delay_r_112_exp <= out_delay_r_111_exp;	
    out_delay_r_112_mantissa <= out_delay_r_111_mantissa;	
    out_delay_r_113_sign <= out_delay_r_112_sign;	
    out_delay_r_113_exp <= out_delay_r_112_exp;	
    out_delay_r_113_mantissa <= out_delay_r_112_mantissa;	
    out_delay_r_114_sign <= out_delay_r_113_sign;	
    out_delay_r_114_exp <= out_delay_r_113_exp;	
    out_delay_r_114_mantissa <= out_delay_r_113_mantissa;	
    out_delay_r_115_sign <= out_delay_r_114_sign;	
    out_delay_r_115_exp <= out_delay_r_114_exp;	
    out_delay_r_115_mantissa <= out_delay_r_114_mantissa;	
    out_delay_r_116_sign <= out_delay_r_115_sign;	
    out_delay_r_116_exp <= out_delay_r_115_exp;	
    out_delay_r_116_mantissa <= out_delay_r_115_mantissa;	
    out_delay_r_117_sign <= out_delay_r_116_sign;	
    out_delay_r_117_exp <= out_delay_r_116_exp;	
    out_delay_r_117_mantissa <= out_delay_r_116_mantissa;	
    out_delay_r_118_sign <= out_delay_r_117_sign;	
    out_delay_r_118_exp <= out_delay_r_117_exp;	
    out_delay_r_118_mantissa <= out_delay_r_117_mantissa;	
    out_delay_r_119_sign <= out_delay_r_118_sign;	
    out_delay_r_119_exp <= out_delay_r_118_exp;	
    out_delay_r_119_mantissa <= out_delay_r_118_mantissa;	
  end // always @(posedge)
  
  assign io_out_0_sign = rev_out ? out_15_sign : in_data_0_sign;	
  assign io_out_0_exp = rev_out ? out_15_exp : in_data_0_exp;	
  assign io_out_0_mantissa = rev_out ? out_15_mantissa : in_data_0_mantissa;	
  assign io_out_1_sign = rev_out ? out_14_sign : out_1_sign;	
  assign io_out_1_exp = rev_out ? out_14_exp : out_1_exp;	
  assign io_out_1_mantissa = rev_out ? out_14_mantissa : out_1_mantissa;	
  assign io_out_2_sign = rev_out ? out_13_sign : out_2_sign;	
  assign io_out_2_exp = rev_out ? out_13_exp : out_2_exp;	
  assign io_out_2_mantissa = rev_out ? out_13_mantissa : out_2_mantissa;	
  assign io_out_3_sign = rev_out ? out_12_sign : out_3_sign;	
  assign io_out_3_exp = rev_out ? out_12_exp : out_3_exp;	
  assign io_out_3_mantissa = rev_out ? out_12_mantissa : out_3_mantissa;	
  assign io_out_4_sign = rev_out ? out_11_sign : out_4_sign;	
  assign io_out_4_exp = rev_out ? out_11_exp : out_4_exp;	
  assign io_out_4_mantissa = rev_out ? out_11_mantissa : out_4_mantissa;	
  assign io_out_5_sign = rev_out ? out_10_sign : out_5_sign;	
  assign io_out_5_exp = rev_out ? out_10_exp : out_5_exp;	
  assign io_out_5_mantissa = rev_out ? out_10_mantissa : out_5_mantissa;	
  assign io_out_6_sign = rev_out ? out_9_sign : out_6_sign;	
  assign io_out_6_exp = rev_out ? out_9_exp : out_6_exp;	
  assign io_out_6_mantissa = rev_out ? out_9_mantissa : out_6_mantissa;	
  assign io_out_7_sign = rev_out ? out_8_sign : out_7_sign;	
  assign io_out_7_exp = rev_out ? out_8_exp : out_7_exp;	
  assign io_out_7_mantissa = rev_out ? out_8_mantissa : out_7_mantissa;	
  assign io_out_8_sign = rev_out ? out_7_sign : out_8_sign;	
  assign io_out_8_exp = rev_out ? out_7_exp : out_8_exp;	
  assign io_out_8_mantissa = rev_out ? out_7_mantissa : out_8_mantissa;	
  assign io_out_9_sign = rev_out ? out_6_sign : out_9_sign;	
  assign io_out_9_exp = rev_out ? out_6_exp : out_9_exp;	
  assign io_out_9_mantissa = rev_out ? out_6_mantissa : out_9_mantissa;	
  assign io_out_10_sign = rev_out ? out_5_sign : out_10_sign;	
  assign io_out_10_exp = rev_out ? out_5_exp : out_10_exp;	
  assign io_out_10_mantissa = rev_out ? out_5_mantissa : out_10_mantissa;	
  assign io_out_11_sign = rev_out ? out_4_sign : out_11_sign;	
  assign io_out_11_exp = rev_out ? out_4_exp : out_11_exp;	
  assign io_out_11_mantissa = rev_out ? out_4_mantissa : out_11_mantissa;	
  assign io_out_12_sign = rev_out ? out_3_sign : out_12_sign;	
  assign io_out_12_exp = rev_out ? out_3_exp : out_12_exp;	
  assign io_out_12_mantissa = rev_out ? out_3_mantissa : out_12_mantissa;	
  assign io_out_13_sign = rev_out ? out_2_sign : out_13_sign;	
  assign io_out_13_exp = rev_out ? out_2_exp : out_13_exp;	
  assign io_out_13_mantissa = rev_out ? out_2_mantissa : out_13_mantissa;	
  assign io_out_14_sign = rev_out ? out_1_sign : out_14_sign;	
  assign io_out_14_exp = rev_out ? out_1_exp : out_14_exp;	
  assign io_out_14_mantissa = rev_out ? out_1_mantissa : out_14_mantissa;	
  assign io_out_15_sign = rev_out ? in_data_0_sign : out_15_sign;	
  assign io_out_15_exp = rev_out ? in_data_0_exp : out_15_exp;	
  assign io_out_15_mantissa = rev_out ? in_data_0_mantissa : out_15_mantissa;	
endmodule

