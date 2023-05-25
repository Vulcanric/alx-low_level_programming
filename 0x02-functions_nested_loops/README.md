## 0x02. C - Functions, nested loops
This project aims to learn functions in C
- How to declare and define them, function prototypes, function call, header files and others
- Nested loops
- All prototypes are stored in the [`main.h`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/main.h) file.

#### 1. A program that prints `_putchar`, followed by a new line
- Only used a user-defined function `_putchar`
- file: [`0-putchar.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c)

#### 2. A fuction that prints the alphabet, in lowercase, followed by a new line
- Only the user define function `_putchar` is used
- prototype: `void print_alphabet(void);`
- file: [`1-alphabet.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c)

#### 3. A function that prints 10 times the alphabet, in lowercase, followed by a new line
- prototype: `void print_alphabet_x10(void);`
- Only the user define function `_putchar` is used
- file: [`2-print_alphabet_x10.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c)

#### 4. A function that checks for lowercase character.
- prototype: `int _islower(int c);`
- Returns 1 if c is lowercase and 0 otherwise
- file: [`3-islower.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c)

#### 5. A function that checks for alphabetic character.
- prototype: `int _isalpha(int c);`
- Returns 1 if c is a letter, lowercase or uppercase
- Returns 0 otherwise
- file: [`4-isalpha.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c)

#### 6. A function that prints the sign of a number.
- Prototype: `int print_sign(int n);`
- Returns 1 and prints + if n is greater than zero
- Returns 0 and prints 0 if n is zero
- Returns -1 and prints - if n is less than zero
- file: [`5-sign.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c)

#### 7. A function that computes the absolute value of an integer.
- Prototype: `int _abs(int);`
- file: [`6-abs.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/6-abs.c)

#### 8. A function that prints the last digit of a number.
- Prototype: `int print_last_digit(int);`
- Returns the value of the last digit
- file: [`7-print_last_digit`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/7-print_last_digit)

#### 9. A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
- Prototype: `void jack_bauer(void);`
- file: [`8-24_hours.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-24_hours.c)

#### 10. A function that prints the 9 times table, starting with 0.
- Prototype: `void times_table(void);`
- Aligned and seperated by commas `,`.
- file: [`9-times_table.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/9-times_table.c)

#### 11. A function that adds two integers and returns the result.
- Prototype: `int add(int, int);`
- file: [`10-add.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/10-add.c)

#### 12. A function that prints all natural numbers from `n` to `98`, followed by a new line.
- Prototype: `void print_to_98(int n);`
- Numbers are separated by a comma, followed by a space
- Numbers is printed in order
- The first printed number is the number passed to the function
- The last printed number is `98`
- file: [`11-print_to_98.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c)
## Advanced
#### 13. A  function that prints the `n` times table, starting with 0.
- Prototype: `void print_times_table(int n);`
- If `n` is greater than `15` or less than `0` the function will not print anything.
- Aligned, and seperated by commas `,`.
- file: [`100-times_table.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/100-times_table.c)

#### 14 A program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.
If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. The sum of these multiples is `23`.
- file: [`101-natural.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x02-functions_nested_loops/101-natural.c)
