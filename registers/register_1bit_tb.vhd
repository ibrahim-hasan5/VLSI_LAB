library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_register_1bit is
-- Testbench has no ports
end tb_register_1bit;

architecture Behavioral of tb_register_1bit is

    -- Component Declaration
    component register_1bit is
        Port ( CLK   : in  STD_LOGIC;
               RESET : in  STD_LOGIC;
               LOAD  : in  STD_LOGIC;
               D     : in  STD_LOGIC;
               Q     : out STD_LOGIC);
    end component;

    -- Signal Declarations
    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal LOAD  : STD_LOGIC := '0';
    signal D     : STD_LOGIC := '0';
    signal Q     : STD_LOGIC;

    -- Clock period definition
    constant CLK_PERIOD : time := 10 ns;

begin

    -- Instantiate the Unit Under Test (UUT)
    uut: register_1bit
        Port Map (
            CLK   => CLK,
            RESET => RESET,
            LOAD  => LOAD,
            D     => D,
            Q     => Q
        );

    -- Clock Generation Process
    clk_process : process
    begin
        CLK <= '0';
        wait for CLK_PERIOD / 2;
        CLK <= '1';
        wait for CLK_PERIOD / 2;
    end process;

    -- Stimulus Process
    stim_proc: process
    begin
        -- Initial State: Reset high to clear register synchronously
        RESET <= '1';
        LOAD  <= '0';
        D     <= '0';
        wait for CLK_PERIOD * 2;

        -- Release Reset
        RESET <= '0';
        wait for CLK_PERIOD;

        -- Test 1: Load '1' into register
        D    <= '1';
        LOAD <= '1';
        wait for CLK_PERIOD;

        -- Test 2: Disable LOAD and change D (Q should HOLD '1')
        LOAD <= '0';
        D    <= '0';
        wait for CLK_PERIOD * 2;

        -- Test 3: Load '0' into register
        LOAD <= '1';
        D    <= '0';
        wait for CLK_PERIOD;

        -- Test 4: Disable LOAD and change D (Q should HOLD '0')
        LOAD <= '0';
        D    <= '1';
        wait for CLK_PERIOD * 2;

        -- Test 5: Assert RESET while LOAD is active (RESET priority check)
        RESET <= '1';
        LOAD  <= '1';
        D     <= '1';
        wait for CLK_PERIOD;

        -- Clean up
        RESET <= '0';
        LOAD  <= '0';
        
        -- End Simulation
        wait;
    end process;

end Behavioral;