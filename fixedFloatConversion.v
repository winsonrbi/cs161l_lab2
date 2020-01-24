`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:33:41 01/24/2020 
// Design Name: 
// Module Name:    fixedFloatConversion 
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
`include "fixedToFloat.v"
module fixedFloatConversion(
    input wire clk,
    input wire rst,
    input wire [31:0] targetnumber,
    input wire [4:0] fixpointpos,
    input wire opcode,
    output reg [31:0] result
    );
wire [31:0] floatresult;
wire[31:0]fixresult;

fixedToFloat fixedToFloat_inst(
	.fixpointpos (fixpointpos),
	.targetnumber (targetnumber),
	.result (floatresult)
);

always @(posedge clk) begin
	$display("Check");
	$display(floatresult);
	result <= opcode == 1? fixresult : floatresult;
end
endmodule
