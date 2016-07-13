	component DE2_115_SD_CARD_NIOS is
		port (
			altpll_areset_conduit_export                                    : in    std_logic                     := 'X';             -- export
			altpll_c1_clk                                                   : out   std_logic;                                        -- clk
			altpll_c3_clk                                                   : out   std_logic;                                        -- clk
			altpll_locked_conduit_export                                    : out   std_logic;                                        -- export
			altpll_phasedone_conduit_export                                 : out   std_logic;                                        -- export
			c0_out_clk_clk                                                  : out   std_logic;                                        -- clk
			c2_out_clk_clk                                                  : out   std_logic;                                        -- clk
			clk_50_clk_in_clk                                               : in    std_logic                     := 'X';             -- clk
			epp_i2c_scl_external_connection_export                          : out   std_logic;                                        -- export
			epp_i2c_sda_external_connection_export                          : inout std_logic                     := 'X';             -- export
			i2c_scl_external_connection_export                              : out   std_logic;                                        -- export
			i2c_sda_external_connection_export                              : inout std_logic                     := 'X';             -- export
			ir_external_connection_export                                   : in    std_logic                     := 'X';             -- export
			key_external_connection_export                                  : in    std_logic_vector(3 downto 0)  := (others => 'X'); -- export
			lcd_external_RS                                                 : out   std_logic;                                        -- RS
			lcd_external_RW                                                 : out   std_logic;                                        -- RW
			lcd_external_data                                               : inout std_logic_vector(7 downto 0)  := (others => 'X'); -- data
			lcd_external_E                                                  : out   std_logic;                                        -- E
			ledg_external_connection_export                                 : out   std_logic_vector(8 downto 0);                     -- export
			ledr_external_connection_export                                 : out   std_logic_vector(17 downto 0);                    -- export
			reset_reset_n                                                   : in    std_logic                     := 'X';             -- reset_n
			rs232_external_connection_rxd                                   : in    std_logic                     := 'X';             -- rxd
			rs232_external_connection_txd                                   : out   std_logic;                                        -- txd
			rs232_external_connection_cts_n                                 : in    std_logic                     := 'X';             -- cts_n
			rs232_external_connection_rts_n                                 : out   std_logic;                                        -- rts_n
			sd_clk_external_connection_export                               : out   std_logic;                                        -- export
			sd_cmd_external_connection_export                               : inout std_logic                     := 'X';             -- export
			sd_dat_external_connection_export                               : inout std_logic_vector(3 downto 0)  := (others => 'X'); -- export
			sd_wp_n_external_connection_export                              : in    std_logic                     := 'X';             -- export
			sdram_controller_addr                                           : out   std_logic_vector(12 downto 0);                    -- addr
			sdram_controller_ba                                             : out   std_logic_vector(1 downto 0);                     -- ba
			sdram_controller_cas_n                                          : out   std_logic;                                        -- cas_n
			sdram_controller_cke                                            : out   std_logic;                                        -- cke
			sdram_controller_cs_n                                           : out   std_logic;                                        -- cs_n
			sdram_controller_dq                                             : inout std_logic_vector(31 downto 0) := (others => 'X'); -- dq
			sdram_controller_dqm                                            : out   std_logic_vector(3 downto 0);                     -- dqm
			sdram_controller_ras_n                                          : out   std_logic;                                        -- ras_n
			sdram_controller_we_n                                           : out   std_logic;                                        -- we_n
			seg7_conduit_end_export                                         : out   std_logic_vector(63 downto 0);                    -- export
			sma_in_external_connection_export                               : in    std_logic                     := 'X';             -- export
			sma_out_external_connection_export                              : out   std_logic;                                        -- export
			sw_external_connection_export                                   : in    std_logic_vector(17 downto 0) := (others => 'X'); -- export
			to_hw_port_export                                               : out   std_logic_vector(15 downto 0);                    -- export
			to_hw_sig_export                                                : out   std_logic_vector(1 downto 0);                     -- export
			to_sw_sig_export                                                : in    std_logic_vector(1 downto 0)  := (others => 'X'); -- export
			tri_state_bridge_flash_bridge_0_out_address_to_the_cfi_flash    : out   std_logic_vector(22 downto 0);                    -- address_to_the_cfi_flash
			tri_state_bridge_flash_bridge_0_out_tri_state_bridge_flash_data : inout std_logic_vector(7 downto 0)  := (others => 'X'); -- tri_state_bridge_flash_data
			tri_state_bridge_flash_bridge_0_out_write_n_to_the_cfi_flash    : out   std_logic_vector(0 downto 0);                     -- write_n_to_the_cfi_flash
			tri_state_bridge_flash_bridge_0_out_select_n_to_the_cfi_flash   : out   std_logic_vector(0 downto 0);                     -- select_n_to_the_cfi_flash
			tri_state_bridge_flash_bridge_0_out_read_n_to_the_cfi_flash     : out   std_logic_vector(0 downto 0);                     -- read_n_to_the_cfi_flash
			new_sd_card_b_SD_cmd                                            : inout std_logic                     := 'X';             -- b_SD_cmd
			new_sd_card_b_SD_dat                                            : inout std_logic                     := 'X';             -- b_SD_dat
			new_sd_card_b_SD_dat3                                           : inout std_logic                     := 'X';             -- b_SD_dat3
			new_sd_card_o_SD_clock                                          : out   std_logic                                         -- o_SD_clock
		);
	end component DE2_115_SD_CARD_NIOS;

	u0 : component DE2_115_SD_CARD_NIOS
		port map (
			altpll_areset_conduit_export                                    => CONNECTED_TO_altpll_areset_conduit_export,                                    --               altpll_areset_conduit.export
			altpll_c1_clk                                                   => CONNECTED_TO_altpll_c1_clk,                                                   --                           altpll_c1.clk
			altpll_c3_clk                                                   => CONNECTED_TO_altpll_c3_clk,                                                   --                           altpll_c3.clk
			altpll_locked_conduit_export                                    => CONNECTED_TO_altpll_locked_conduit_export,                                    --               altpll_locked_conduit.export
			altpll_phasedone_conduit_export                                 => CONNECTED_TO_altpll_phasedone_conduit_export,                                 --            altpll_phasedone_conduit.export
			c0_out_clk_clk                                                  => CONNECTED_TO_c0_out_clk_clk,                                                  --                          c0_out_clk.clk
			c2_out_clk_clk                                                  => CONNECTED_TO_c2_out_clk_clk,                                                  --                          c2_out_clk.clk
			clk_50_clk_in_clk                                               => CONNECTED_TO_clk_50_clk_in_clk,                                               --                       clk_50_clk_in.clk
			epp_i2c_scl_external_connection_export                          => CONNECTED_TO_epp_i2c_scl_external_connection_export,                          --     epp_i2c_scl_external_connection.export
			epp_i2c_sda_external_connection_export                          => CONNECTED_TO_epp_i2c_sda_external_connection_export,                          --     epp_i2c_sda_external_connection.export
			i2c_scl_external_connection_export                              => CONNECTED_TO_i2c_scl_external_connection_export,                              --         i2c_scl_external_connection.export
			i2c_sda_external_connection_export                              => CONNECTED_TO_i2c_sda_external_connection_export,                              --         i2c_sda_external_connection.export
			ir_external_connection_export                                   => CONNECTED_TO_ir_external_connection_export,                                   --              ir_external_connection.export
			key_external_connection_export                                  => CONNECTED_TO_key_external_connection_export,                                  --             key_external_connection.export
			lcd_external_RS                                                 => CONNECTED_TO_lcd_external_RS,                                                 --                        lcd_external.RS
			lcd_external_RW                                                 => CONNECTED_TO_lcd_external_RW,                                                 --                                    .RW
			lcd_external_data                                               => CONNECTED_TO_lcd_external_data,                                               --                                    .data
			lcd_external_E                                                  => CONNECTED_TO_lcd_external_E,                                                  --                                    .E
			ledg_external_connection_export                                 => CONNECTED_TO_ledg_external_connection_export,                                 --            ledg_external_connection.export
			ledr_external_connection_export                                 => CONNECTED_TO_ledr_external_connection_export,                                 --            ledr_external_connection.export
			reset_reset_n                                                   => CONNECTED_TO_reset_reset_n,                                                   --                               reset.reset_n
			rs232_external_connection_rxd                                   => CONNECTED_TO_rs232_external_connection_rxd,                                   --           rs232_external_connection.rxd
			rs232_external_connection_txd                                   => CONNECTED_TO_rs232_external_connection_txd,                                   --                                    .txd
			rs232_external_connection_cts_n                                 => CONNECTED_TO_rs232_external_connection_cts_n,                                 --                                    .cts_n
			rs232_external_connection_rts_n                                 => CONNECTED_TO_rs232_external_connection_rts_n,                                 --                                    .rts_n
			sd_clk_external_connection_export                               => CONNECTED_TO_sd_clk_external_connection_export,                               --          sd_clk_external_connection.export
			sd_cmd_external_connection_export                               => CONNECTED_TO_sd_cmd_external_connection_export,                               --          sd_cmd_external_connection.export
			sd_dat_external_connection_export                               => CONNECTED_TO_sd_dat_external_connection_export,                               --          sd_dat_external_connection.export
			sd_wp_n_external_connection_export                              => CONNECTED_TO_sd_wp_n_external_connection_export,                              --         sd_wp_n_external_connection.export
			sdram_controller_addr                                           => CONNECTED_TO_sdram_controller_addr,                                           --                    sdram_controller.addr
			sdram_controller_ba                                             => CONNECTED_TO_sdram_controller_ba,                                             --                                    .ba
			sdram_controller_cas_n                                          => CONNECTED_TO_sdram_controller_cas_n,                                          --                                    .cas_n
			sdram_controller_cke                                            => CONNECTED_TO_sdram_controller_cke,                                            --                                    .cke
			sdram_controller_cs_n                                           => CONNECTED_TO_sdram_controller_cs_n,                                           --                                    .cs_n
			sdram_controller_dq                                             => CONNECTED_TO_sdram_controller_dq,                                             --                                    .dq
			sdram_controller_dqm                                            => CONNECTED_TO_sdram_controller_dqm,                                            --                                    .dqm
			sdram_controller_ras_n                                          => CONNECTED_TO_sdram_controller_ras_n,                                          --                                    .ras_n
			sdram_controller_we_n                                           => CONNECTED_TO_sdram_controller_we_n,                                           --                                    .we_n
			seg7_conduit_end_export                                         => CONNECTED_TO_seg7_conduit_end_export,                                         --                    seg7_conduit_end.export
			sma_in_external_connection_export                               => CONNECTED_TO_sma_in_external_connection_export,                               --          sma_in_external_connection.export
			sma_out_external_connection_export                              => CONNECTED_TO_sma_out_external_connection_export,                              --         sma_out_external_connection.export
			sw_external_connection_export                                   => CONNECTED_TO_sw_external_connection_export,                                   --              sw_external_connection.export
			to_hw_port_export                                               => CONNECTED_TO_to_hw_port_export,                                               --                          to_hw_port.export
			to_hw_sig_export                                                => CONNECTED_TO_to_hw_sig_export,                                                --                           to_hw_sig.export
			to_sw_sig_export                                                => CONNECTED_TO_to_sw_sig_export,                                                --                           to_sw_sig.export
			tri_state_bridge_flash_bridge_0_out_address_to_the_cfi_flash    => CONNECTED_TO_tri_state_bridge_flash_bridge_0_out_address_to_the_cfi_flash,    -- tri_state_bridge_flash_bridge_0_out.address_to_the_cfi_flash
			tri_state_bridge_flash_bridge_0_out_tri_state_bridge_flash_data => CONNECTED_TO_tri_state_bridge_flash_bridge_0_out_tri_state_bridge_flash_data, --                                    .tri_state_bridge_flash_data
			tri_state_bridge_flash_bridge_0_out_write_n_to_the_cfi_flash    => CONNECTED_TO_tri_state_bridge_flash_bridge_0_out_write_n_to_the_cfi_flash,    --                                    .write_n_to_the_cfi_flash
			tri_state_bridge_flash_bridge_0_out_select_n_to_the_cfi_flash   => CONNECTED_TO_tri_state_bridge_flash_bridge_0_out_select_n_to_the_cfi_flash,   --                                    .select_n_to_the_cfi_flash
			tri_state_bridge_flash_bridge_0_out_read_n_to_the_cfi_flash     => CONNECTED_TO_tri_state_bridge_flash_bridge_0_out_read_n_to_the_cfi_flash,     --                                    .read_n_to_the_cfi_flash
			new_sd_card_b_SD_cmd                                            => CONNECTED_TO_new_sd_card_b_SD_cmd,                                            --                         new_sd_card.b_SD_cmd
			new_sd_card_b_SD_dat                                            => CONNECTED_TO_new_sd_card_b_SD_dat,                                            --                                    .b_SD_dat
			new_sd_card_b_SD_dat3                                           => CONNECTED_TO_new_sd_card_b_SD_dat3,                                           --                                    .b_SD_dat3
			new_sd_card_o_SD_clock                                          => CONNECTED_TO_new_sd_card_o_SD_clock                                           --                                    .o_SD_clock
		);

