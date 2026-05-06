# Full Adder Using Logisim

## Objective

To design and implement a Full Adder circuit using Logisim and verify its output using truth table and logic equations.

---

## Overview

This project implements a Full Adder circuit using Logisim. A Full Adder is a combinational digital circuit that adds three binary inputs and produces a Sum and a Carry output. The circuit has been designed and simulated using Logisim software.

---

## Software Used

* Logisim or Logisim Evolution

---

## Description of Full Adder

A Full Adder performs the addition of two binary bits along with a carry input. It is widely used in arithmetic logic units (ALUs) and digital processors.

---

## Inputs

* A
* B
* Cin (Carry Input)

---

## Outputs

* Sum
* Cout (Carry Output)

---

## Logic Equations

Sum is calculated using XOR operations:

```
Sum = A XOR B XOR Cin
```

Carry is calculated using AND and OR operations:

```
Cout = (A AND B) OR (Cin AND (A XOR B))
```

---

## Truth Table

| A | B | Cin | Sum | Cout |
| - | - | --- | --- | ---- |
| 0 | 0 | 0   | 0   | 0    |
| 0 | 0 | 1   | 1   | 0    |
| 0 | 1 | 0   | 1   | 0    |
| 0 | 1 | 1   | 0   | 1    |
| 1 | 0 | 0   | 1   | 0    |
| 1 | 0 | 1   | 0   | 1    |
| 1 | 1 | 0   | 0   | 1    |
| 1 | 1 | 1   | 1   | 1    |

---

## Circuit Implementation

The Full Adder circuit is implemented using basic logic gates in Logisim:

* Two XOR gates are used to generate the Sum output
* AND gates are used to compute partial carry values
* An OR gate combines these values to produce the final Carry output

---

## How to Run the Project

1. Open Logisim or Logisim Evolution
2. Load the Full Adder circuit file
3. Toggle the input pins A, B, and Cin
4. Observe the Sum and Carry outputs

---

## Applications

* Binary addition
* Arithmetic Logic Unit (ALU) design
* Digital systems and processors

---

## Conclusion

The Full Adder circuit was successfully designed and verified using Logisim. The outputs match the expected truth table and logic equations, confirming the correctness of the design.
