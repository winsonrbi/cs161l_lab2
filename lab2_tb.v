`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:42:29 01/24/2020
// Design Name:   fixedFloatConversion
// Module Name:   /home/csmajs/wbi002/CS161L_Lab2/lab2_tb.v
// Project Name:  CS161L_Lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fixedFloatConversion
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab2_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] targetnumber;
	reg [4:0] fixpointpos;
	reg opcode;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	fixedFloatConversion uut (
		.clk(clk), 
		.rst(rst), 
		.targetnumber(targetnumber), 
		.fixpointpos(fixpointpos), 
		.opcode(opcode), 
		.result(result)
	);
	initial begin
		clk = 0 ; rst = 1 ; #50 ; 
		clk = 1 ; rst = 1 ; #50 ; 
		clk = 0 ; rst = 0 ; #50 ; 
		clk = 1 ; rst = 0 ; #50 ;
		forever begin 
			clk = ~clk; #50 ; 
		end
	end
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		targetnumber = 0;
		fixpointpos = 0;
		opcode = 0;
	
		// Wait 100 ns for global reset to finish
		#100;
		
		targetnumber = 32'hFFFFFFFF;
		fixpointpos = 1;
		opcode = 0;
		#100;
		
		// Add stimulus here
		targetnumber = 32'h00000003;
		fixpointpos = 1;
		opcode = 0;
		#100;

	end
      
endmodule

