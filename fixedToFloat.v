`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:35:31 01/24/2020 
// Design Name: 
// Module Name:    fixedToFloat 
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
module fixedToFloat(
    input [4:0] fixpointpos,
    input [31:0] targetnumber,
    output reg[31:0] result
    );
reg sign;
reg [7:0] biased_exponent;
reg [22:0] fraction;
reg [4:0] leadpos;
integer i;
initial begin
//Perform fixed to float conversion
//First check for sign
//Check if zero
	$display("Entered fixed point %b",targetnumber);
	if( targetnumber == 32'd0)begin
		result = 32'h00000000;
	end
	else begin
		if(targetnumber[31] == 1'b1) sign=1'b1;
		else sign=1'b0;
	//Find Leading One
		for(i=31; i>-1; i=i-1)begin
			if(targetnumber[i] == 1'b1)begin
				leadpos = i;
				$display(leadpos);
			end
		end
	end
end
endmodule
