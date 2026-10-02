
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

ENTITY full_adder_1bit_tb IS
END full_adder_1bit_tb;
 
ARCHITECTURE behavior OF full_adder_1bit_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ful_adder_1bit
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         cin : IN  std_logic;
         sum : OUT  std_logic;
         cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal cin : std_logic := '0';

 	--Outputs
   signal sum : std_logic;
   signal cout : std_logic;

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ful_adder_1bit PORT MAP (
          a => a,
          b => b,
          cin => cin,
          sum => sum,
          cout => cout
        );


 

   -- Stimulus process
   stim_proc: process
   begin	
     	a <= '0'; b<= '0'; cin<= '0'; wait for 100 ns;
		a <= '0'; b<= '0'; cin<= '1'; wait for 100 ns;
		a <= '0'; b<= '1'; cin<= '0'; wait for 100 ns;
		a <= '0'; b<= '1'; cin<= '1'; wait for 100 ns;
		a <= '1'; b<= '0'; cin<= '0'; wait for 100 ns;
		a <= '1'; b<= '0'; cin<= '1'; wait for 100 ns;
		a <= '1'; b<= '1'; cin<= '0'; wait for 100 ns;
		a <= '1'; b<= '1'; cin<= '1'; wait for 100 ns;
		wait;

   end process;

END;
