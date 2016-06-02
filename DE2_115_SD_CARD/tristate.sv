module tristate #(N = 16) (
	input wire Clk, OE,
	input [N-1:0] In,
	output logic [N-1:0] Out,
	inout wire [N-1:0] Data
);

assign Data = OE ? In : {N{1'bZ}};
assign Out = Data;

endmodule