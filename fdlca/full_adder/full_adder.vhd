library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
 
entity full_adder is
 Port ( A : in STD_LOGIC;
 clk : in std_logic;
 rst : in std_logic;
 sig
 B : in STD_LOGIC;
 Cin : in STD_LOGIC;
 S : out STD_LOGIC;
 Cout : out STD_LOGIC);
end full_adder;
 
architecture rtl of full_adder is
 
begin
 
 S <= A XOR B XOR Cin ;
 Cout <= (A AND B) OR (Cin AND A) OR (Cin AND B) ;
 
end architecture;


