`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:53:14 01/26/2020 
// Design Name: 
// Module Name:    floatToFix 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module floatToFix(
    input clk,
    input [4:0] fixpointpos,
    input [31:0] targetnumber,
    output reg[31:0] result
    );
reg sign;
reg [31:0] answer;
reg [31:0] pos_val;
reg [7:0] biased_exponent;
reg [22:0] fraction;
reg [23:0] implied_fraction;
integer i;
integer remove;
integer zeros;
always @ (posedge clk)
begin
	if(targetnumber == 32'h80000000) begin
		result = 32'h00000000;
	end
	else if (targetnumber == 32'h00000000) begin
		result = 32'h00000000;
	end
	else begin
		sign = targetnumber[31];
		biased_exponent = targetnumber[30:23];
		fraction = targetnumber[22:0];
		implied_fraction = {1'b1,fraction};
		i = implied_fraction;
		remove = 0;
		while ( i % 2 == 0) begin
			//remove zeros on the end
			i = i / 2;
			remove = remove +1;
		end
		zeros = fixpointpos + (biased_exponent - 127 - (23-remove));
		result = i / (2**(zeros));
		if(sign == 1'b1) begin
		//Do 2's complement
			result = ~result + 1;
		end
	end
end
endmodule
