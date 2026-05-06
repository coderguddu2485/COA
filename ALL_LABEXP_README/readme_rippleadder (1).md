# 4-Bit Ripple Carry Adder

## Objective

To design and implement a 4-bit Ripple Carry Adder (RCA) and analyze its propagation delay.

---

## Overview

This project presents the design and implementation of a 4-bit Ripple Carry Adder. The circuit performs the addition of two 4-bit binary numbers using a cascade of full adders. The carry output of each stage is connected to the carry input of the next stage, forming a sequential carry propagation mechanism.

---

## Theory

A Ripple Carry Adder consists of multiple full adders connected in series. Each full adder is responsible for adding corresponding bits of the input numbers along with a carry input.

The carry generated at each stage propagates to the next stage, which causes a delay known as ripple delay. This delay increases linearly with the number of bits.

---

## Full Adder Equations

### Sum:

```id="6d7kq2"
S = A XOR B XOR Cin
```

### Carry:

```id="9w2k1m"
Cout = (A AND B) OR (Cin AND (A XOR B))
```

---

## Design Description

The 4-bit Ripple Carry Adder is constructed using four full adders connected in series.

### Inputs

* A[3:0] – 4-bit binary input
* B[3:0] – 4-bit binary input
* Cin – Initial carry input

### Outputs

* S[3:0] – 4-bit sum output
* Cout – Final carry output

Each full adder receives the carry from the previous stage as its input.

---

## Working Principle

1. The least significant bit (LSB) full adder takes Cin as input
2. Each subsequent full adder takes carry from the previous stage
3. The carry propagates through all stages until the most significant bit (MSB)
4. Final output consists of sum bits and final carry

---

## Delay Calculation

The total propagation delay depends on the delay of each full adder.

Let:

* t_FA = propagation delay of one full adder

Then:

```id="6n1kzp"
Total Delay = 4 × t_FA
```

This represents the worst-case delay when the carry propagates through all four stages.

---

## Results

* The circuit correctly performs binary addition for all input combinations
* The propagation delay increases linearly with the number of bits
* The behavior matches theoretical expectations

---

## Advantages

* Simple and easy to design
* Requires fewer components

---

## Limitations

* High propagation delay due to ripple effect
* Not suitable for high-speed applications

---

## Applications

* Basic arithmetic operations in digital systems
* Used in simple processors and ALUs
* Foundation for understanding advanced adder designs

---

## Conclusion

The 4-bit Ripple Carry Adder was successfully designed and implemented. The results confirm correct functionality and demonstrate that propagation delay increases linearly due to carry propagation. This limitation motivates the use of faster adder designs such as carry look-ahead adders in high-speed systems.

---

## Files Included

* Design files for the 4-bit Ripple Carry Adder
* Simulation and/or test files
* Supporting documentation
