
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity full_adder_8bit is
    Port ( a0 : in  STD_LOGIC;
           a1 : in  STD_LOGIC;
           a2 : in  STD_LOGIC;
           a3 : in  STD_LOGIC;
           a4 : in  STD_LOGIC;
           a5 : in  STD_LOGIC;
           a6 : in  STD_LOGIC;
           a7 : in  STD_LOGIC;
           b0 : in  STD_LOGIC;
           b1 : in  STD_LOGIC;
           b2 : in  STD_LOGIC;
           b3 : in  STD_LOGIC;
           b4 : in  STD_LOGIC;
           b5 : in  STD_LOGIC;
           b6 : in  STD_LOGIC;
           b7 : in  STD_LOGIC;
           cin : in  STD_LOGIC;
           s0 : out  STD_LOGIC;
           s1 : out  STD_LOGIC;
           s2 : out  STD_LOGIC;
           s3 : out  STD_LOGIC;
           s4 : out  STD_LOGIC;
           s5 : out  STD_LOGIC;
           s6 : out  STD_LOGIC;
           s7 : out  STD_LOGIC;
           cout : out  STD_LOGIC);
end full_adder_8bit;

architecture Structural of full_adder_8bit is

 component ful_adder_1bit
	 Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           cin : in  STD_LOGIC;
           sum : out  STD_LOGIC;
           cout : out  STD_LOGIC);
     end component;
    signal c1,c2,c3,c4,c5,c6,c7 : STD_LOGIC;
begin
   fa0 : ful_adder_1bit port map (a=>a0,b=>b0,cin=>cin,sum=>s0,cout=>c1);
	fa1 : ful_adder_1bit port map (a=>a1,b=>b1,cin=>c1,sum=>s1,cout=>c2);
	fa2 : ful_adder_1bit port map (a=>a2,b=>b2,cin=>c2,sum=>s2,cout=>c3);
	fa3 : ful_adder_1bit port map (a=>a3,b=>b3,cin=>c3,sum=>s3,cout=>c4);
	fa4 : ful_adder_1bit port map (a=>a4,b=>b4,cin=>c4,sum=>s4,cout=>c5);
	fa5 : ful_adder_1bit port map (a=>a5,b=>b5,cin=>c5,sum=>s5,cout=>c6);
	fa6 : ful_adder_1bit port map (a=>a6,b=>b6,cin=>c6,sum=>s6,cout=>c7);
	fa7 : ful_adder_1bit port map (a=>a7,b=>b7,cin=>c7,sum=>s7,cout=>cout);

end Structural;

