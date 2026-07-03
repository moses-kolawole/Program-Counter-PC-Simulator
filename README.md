# Program Counter (PC) Simulator

## Overview

This project demonstrates how the **Program Counter (PC)** works during program execution. The Program Counter is one of the most important CPU registers because it keeps track of the next instruction that the processor should execute.

In this simulation, I created a list of simple instructions and used an integer variable to represent the Program Counter. As each instruction is executed, the Program Counter is increased to point to the next instruction, allowing the program to execute sequentially just like a real processor.

---

## Project Objective

The objectives of this project are to:

* Simulate the behavior of the Program Counter (PC).
* Understand how a processor executes instructions sequentially.
* Demonstrate how the Program Counter moves from one instruction to the next.
* Relate the Program Counter to the instruction execution cycle of a CPU.

---

## What is the Program Counter (PC)?

The **Program Counter (PC)** is a special CPU register that stores the address (or position) of the next instruction to be executed.

Every time the processor completes an instruction, the Program Counter is updated so that execution continues with the next instruction in memory.

In this project, instead of using actual memory addresses, the Program Counter points to the index of an instruction stored in an array.

---

## Instructions Used

The program contains four simple instructions:

* Load Data
* Add Numbers
* Store Result
* End Program

These instructions represent a simple sequence of operations that the simulated CPU executes one after another.

---

## Project code files

[Click here to access the code file](code)

## Project output image

![Click Here to check out the image of the project](images/Program_Counter_(PC)_Simulator_project2_photo1.png)


## How the Program Works

The program begins by creating an array containing four instructions.

```text
Instruction 0 → Load Data
Instruction 1 → Add Numbers
Instruction 2 → Store Result
Instruction 3 → End Program
```

A variable named **pc** is initialized to **0**, representing the Program Counter.

```text
pc = 0
```

The program then enters a loop where it:

1. Displays the current value of the Program Counter.
2. Displays the instruction currently being executed.
3. Waits for one second to simulate execution.
4. Increases the Program Counter by one.
5. Repeats the process until all instructions have been executed.

This demonstrates how a processor moves through instructions in sequential order.

---

## Program Flow

```text
Start
   │
   ▼
Create Instruction List
   │
   ▼
Initialize Program Counter (PC = 0)
   │
   ▼
Display Current Instruction
   │
   ▼
Execute Instruction
   │
   ▼
Increase Program Counter
   │
   ▼
More Instructions?
   │
 ┌─Yes─────────────┐
 │                 │
 ▼                 │
Execute Next       │
Instruction        │
 │                 │
 └─────────────────┘
   │
  No
   │
   ▼
Display Program Completed
   │
   ▼
End
```

---

## Sample Output

```text
Good day, here is the Program Counter (PC) simulation.

----------------------------------
Program Counter (PC): 0
Current Execution: Load Data

----------------------------------
Program Counter (PC): 1
Current Execution: Add Numbers

----------------------------------
Program Counter (PC): 2
Current Execution: Store Result

----------------------------------
Program Counter (PC): 3
Current Execution: End Program

----------------------------------
Program Execution Completed Successfully.
```

---

## Project Demo video

[Click here to check out the project Demo video](video/Program_Counter_(PC)_Simulator_project2_video.mp4)


## What I Learned

Through this project, I gained a better understanding of how the **Program Counter** controls the flow of program execution.

I learned that:

* The Program Counter always points to the next instruction to execute.
* Instructions are executed one after another in sequential order.
* After each instruction is completed, the Program Counter is updated.
* The CPU continues executing instructions until there are no more instructions left.

Although this project uses a simple array instead of actual memory addresses, it clearly demonstrates the basic concept of sequential instruction execution inside a processor.

---

## Concepts Covered

* Program Counter (PC)
* CPU Instruction Execution
* Sequential Execution
* Arrays in C
* Loops
* Computer Architecture Fundamentals

---

## Possible Improvements

Some future improvements for this project include:

* Simulating actual memory addresses instead of array indexes.
* Adding branch and jump instructions.
* Supporting user-defined instruction sets.
* Simulating additional CPU registers such as the Stack Pointer (SP), Link Register (LR), and Program Status Register (PSR).
* Expanding the simulator into a simple CPU instruction emulator.

---

## Technologies Used

* **Programming Language:** C
* **Compiler:** GCC
* **Concepts Covered:**

  * Program Counter
  * Instruction Execution
  * Arrays
  * Loops
  * Computer Architecture

---

## Conclusion

This project provides a simple simulation of the Program Counter and demonstrates how a processor executes instructions sequentially. By using an array of instructions and updating the Program Counter after each execution, the project offers a practical understanding of one of the most important CPU registers and serves as a foundation for more advanced topics such as branching, jumping, and complete CPU instruction execution.
