# 8-bit Shift Register Using D Flip-Flops

## Objective

To design and simulate an 8-bit shift register using D flip-flops in Logisim and observe the shifting of data with each clock pulse.

---

## Overview

This experiment demonstrates the design and simulation of an 8-bit shift register using D flip-flops. A shift register is a sequential circuit used for storing and shifting binary data. The circuit shifts data serially from one flip-flop to the next on every clock pulse.

---

## Theory

A shift register is a sequential digital circuit composed of flip-flops connected in series. Each flip-flop stores one bit of data, and the data is transferred from one stage to the next on each clock pulse.

In an 8-bit shift register:

* Eight D flip-flops are connected in series
* A common clock signal controls all flip-flops
* Data is shifted one position per clock pulse

This type of register is commonly referred to as a Serial-In Serial-Out (SISO) shift register.

---

## Components Used

* 8 × D Flip-Flops
* Clock
* Input pin (for serial data)
* Output pins or LEDs (Q0–Q7)
* Wiring tools

---

## Circuit Description

* The input data is applied to the first flip-flop
* The output of each flip-flop is connected to the input of the next
* All flip-flops share a common clock signal
* LEDs are connected to outputs to observe data movement

---

## Working Principle

* Data is entered serially into the first flip-flop
* On each clock pulse, data shifts from one flip-flop to the next
* Each stage holds its value until the next clock pulse
* After 8 clock cycles, the data reaches the final output

---

## Procedure

1. Open Logisim and create a new circuit
2. Place eight D flip-flops in a row
3. Add a clock and connect it to all flip-flops
4. Add an input pin and connect it to the first flip-flop
5. Connect each flip-flop output to the next flip-flop input
6. Attach LEDs to observe outputs
7. Run the simulation and apply clock pulses
8. Observe the shifting of data through each stage

---

## Results

The 8-bit shift register was successfully designed and simulated. The input data shifted sequentially through each flip-flop with every clock pulse, confirming correct operation.

---

## Applications

* Data storage
* Serial data transfer
* Communication systems
* Digital signal processing

---

## Conclusion

This experiment demonstrated the working of an 8-bit shift register using D flip-flops. It showed how data can be stored and shifted sequentially using clock pulses, which is an essential concept in digital electronics.

---

## Learning Outcome

* Understood the working of shift registers
* Learned implementation using D flip-flops
* Observed serial data shifting
* Gained knowledge of sequential circuits
