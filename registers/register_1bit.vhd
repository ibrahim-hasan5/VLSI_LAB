library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_1bit is
    Port ( CLK   : in  STD_LOGIC;
           RESET : in  STD_LOGIC;   -- synchronous, active-high
           LOAD  : in  STD_LOGIC;   -- load enable
           D     : in  STD_LOGIC;
           Q     : out STD_LOGIC);
end register_1bit;

architecture Behavioral of register_1bit is
    signal Q_int : STD_LOGIC := '0';
begin

    process (CLK)
    begin
        if rising_edge(CLK) then
            if RESET = '1' then
                Q_int <= '0';
            elsif LOAD = '1' then
                Q_int <= D;
            end if;
            -- else hold
        end if;
    end process;

    Q <= Q_int;

end Behavioral;