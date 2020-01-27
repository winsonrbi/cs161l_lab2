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
	reg [31:0] R;
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
		R = 32'h00000000;
		#200;
		if(R != result) $display("Result is wrong");
		// Wait 100 ns for global reset to finish
		
		targetnumber = 32'hFFFFFFFF;
		fixpointpos = 1;
		opcode = 0;
		R = 32'hBF000000;
		#200;
		if(R != result) $display("Result is wrong");
		
		// Add stimulus here
		opcode = 0;
      fixpointpos = 0; //Should detect is zero
      targetnumber = 32'h00000000;
      R = 32'h00000000; //Default is +0
      #200;
      if(R != result) $display("Result is wrong");
        
      opcode = 0;
      fixpointpos = 32;//Should not matter how many bits are before decimal
      targetnumber = 32'h00000000;// Should still detect this as zero
      R = 32'h00000000;
      #200;
      if(R != result) $display("Result is wrong");

		targetnumber = 32'h00000003; //Checking if fixpointpos works properly
		fixpointpos = 1;
		opcode = 0;
		R = 32'h3FC00000;
		#200;
		if(R != result) $display("Result is wrong");
//--------
// Floating Point to Fixed Point
//--------
        opcode = 1;
		  #200;
        fixpointpos = 0;
        targetnumber = 32'h00000000;
        R = 32'h00000000;
        #200;	
        if(R != result) $display("Result is wrong");

        opcode = 1;
        fixpointpos = 16; //Checking if the number of bits before the decimal affects zero result
        targetnumber = 32'h00000000;
        R = 32'h00000000;
        #200;
        if(R != result) $display("Result is wrong");
        
        opcode = 1;
        fixpointpos = 0; 
        targetnumber = 32'h80000000; //Negative Zero should stil just give us zero
        R = 32'h00000000;
		  #200;
        if(R != result) $display("Result is wrong");
		  
		  opcode = 1;
        fixpointpos = 1; 
        targetnumber = 32'h3FC00000; //Check to make sure math actually works
        R = 32'h00000003;
		  #200;
        if(R != result) $display("Result is wrong");
		  
		  opcode = 1;
        fixpointpos = 1; 
        targetnumber = 32'hBF000000; //Checking negative values
        R = 32'hFFFFFFFF;
		  #200;
        if(R != result) $display("Result is wrong");
		  $display("Test Complete");
	end
      
endmodule

