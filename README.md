# Decision Tree AI

This project demonstrates a very basic AI decision-making process using a decision tree in C++. The AI decides whether to "attack" or "retreat" based on the health levels of the player and itself.

## Overview

The program simulates a simple combat scenario where:

- The AI assesses the health of both itself and the player.
- Based on this assessment, it makes a decision:
  - If the player's health is higher, the AI chooses to `retreat`.
  - Otherwise, the AI decides to `attack`.

## Prerequisites

- [GCC (GNU Compiler Collection)](https://gcc.gnu.org/) or any C++ compiler that supports C++11.

## Installation

To compile and run the program:

```bash
# Navigate to the directory containing Decision_Tree.cpp
cd /path/to/your/project

# Compile the program
g++ Decision_Tree.cpp -o DT-ai

# Run the compiled program
./DT-ai
