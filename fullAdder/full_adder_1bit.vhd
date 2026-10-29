
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity full_adder_1bit is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           cin : out  STD_LOGIC;
           sum : out  STD_LOGIC);
end full_adder_1bit;

architecture Behavioral of full_adder_1bit is

begin
 sum <= a xor b xor cin;
 cin <= (a and b) or cin and (a xor b);

end Behavioral;

