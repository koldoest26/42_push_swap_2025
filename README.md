*This project has been created as part of the 42 curriculum by luisesti.*

# Push Swap

## Description

**Push Swap** is a project that challenges you to sort a stack of integers using a limited set of instructions and the lowest number of operations possible.

The primary goal of this project is to explore **complexity analysis** (Big O notation) and sorting algorithms. It requires manipulating two stacks (`a` and `b`) using operations like `push`, `swap`, `rotate`, and `reverse rotate`. The efficiency of the algorithm is measured by the total number of instructions generated to sort the list.

## Instructions

### Compilation

This project includes a Makefile. To compile the `push_swap` executable, run:

make

### Execution
The program takes a list of integers as arguments (either as separate arguments or as a single string).
./push_swap 2 1 3 6 5 8

If the arguments are valid, the program will output the list of instructions to sort the numbers. If there are duplicates, non-integer arguments, or numbers exceeding the integer limits, it will display Error.

### Testing
You can verify the result using the provided checker:
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG


## Resources

### References
Here are some classic resources and articles used to understand the concepts behind this project:

The Turk Algorithm: The logic used in this project is inspired by the "Turk" (or "Cheapest Insert") sorting strategy, moving nodes to stack B and pushing them back to A in the correct position.
Big O Notation: Concepts of time complexity were studied to ensure the algorithm performs within the limits for 100 and 500 numbers.
Stack Data Structure: Basic operations and linked list implementation in C.

### AI Usage
Artificial Intelligence was used as a supportive tool during the development of this project, specifically for:

Concept Explanation: AI was used to explain the theoretical differences between Radix sort and Greedy algorithms to choose the best approach.
Makefile Optimization: Assisting in creating a relink-free Makefile that correctly handles the compilation of the libft library dependency.
