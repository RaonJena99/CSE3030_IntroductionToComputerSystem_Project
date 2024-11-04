# CSE3030_IntroductionToComputerSystem_Project

---

# Computer Systems Lab and Assignment Projects

This repository contains solutions for three assignments focused on key concepts in computer systems: **Bit Manipulation Lab**, **Hacking Lab (Reverse Engineering and Buffer Overflow)**, and **Cache Analysis and Simulation**. Each project is designed to develop specific skills in low-level programming, memory management, and systems analysis.

## Table of Contents
1. [Project 1: Bit Manipulation Lab](#project-1-bit-manipulation-lab)
2. [Project 2: Hacking Lab (Reverse Engineering and Buffer Overflow)](#project-2-hacking-lab-reverse-engineering-and-buffer-overflow)
3. [Project 3: Cache Analysis and Simulation](#project-3-cache-analysis-and-simulation)

---

## Project 1: Bit Manipulation Lab

### Overview
The Bit Manipulation Lab is designed to refresh basic C programming skills with a focus on bit-level operations. The project includes four small programming tasks, each requiring specific bit manipulations without conditional constructs or external library functions.

### Task Descriptions
1. **Problem 1-1: copyLSB** (`copyLSB.c`)
   - Function: `copyLSB(x)` - Returns an integer with all bits set to the least significant bit of `x`.
   - Example: `copyLSB(5)` results in `0xFFFFFFFF`, `copyLSB(6)` results in `0x00000000`.

2. **Problem 1-2: absVal** (`absVal.c`)
   - Function: `absVal(x)` - Returns the absolute value of `x`.
   - Constraints: Assume `-SMAX ≤ x ≤ SMAX`.
   - Example: `absVal(-1)` results in `1`.

3. **Problem 1-3: conditional** (`conditional.c`)
   - Function: `conditional(x, y, z)` - Implements a ternary operation equivalent to `x ? y : z` without using conditional statements.

4. **Problem 1-4: addNumber** (`bitset.c`)
   - Function: `addNumber(set, x)` - Adds integer `x` to a bitset represented by `set`. The function assumes `0 <= x <= 127` and `set` is a pointer to a 16-byte array.
   - Example: Adds or retains the bit for `x` within the bitset.

### Directory Structure
Each problem directory (`1-1`, `1-2`, etc.) includes:
- **Makefile** - Builds the program using `make`.
- **main.c** - Driver code for testing (do not modify).
- **validate** - Script to check constraint adherence.
- **testcase/** - Contains test cases and expected output for validation.

### Testing
A `check.py` script in the root directory allows self-grading:
```bash
./check.py all   # Tests all problems
./check.py 1-1   # Tests problem 1-1 only
```

### Submission
Submit the following files:
- `copyLSB.c`, `absVal.c`, `conditional.c`, `bitset.c`

---

## Project 2: Hacking Lab (Reverse Engineering and Buffer Overflow)

### Overview
The Hacking Lab covers reverse engineering and buffer overflow techniques. This project combines concepts from Carnegie Mellon's CS:APP Bomb Lab and Attack Lab to provide practical experience in these areas. The project consists of five problems, each requiring analysis and exploitation of a provided binary.

### Problem Structure
1. **myecho** - Binary file with a buffer overflow vulnerability.
   - Objective: Exploit the buffer overflow to read the content of `secret.txt`.

2. **hint.c** - Contains part or full source code of the target program.
3. **exploit-myecho.py** - Script to trigger a buffer overflow in `myecho` and leak information.

### Key Commands and Tools
- **GDB**: Used for disassembling, examining memory, and setting breakpoints.
   - `disas <func>` - Disassemble function.
   - `x/<N><t> <addr>` - Examine memory contents.
   - `b *<addr>`, `r`, `c` - Set breakpoints, run, and continue program execution.
   - `info reg` - View register values.
  
### Steps to Solve Exploits
1. **Examine Assembly**: Use GDB to disassemble the function and identify vulnerabilities.
2. **Buffer Overflow**: Identify buffer size and input pattern to overwrite specific addresses.
3. **Exploit Construction**: Use Python scripts to provide carefully crafted input to trigger vulnerabilities.

### Self-Grading
The `check.py` script in the Lab 2 directory verifies each exploit:
```bash
./check.py all    # Tests all exploit scripts
./check.py 2-1    # Tests exploit for problem 2-1
```

### Submission
Submit the following files:
- `exploit-myecho.py`, `exploit-strtest.py`, `exploit-array.py`, `exploit-saferead.py`, `exploit-manage.py`

---

## Project 3: Cache Analysis and Simulation

### Overview
This project focuses on cache simulation, analysis of hit/miss rates, and evaluation of cache performance metrics such as Average Memory Access Time (AMAT). The tasks involve analyzing two cache configurations and running calculations based on memory access patterns.

### Problem Descriptions
1. **Direct-Mapped Cache** - Analyze two cache configurations:
   - Cache C1: 4-byte block size.
   - Cache C2: 16-byte block size.
   - Analyze a series of memory accesses to determine hits and misses, and calculate the final cache state.

2. **Multi-Level Cache Analysis** - Analyze a cache with the following parameters:
   - `m = 32`, `b = 8`, `s = 8`, `E = 4`
   - Run through a loop accessing arrays `x`, `y`, `a`, and `b`, calculating hit rates and cache contents.

3. **AMAT Calculation** - Evaluate two cache hierarchies for AMAT.
   - Given hit rates and access times for each level, calculate AMAT for Hierarchy A and Hierarchy B to determine which provides better performance.

### Requirements
- Calculate cache parameters including size, associativity, and block offset.
- For memory access sequences, calculate individual and overall hit rates, as well as final cache contents after specific operations.

### Submission
Submit the required analysis and cache content tables, with explanations for each answer.

---

Each project has been tested and validated as per the provided specifications. Ensure all submissions follow the naming conventions to avoid penalties.
