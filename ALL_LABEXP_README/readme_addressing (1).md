# Addressing Modes in C - Lab Program

## Objective

To demonstrate and understand different types of addressing modes using a C program, including direct, immediate, indirect, indexed, base, relative, and auto increment/decrement addressing.

---

## Background

Addressing modes define how operands are accessed by the CPU during program execution. While C is a high-level language, these addressing modes can be conceptually demonstrated through variables, pointers, arrays, and control structures.

Understanding addressing modes helps in:

* Learning how memory is accessed
* Understanding low-level execution of programs
* Bridging the gap between C and assembly language

---

## Program Description

This program demonstrates various addressing modes using:

* Global variables
* Local variables
* Pointers
* Arrays
* Loop constructs

Each section of the program represents a different addressing mode.

---

## Addressing Modes Used

### 1. Direct Addressing

Accessing a variable directly.

```c
int global_var = 50;
```

---

### 2. Immediate Addressing

Using a constant value directly.

```c
int a = 20;
```

---

### 3. Register Addressing

Using variables stored in CPU registers.

```c
int b = a;
```

---

### 4. Indirect Addressing

Accessing data using pointers.

```c
int *p = &a;
int c = *p;
```

---

### 5. Indexed Addressing

Accessing array elements using index.

```c
int arr[5] = {1,2,3,4,5};
int d = arr[2];
```

---

### 6. Base Register Addressing

Using base address with offset.

```c
int *base = arr;
int e = *(base + 3);
```

---

### 7. Relative Addressing

Using control flow instructions like loops.

```c
for(int i = 0; i < 3; i++) {
    x += i;
}
```

---

### 8. Auto Increment

```c
f = arr[f++];
```

---

### 9. Auto Decrement

```c
g = arr[--g];
```

---

## Compilation and Execution

### Step 1: Compile

```bash
gcc addressing.c -o addressing
```

### Step 2: Run

```bash
./addressing
```

(For Windows PowerShell)

```powershell
.\addressing
```

---

## Output

```
20 20 3 4 1 2 50
```

---

## Conclusion

This experiment successfully demonstrates different addressing modes using C constructs. Although C does not explicitly define addressing modes like assembly language, the concepts can be illustrated using variables, pointers, arrays, and control flow.

Understanding these concepts is essential for learning low-level programming, compiler design, and computer architecture.
