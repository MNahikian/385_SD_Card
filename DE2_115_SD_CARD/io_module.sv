module io_module (input                clk,
                  input                reset_n,
                  output logic [1:0]     to_sw_sig,
                  input [1:0]           to_hw_sig,
                  input [15:0]           to_hw_port,
                  inout [15:0]       Data,
                  output logic [19:0] ADDR,
                  output logic OE, WE, CE, LB, UB
                  );

      tristate #(.N(16)) tr1(.Clk(clk), .OE(~WE), .In(to_hw_port), .Data(Data));

      enum logic [6:0] {RESET, WAIT, PREPARE, SET_MEM_1, SET_MEM_2}
                     state, next_state;

      logic [19:0] count;
      logic inc;

      always @ (posedge clk, negedge reset_n) begin
         if (reset_n == 1'b0) begin
            state <= RESET;
            OE <= 1'b1;
            WE <= 1'b1;
         end else begin
            state = next_state;
            case (state)

               RESET: begin
                  OE <= 1'b1;
                  WE <= 1'b1;
                  count <= 20'd0;
                  inc <= 1'b1;
               end

               WAIT: begin
                  OE <= 1'b1;
                  WE <= 1'b1;
                  count <= 20'd0;
                  inc <= 1'b1;
               end

               PREPARE: begin
                  if(inc == 1'b0) begin
                     count = count + 20'b1;
                     inc = 1'b1;
                  end
                  OE <= 1'b1;
                  WE <= 1'b1;
                  ADDR <= count;
               end

               SET_MEM_1: begin
                  inc <= 1'b0;
                  ADDR <= count;
                  OE <= 1'b1;
                  WE <= 1'b0;
               end

               SET_MEM_2: begin
                  inc <= 1'b0;
                  ADDR <= count;
                  OE <= 1'b1;
                  WE <= 1'b0;
               end

            endcase
         end
      end

      always_comb begin
         next_state = state;
         unique case (state)
            RESET: begin
               next_state = WAIT;
            end

            WAIT: begin
               if (to_hw_sig == 2'd1)
                  next_state = PREPARE;
            end

            PREPARE: begin
               if (to_hw_sig == 2'd0)
                  next_state = SET_MEM_1;
               else if (to_hw_sig == 2'd2)
                  next_state = WAIT;
            end

            SET_MEM_1: begin
                  next_state = SET_MEM_2;
            end

            SET_MEM_2: begin
               if (to_hw_sig == 2'd1)
                  next_state = PREPARE;
            end

         endcase
      end

      always_comb begin
         to_sw_sig = 2'd0;

         unique case (state)
            RESET: begin
               to_sw_sig = 2'd3;
            end

            WAIT: begin
               to_sw_sig = 2'd0;
            end

            PREPARE: begin
               to_sw_sig = 2'd1;
            end

            SET_MEM_1: begin
               to_sw_sig = 2'd2;
            end

            SET_MEM_2: begin
               to_sw_sig = 2'd2;
            end

         endcase
      end

   assign CE = 1'b0;
   assign UB = 1'b0;
   assign LB = 1'b0;

endmodule
