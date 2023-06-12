## 0x0A. C - argc, argv
### Learning objectives
- How to use aguments passed to a program.
- What are the two prototypes of `main`, and in which case are each supposed to be used.
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters.

## Tasks
### 0. A program that prints it's name, followed by a new line.
- If you rename the program, it will print the new name, without having to compile again.
- The path will not be removed.
- File: `0-whatsmyname.c`

### 1. A program that prints the number of arguments passed into it.
- Prints a number, followed by a new line
- File: `1-args.c`

### A program that prints all arguments it receives.
- All arguments are printed, including the first one
- Prints one argument per line, ending with a new line
- File: `2-args.c`

### A program that multiplies two numbers passed to it
- Prints the result of the multiplication followed by a new line
- If the program does not receive two arguments, it prints `Error`, followed by a new line
- File: `3-mul.c`

### A program that adds positive numbers.
- Prints the result followed by a new line
- Prints `0`, if no number is passed to it
- Prints `Error`, if one of the number contains symbols that are not digits
- File: `4-add.c`

### program that prints the minimum number of coins to make change for an amount of money.
- Usage: `./change cents`
- where `cents` is the amount of cents you need to give back
- Prints `Error` if the number of arguments passed to the  program is not exactly 1
- Prints `0` if the number passed as an argument is negative
- You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
- File: `100-change.c`
