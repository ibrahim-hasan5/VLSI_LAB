library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity alu_4bit is
    Port (
        A        : in  STD_LOGIC_VECTOR(3 downto 0);
        B        : in  STD_LOGIC_VECTOR(3 downto 0);
        SEL      : in  STD_LOGIC_VECTOR(2 downto 0);
        ALU_OUT  : out STD_LOGIC_VECTOR(3 downto 0);
        CARRY_OUT: out STD_LOGIC
    );
end alu_4bit;

architecture Behavioral of alu_4bit is
    signal result_ext : UNSIGNED(4 downto 0);
begin
    process(A, B, SEL)
    begin
        case SEL is
            when "000" => -- Addition
                result_ext <= resize(unsigned(A), 5) + resize(unsigned(B), 5);
                
            when "001" => -- Subtraction
                result_ext <= resize(unsigned(A), 5) - resize(unsigned(B), 5);
                
            when "010" => -- AND
                result_ext <= '0' & unsigned(A and B);
                
            when "011" => -- OR
                result_ext <= '0' & unsigned(A or B);
                
            when "100" => -- XOR
                result_ext <= '0' & unsigned(A xor B);
                
            when "101" => -- NOT A
                result_ext <= '0' & unsigned(not A);
                
            when "110" => -- Shift Left (A shifted by 1 bit)
                result_ext <= '0' & unsigned(A(2 downto 0) & '0');
                
            when "111" => -- Shift Right (A shifted by 1 bit)
                result_ext <= '0' & unsigned('0' & A(3 downto 1));
                
            when others =>
                result_ext <= (others => '0');
        end case;
    end process;

    ALU_OUT   <= STD_LOGIC_VECTOR(result_ext(3 downto 0));
    CARRY_OUT <= result_ext(4); -- Carry/Borrow bit for arithmetic operations

end Behavioral;