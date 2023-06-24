## 0x10. C - Variadic functions
### Learning Objectives
- What are variadic functions
	- Variadic functions are functions that can take a variable amount of arguments
- How to use `va_start`, `va_arg` and `va_end`
	1. Firtly, declare a variable of type `va_list`
		- This indicates the variable arguments list
	2. Secondly, the `va_start` macro is used to initialize the list
		- It takes two arguments
			- First is the variable argument list and
			- the last known argument/parameter
		- It specifies the argument list to iterate through and initializes it to the last known argument.
		- It goes like this `va_start(va_arglist, last)`
	3. Thirdly, the `va_arg` macro is used to access the next argument in the argument list.
		- It is used like this `va_arg(va_arglist, type_next)`
		- First is the variable argument list, followed by the type of the next unknown argument.
	4. Lastly, the `va_end` is used to free up the list `va_end(va_arglist)`
***See tasks for usage***

- Why and how to use the `const` type qualifier
	- Why? To declare a data as unmodifiable data
	- How? Simply place the `const` key word before the data you want to declare as an unmodifiable data.

### Tasks
#### 0. Beauty is variable, ugliness is constant
This function returns the sum of all its parameters.
- Prototype: `int sum_them_all(const unsigned int n, ...);
- `n` is the number of integers passed to the function
- If `n == 0`, it returns 0
- File: `0-sum_them_all.c`
#### To be is to be the value of a variable
This function prints numbers, followed by a new line.
- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- where `separator` is the string to be printed between numbers
- and n is the number of integers passed to the function
- If `separator` is null, the numbers are not printed
-  Prints a new line at the end
- File: `1-print_numbers.c`
#### One woman's constant is another woman's variable
Function that prints strings, followed by a new line.
- Prototype: void print_strings(const char *separator, `const unsigned int n, ...);`
- where `separator` is the string to be printed between the strings
- and `n` is the number of strings passed to the function
- If separator is NULL, it doesn't print the strings
- If one of the string is NULL, prints `(nil)` instead
- Prints a new line at the end
- File: `2-print_strings.c`
#### 3. To be is a to be the value of a variable
Function that prints anything.
- Prototype: `void print_all(const char * const format, ...);`
- where `format` is a list of types of arguments passed to the function
	- `c`: `char`
	- `i`: `integer`
	- `f`: `float`
	- `s`: `char *`(if the string is NULL, prints (nil) instead)
	- any other char is ignored
- All these are forbidden ( `for`, `goto`, ternary operator, `else`, and `do ... while`
- Maximum of 2 `while` loops and 2 `if` is used and prints a new line at the end
- File: `3-print_all.c`
