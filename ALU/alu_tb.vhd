library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_alu_4bit is
-- Testbench entities do not have ports
end tb_alu_4bit;

architecture Behavioral of tb_alu_4bit is

    -- Component Declaration for Unit Under Test (UUT)
    component alu_4bit is
        Port (
            A        : in  STD_LOGIC_VECTOR(3 downto 0);
            B        : in  STD_LOGIC_VECTOR(3 downto 0);
            SEL      : in  STD_LOGIC_VECTOR(2 downto 0);
            ALU_OUT  : out STD_LOGIC_VECTOR(3 downto 0);
            CARRY_OUT: out STD_LOGIC
        );
    end component;

    -- Signal Declarations
    signal A         : STD_LOGIC_VECTOR(3 downto 0) := (others => '0');
    signal B         : STD_LOGIC_VECTOR(3 downto 0) := (others => '0');
    signal SEL       : STD_LOGIC_VECTOR(2 downto 0) := (others => '0');
    signal ALU_OUT   : STD_LOGIC_VECTOR(3 downto 0);
    signal CARRY_OUT : STD_LOGIC;

begin

    -- Instantiate the UUT
    uut: alu_4bit
        Port Map (
            A         => A,
            B         => B,
            SEL       => SEL,
            ALU_OUT   => ALU_OUT,
            CARRY_OUT => CARRY_OUT
        );

    -- Stimulus Process
    stim_proc: process
    begin
        -- Initial wait state
        wait for 10 ns;

        -- Test 1: Addition (A + B) -> 1010 (10) + 0101 (5) = 1111 (15), CARRY_OUT = 0
        A <= "1010"; B <= "0101"; SEL <= "000";
        wait for 10 ns;

        -- Test 2: Addition with Carry -> 1100 (12) + 0101 (5) = 0001 (17 % 16), CARRY_OUT = 1
        A <= "1100"; B <= "0101"; SEL <= "000";
        wait for 10 ns;

        -- Test 3: Subtraction (A - B) -> 1010 (10) - 0101 (5) = 0101 (5)
        A <= "1010"; B <= "0101"; SEL <= "001";
        wait for 10 ns;

        -- Test 4: AND Logic -> "1100" AND "1010" = "1000"
        A <= "1100"; B <= "1010"; SEL <= "010";
        wait for 10 ns;

        -- Test 5: OR Logic -> "1100" OR "1010" = "1110"
        A <= "1100"; B <= "1010"; SEL <= "011";
        wait for 10 ns;

        -- Test 6: XOR Logic -> "1100" XOR "1010" = "0110"
        A <= "1100"; B <= "1010"; SEL <= "100";
        wait for 10 ns;

        -- Test 7: NOT A -> NOT "1100" = "0011"
        A <= "1100"; SEL <= "101";
        wait for 10 ns;

        -- Test 8: Shift Left A -> "0101" << 1 = "1010"
        A <= "0101"; SEL <= "110";
        wait for 10 ns;

        -- Test 9: Shift Right A -> "1100" >> 1 = "0110"
        A <= "1100"; SEL <= "111";
        wait for 10 ns;

        -- Stop simulation
        wait;
    end process;

end Behavioral;