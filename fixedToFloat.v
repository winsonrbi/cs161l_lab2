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
    input clk,
    input [4:0] fixpointpos,
    input [31:0] targetnumber,
    output reg[31:0] result
    );
reg sign;
reg [31:0] pos_val;
reg [7:0] biased_exponent;
reg [22:0] fraction;
reg [4:0] leadpos;
integer i;
integer temp;
always @ (posedge clk)
begin
//Perform fixed to float conversion
//Check if zero
	$display("Entered fixed point %b",targetnumber);
	if( targetnumber == 3'd0)begin
		result = 32'h00000000;
	end
	else begin
		//First check for sign		
		if(targetnumber[31] == 1'b1)begin
			sign=1'b1;
			//Convert
			pos_val = ~targetnumber;
			pos_val = pos_val + 1;
		end
		else begin
			sign=1'b0;
			pos_val = targetnumber;
		end
		//Find Leading One
		leadpos = 0;
		for(i=31; i>-1; i=i-1)begin
			if(pos_val[i] == 1'b1 && leadpos == 0)begin
				leadpos = i;
				$display("leadpos value is %d", leadpos);
				if(leadpos == 5'b00000) begin
					fraction = 23'b00000000000000000000000;
				end
				else begin
					case(leadpos)
						5'd1: begin
							temp = pos_val[0];
							temp = temp * 4194304;
							fraction = temp;
						end
						5'd2: begin
							temp = pos_val[1:0];
							temp = temp * 2097152;
							fraction = temp;
						end
						5'd3: begin
							temp = pos_val[2:0];
							temp = temp * ;
							fraction = temp;
						end
						5'd4: begin
							temp = pos_val[0];
							temp = temp * 4194304;
							fraction = temp;
						end
						5'd5: begin
							temp = pos_val[1:0];
							temp = temp * 2097152;
							fraction = temp;
						end
						5'd6: begin
							temp = pos_val[2:0];
							temp = temp * ;
							fraction = temp;
						end
						5'd7: begin
							temp = pos_val[0];
							temp = temp * 4194304;
							fraction = temp;
						end
						5'd8: begin
							temp = pos_val[1:0];
							temp = temp * 2097152;
							fraction = temp;
						end
						5'd9: begin
							temp = pos_val[2:0];
							temp = temp * ;
							fraction = temp;
						end
						5'd10: begin
							temp = pos_val[0];
							temp = temp * 4194304;
							fraction = temp;
						end
						5'd11: begin
							temp = pos_val[1:0];
							temp = temp * 2097152;
							fraction = temp ;
						end
						5'd12: begin
							temp = pos_val[2:0];
							temp = temp * 1048576;
							fraction = temp;
						end
						5'd13: begin
							temp = pos_val[0];
							temp = temp * 524288;
							fraction = temp;
						end
						5'd14: begin
							temp = pos_val[1:0];
							temp = temp * 262144;
							fraction = temp;
						end
						5'd15: begin
							temp = pos_val[2:0];
							temp = temp * 131072;
							fraction = temp;
						end
						5'd16: begin
							temp = pos_val[0];
							temp = temp * 64;
							fraction = temp;
						end
						5'd17: begin
							temp = pos_val[16:0];
							temp = temp * 32;
							fraction = temp;
						end
						5'd18: begin
							temp = pos_val[17:0];
							temp = temp * 16;
							fraction = temp;
						end
						5'd19: begin
							temp = pos_val[18:0];
							temp = temp * 8;
							fraction = temp;
						end
						5'd20: begin
							temp = pos_val[19:0];
							temp = temp * 4;
							fraction = temp;
						end
						5'd21: begin
							temp = pos_val[20:0];
							temp = temp * 2;
							fraction = temp;
						end
						5'd22: begin
							temp = pos_val[21:0];
							fraction = temp;
						end
						5'd23: begin
							temp = pos_val[22:1];
							fraction = temp;
						end
						5'd24: begin
							temp = pos_val[23:2];
							fraction = temp;
						end
						5'd25: begin
							temp = pos_val[24:3];
							fraction = temp;
						end
						5'd26: begin
							temp = pos_val[25:4];
							fraction = temp;
						end
						5'd27: begin
							temp = pos_val[26:5];
							fraction = temp;
						end
						5'd28: begin
							temp = pos_val[27:6];
							fraction = temp;
						end
						5'd29: begin
							temp = pos_val[28:7];
							fraction = temp;
						end
						5'd30: begin
							temp = pos_val[29:8];
							fraction = temp;
						end
						5'd31: begin
							temp = pos_val[30:9];
							fraction = temp;
						end
						default: $display("Leadpos Error");
					endcase
						
				end
			end
		end
		//Determine Exponent
		if(leadpos < fixpointpos) begin
			//exponent is negative
			biased_exponent = 127-(fixpointpos-leadpos);
		end
		else begin
			biased_exponent = 127 + (leadpos - fixpointpos);
		end
		$display("biased_exponent is %d",biased_exponent);
		$display("fraction is %b",fraction);
	end
end
endmodule
