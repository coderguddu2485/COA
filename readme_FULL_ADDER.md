FULL ADDER USING LOGISIM

Overview
This project implements a Full Adder circuit using Logisim.
A Full Adder is a combinational digital circuit that adds three binary inputs and produces a Sum and a Carry output.
The circuit has been designed and simulated using Logisim software.

Software Used
Logisim or Logisim Evolution

Description of Full Adder
A Full Adder performs the addition of two binary bits along with a carry input.
It is commonly used in arithmetic logic units and digital processors.

Inputs
A
B
Cin (Carry Input)

Outputs
Sum
Cout (Carry Output)

Logic Equations
Sum = A XOR B XOR Cin
Carry = (A AND B) OR (Cin AND (A XOR B))

Truth Table

A B Cin | Sum Cout
0 0 0 | 0 0
0 0 1 | 1 0
0 1 0 | 1 0
0 1 1 | 0 1
1 0 0 | 1 0
1 0 1 | 0 1
1 1 0 | 0 1
1 1 1 | 1 1

Circuit Implementation
The Full Adder circuit is implemented using XOR, AND, and OR gates in Logisim.
Two XOR gates are used to generate the Sum output.
AND and OR gates are used to generate the Carry output.

How to Run the Project
Open Logisim
Load the Full Adder circuit file
Toggle input pins A, B, and Cin
Observe the Sum and Carry outputs

Applications
Binary addition
Arithmetic Logic Unit design
Digital systems and processors

Conclusion
The Full Adder circuit was successfully designed and verified using Logisim.
The output results match the expected truth table and logic equations.