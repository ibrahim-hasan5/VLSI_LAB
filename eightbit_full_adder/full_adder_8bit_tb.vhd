
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY full_adder_8bit_tb IS
END full_adder_8bit_tb;
 
ARCHITECTURE behavior OF full_adder_8bit_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT full_adder_8bit
    PORT(
         a0 : IN  std_logic;
         a1 : IN  std_logic;
         a2 : IN  std_logic;
         a3 : IN  std_logic;
         a4 : IN  std_logic;
         a5 : IN  std_logic;
         a6 : IN  std_logic;
         a7 : IN  std_logic;
         b0 : IN  std_logic;
         b1 : IN  std_logic;
         b2 : IN  std_logic;
         b3 : IN  std_logic;
         b4 : IN  std_logic;
         b5 : IN  std_logic;
         b6 : IN  std_logic;
         b7 : IN  std_logic;
         cin : IN  std_logic;
         s0 : OUT  std_logic;
         s1 : OUT  std_logic;
         s2 : OUT  std_logic;
         s3 : OUT  std_logic;
         s4 : OUT  std_logic;
         s5 : OUT  std_logic;
         s6 : OUT  std_logic;
         s7 : OUT  std_logic;
         cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a0 : std_logic := '0';
   signal a1 : std_logic := '0';
   signal a2 : std_logic := '0';
   signal a3 : std_logic := '0';
   signal a4 : std_logic := '0';
   signal a5 : std_logic := '0';
   signal a6 : std_logic := '0';
   signal a7 : std_logic := '0';
   signal b0 : std_logic := '0';
   signal b1 : std_logic := '0';
   signal b2 : std_logic := '0';
   signal b3 : std_logic := '0';
   signal b4 : std_logic := '0';
   signal b5 : std_logic := '0';
   signal b6 : std_logic := '0';
   signal b7 : std_logic := '0';
   signal cin : std_logic := '0';

 	--Outputs
   signal s0 : std_logic;
   signal s1 : std_logic;
   signal s2 : std_logic;
   signal s3 : std_logic;
   signal s4 : std_logic;
   signal s5 : std_logic;
   signal s6 : std_logic;
   signal s7 : std_logic;
   signal cout : std_logic;

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: full_adder_8bit PORT MAP (
          a0 => a0,
          a1 => a1,
          a2 => a2,
          a3 => a3,
          a4 => a4,
          a5 => a5,
          a6 => a6,
          a7 => a7,
          b0 => b0,
          b1 => b1,
          b2 => b2,
          b3 => b3,
          b4 => b4,
          b5 => b5,
          b6 => b6,
          b7 => b7,
          cin => cin,
          s0 => s0,
          s1 => s1,
          s2 => s2,
          s3 => s3,
          s4 => s4,
          s5 => s5,
          s6 => s6,
          s7 => s7,
          cout => cout
        );


 

   -- Stimulus process
   stim_proc: process
   begin		
        a7<='0'; a6<='0'; a5<='0'; a4<='0'; a3<='0'; a2<='1'; a1<='0'; a0<='1';
        b7<='0'; b6<='0'; b5<='0'; b4<='0'; b3<='0'; b2<='1'; b1<='1'; b0<='0';
        cin <= '0'; wait for 100 ns;
		  
		  a7<='0'; a6<='0'; a5<='0'; a4<='0'; a3<='1'; a2<='0'; a1<='0'; a0<='1';
        b7<='0'; b6<='0'; b5<='0'; b4<='0'; b3<='1'; b2<='0'; b1<='1'; b0<='0';
        cin <= '0';
        wait for 100 ns;
		  
		  a7<='0'; a6<='0'; a5<='0'; a4<='0'; a3<='1'; a2<='1'; a1<='0'; a0<='0';
        b7<='0'; b6<='0'; b5<='0'; b4<='0'; b3<='1'; b2<='1'; b1<='0'; b0<='0';
        cin <= '0';
        wait for 100 ns;
		  
		  a7<='1'; a6<='1'; a5<='1'; a4<='1'; a3<='1'; a2<='1'; a1<='1'; a0<='1';
        b7<='1'; b6<='1'; b5<='1'; b4<='1'; b3<='1'; b2<='1'; b1<='1'; b0<='1';
        cin <= '0';
        wait for 100 ns;

        -- End simulation
        wait;
   end process;

END;
