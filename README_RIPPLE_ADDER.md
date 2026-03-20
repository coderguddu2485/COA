Overview

This repository contains the design and implementation of a 4-bit Ripple Carry Adder (RCA). The circuit adds two 4-bit binary numbers using a cascade of full adders, where the carry output of each stage is connected to the carry input of the next stage. The primary objective of this experiment is to design the adder and analyze its propagation delay.

Theory

A ripple carry adder consists of multiple full adders connected in series. Each full adder computes the sum and carry for a single bit position. The carry generated at each stage “ripples” through to the next stage, which leads to an overall delay that increases linearly with the number of bits.

Full Adder Equations

Sum (S) = A ⊕ B ⊕ Cin

Carry (Cout) = (A · B) + (Cin · (A ⊕ B))

Design Description

The 4-bit ripple carry adder is constructed using four full adders.

Inputs:

A[3:0] – 4-bit input

B[3:0] – 4-bit input

Cin – Carry input

Outputs:
S[3:0] – 4-bit sum

Cout – Final carry output

Each full adder takes the carry output from the previous stage as its carry input.

Delay Calculation

The total propagation delay of a ripple carry adder depends on the time taken for the carry to propagate through all full adders.

If:

t_FA = propagation delay of one full adder

Then the total delay for a 4-bit ripple carry adder is:
Total Delay = 4 × t_FA
This worst-case delay occurs when the carry propagates through all four stages.

Results
The circuit correctly performs binary addition for all input combinations.

The measured/simulated delay confirms that the propagation delay increases linearly with the number of bits, which is a known limitation of ripple carry adders.

Conclusion
The 4-bit ripple carry adder was successfully designed and implemented. While the design is simple and easy to implement, its main drawback is the increased propagation delay due to carry rippling. This highlights the need for faster adder architectures, such as carry look-ahead adders, in high-speed applications.

Files Included

Design files for the 4-bit ripple carry adder

Simulation and/or test files

Supporting documentation