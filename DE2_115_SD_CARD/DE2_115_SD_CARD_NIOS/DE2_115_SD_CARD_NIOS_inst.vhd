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
			tri_state_bridge_flash_bridge_0_out_read_n_to_the_cfi_flash     : out   std_logic_vector(0 downto 0)                      -- read_n_to_the_cfi_flash
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
			tri_state_bridge_flash_bridge_0_out_read_n_to_the_cfi_flash     => CONNECTED_TO_tri_state_bridge_flash_bridge_0_out_read_n_to_the_cfi_flash      --                                    .read_n_to_the_cfi_flash
		);

