
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity ful_adder_1bit is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           cin : in  STD_LOGIC;
           sum : out  STD_LOGIC;
           cout : out  STD_LOGIC);
end ful_adder_1bit;

architecture Behavioral of ful_adder_1bit is

begin
sum <= a xor b xor cin;
cout <= (a and b) or (cin and (a xor b));

end Behavioral;

