# GDB Debugging Practical

## Objective

To study and understand the working of the GNU Debugger (GDB) and use it to debug a C program by executing it step-by-step, setting breakpoints, and inspecting variables and memory.

---

## Overview

This experiment demonstrates the use of GDB for debugging C programs. Debugging helps in identifying and fixing errors by analyzing program execution in a controlled manner. Using GDB, we can pause execution, inspect variables, and understand how memory and pointers behave during runtime.

---

## Theory

Debugging is the process of identifying and removing errors (bugs) from a program. It allows programmers to observe internal execution rather than just seeing final output.

GDB (GNU Debugger) is a powerful tool used for debugging C and C++ programs. It provides features such as:

* Setting breakpoints
* Step-by-step execution
* Inspecting variables and memory
* Tracking pointer behavior
* Analyzing program flow

---

## Important GDB Commands

* `run` → Starts program execution
* `b <line>` → Sets breakpoint at a specific line
* `n` → Executes next line
* `p <variable>` → Prints variable value
* `info b` → Displays breakpoints
* `q` → Quit GDB

---

## Program Used

```c
#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);

    return 0;
}
```

---

## Program Explanation

* An integer variable `a` is initialized with value 10
* A pointer `p` is declared
* The address of `a` is assigned to pointer `p`
* The program prints the value and address of `a`

This helps in understanding pointer behavior and memory addressing.

---

## Procedure

### Step 1: Compile with Debug Flag

```bash
gcc -g p2.c -o test
```

### Step 2: Start GDB

```bash
gdb ./test
```

### Step 3: Set Breakpoints

```bash
b 4
b 7
```

### Step 4: Run the Program

```bash
run
```

### Step 5: Execute Line by Line

```bash
n
```

### Step 6: Inspect Variables

```bash
p a
p p
p &a
```

### Step 7: View Breakpoints

```bash
info b
```

---

## Observations

* At the first breakpoint, variable `a` is initialized
* Using `p a`, the value of `a` can be observed
* At the second breakpoint, pointer `p` stores the address of `a`
* The values of `p` and `&a` are the same, confirming correct pointer assignment
* GDB allows real-time tracking of execution and memory

---

## Results

The program was successfully debugged using GDB. Breakpoints were set, and variable values and memory addresses were observed step-by-step.

---

## Conclusion

This experiment demonstrated how GDB can be used to debug programs efficiently. It provided a clear understanding of program execution, pointer behavior, and memory addressing.

---

## Learning Outcome

* Learned practical usage of GDB
* Understood step-by-step program execution
* Improved knowledge of pointers and memory
* Developed debugging skills for C programs
