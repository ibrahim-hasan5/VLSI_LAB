library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_8bit_tb is
end register_8bit_tb;

architecture Behavioral of register_8bit_tb is

    component register_8bit
        Port ( CLK   : in  STD_LOGIC;
               RESET : in  STD_LOGIC;
               LOAD  : in  STD_LOGIC;
               D     : in  STD_LOGIC_VECTOR (7 downto 0);
               Q     : out STD_LOGIC_VECTOR (7 downto 0));
    end component;

    signal CLK_tb   : STD_LOGIC := '0';
    signal RESET_tb : STD_LOGIC := '0';
    signal LOAD_tb  : STD_LOGIC := '0';
    signal D_tb     : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal Q_tb     : STD_LOGIC_VECTOR (7 downto 0);

begin

    UUT: register_8bit port map ( CLK => CLK_tb, RESET => RESET_tb,
                                   LOAD => LOAD_tb, D => D_tb, Q => Q_tb );

    clk_proc: process
    begin
        CLK_tb <= '0'; wait for 10 ns;
        CLK_tb <= '1'; wait for 10 ns;
    end process;

    stim_proc: process
    begin
        -- Reset behavior
        RESET_tb <= '1'; LOAD_tb <= '0'; D_tb <= x"FF";
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = x"00") report "FAIL: reset did not clear register" severity error;

        RESET_tb <= '0';

        -- Load-enable gating: LOAD=0, Q must not change even though D changes
        D_tb <= x"AA"; LOAD_tb <= '0';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = x"00") report "FAIL: Q changed while LOAD=0" severity error;

        -- Correct capture on clock edge, value 1
        D_tb <= x"AA"; LOAD_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = x"AA") report "FAIL: Q did not capture 0xAA" severity error;

        -- Hold again with LOAD=0 after a successful load
        D_tb <= x"55"; LOAD_tb <= '0';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = x"AA") report "FAIL: Q changed while LOAD=0 (after load)" severity error;

        -- Correct capture on clock edge, value 2
        D_tb <= x"55"; LOAD_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = x"55") report "FAIL: Q did not capture 0x55" severity error;

        -- Correct capture on clock edge, value 3
        D_tb <= x"3C"; LOAD_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = x"3C") report "FAIL: Q did not capture 0x3C" severity error;

        -- Reset again mid-stream, confirm it overrides LOAD
        D_tb <= x"FF"; LOAD_tb <= '1'; RESET_tb <= '1';
        wait until rising_edge(CLK_tb); wait for 2 ns;
        assert (Q_tb = x"00") report "FAIL: reset did not override load" severity error;

        report "PASS: register_8bit testbench completed" severity note;
        wait;
    end process;

end Behavioral;