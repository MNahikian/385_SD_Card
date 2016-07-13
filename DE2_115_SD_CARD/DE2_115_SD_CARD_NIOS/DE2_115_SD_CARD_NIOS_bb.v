
module DE2_115_SD_CARD_NIOS (
	altpll_areset_conduit_export,
	altpll_c1_clk,
	altpll_c3_clk,
	altpll_locked_conduit_export,
	altpll_phasedone_conduit_export,
	c0_out_clk_clk,
	c2_out_clk_clk,
	clk_50_clk_in_clk,
	epp_i2c_scl_external_connection_export,
	epp_i2c_sda_external_connection_export,
	i2c_scl_external_connection_export,
	i2c_sda_external_connection_export,
	ir_external_connection_export,
	key_external_connection_export,
	lcd_external_RS,
	lcd_external_RW,
	lcd_external_data,
	lcd_external_E,
	ledg_external_connection_export,
	ledr_external_connection_export,
	reset_reset_n,
	rs232_external_connection_rxd,
	rs232_external_connection_txd,
	rs232_external_connection_cts_n,
	rs232_external_connection_rts_n,
	sd_clk_external_connection_export,
	sd_cmd_external_connection_export,
	sd_dat_external_connection_export,
	sd_wp_n_external_connection_export,
	sdram_controller_addr,
	sdram_controller_ba,
	sdram_controller_cas_n,
	sdram_controller_cke,
	sdram_controller_cs_n,
	sdram_controller_dq,
	sdram_controller_dqm,
	sdram_controller_ras_n,
	sdram_controller_we_n,
	seg7_conduit_end_export,
	sma_in_external_connection_export,
	sma_out_external_connection_export,
	sw_external_connection_export,
	to_hw_port_export,
	to_hw_sig_export,
	to_sw_sig_export,
	tri_state_bridge_flash_bridge_0_out_address_to_the_cfi_flash,
	tri_state_bridge_flash_bridge_0_out_tri_state_bridge_flash_data,
	tri_state_bridge_flash_bridge_0_out_write_n_to_the_cfi_flash,
	tri_state_bridge_flash_bridge_0_out_select_n_to_the_cfi_flash,
	tri_state_bridge_flash_bridge_0_out_read_n_to_the_cfi_flash,
	new_sd_card_b_SD_cmd,
	new_sd_card_b_SD_dat,
	new_sd_card_b_SD_dat3,
	new_sd_card_o_SD_clock);	

	input		altpll_areset_conduit_export;
	output		altpll_c1_clk;
	output		altpll_c3_clk;
	output		altpll_locked_conduit_export;
	output		altpll_phasedone_conduit_export;
	output		c0_out_clk_clk;
	output		c2_out_clk_clk;
	input		clk_50_clk_in_clk;
	output		epp_i2c_scl_external_connection_export;
	inout		epp_i2c_sda_external_connection_export;
	output		i2c_scl_external_connection_export;
	inout		i2c_sda_external_connection_export;
	input		ir_external_connection_export;
	input	[3:0]	key_external_connection_export;
	output		lcd_external_RS;
	output		lcd_external_RW;
	inout	[7:0]	lcd_external_data;
	output		lcd_external_E;
	output	[8:0]	ledg_external_connection_export;
	output	[17:0]	ledr_external_connection_export;
	input		reset_reset_n;
	input		rs232_external_connection_rxd;
	output		rs232_external_connection_txd;
	input		rs232_external_connection_cts_n;
	output		rs232_external_connection_rts_n;
	output		sd_clk_external_connection_export;
	inout		sd_cmd_external_connection_export;
	inout	[3:0]	sd_dat_external_connection_export;
	input		sd_wp_n_external_connection_export;
	output	[12:0]	sdram_controller_addr;
	output	[1:0]	sdram_controller_ba;
	output		sdram_controller_cas_n;
	output		sdram_controller_cke;
	output		sdram_controller_cs_n;
	inout	[31:0]	sdram_controller_dq;
	output	[3:0]	sdram_controller_dqm;
	output		sdram_controller_ras_n;
	output		sdram_controller_we_n;
	output	[63:0]	seg7_conduit_end_export;
	input		sma_in_external_connection_export;
	output		sma_out_external_connection_export;
	input	[17:0]	sw_external_connection_export;
	output	[15:0]	to_hw_port_export;
	output	[1:0]	to_hw_sig_export;
	input	[1:0]	to_sw_sig_export;
	output	[22:0]	tri_state_bridge_flash_bridge_0_out_address_to_the_cfi_flash;
	inout	[7:0]	tri_state_bridge_flash_bridge_0_out_tri_state_bridge_flash_data;
	output	[0:0]	tri_state_bridge_flash_bridge_0_out_write_n_to_the_cfi_flash;
	output	[0:0]	tri_state_bridge_flash_bridge_0_out_select_n_to_the_cfi_flash;
	output	[0:0]	tri_state_bridge_flash_bridge_0_out_read_n_to_the_cfi_flash;
	inout		new_sd_card_b_SD_cmd;
	inout		new_sd_card_b_SD_dat;
	inout		new_sd_card_b_SD_dat3;
	output		new_sd_card_o_SD_clock;
endmodule
