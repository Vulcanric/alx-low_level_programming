## C Variables, if, else statement and loops

### Tasks
##### 1. Positive anything is better than negative nothing
This program will assign a random number to the variable n each time it is executed. It should print whether the number stored in the variable `n` is positive or negative
- file: [`0-positive_or_negative.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c)
- The variable `n` will store a different value every time you will run this program
- The output of the program is:
	- The number, followed by
		- If the number is greater than 0: `is positive`
		- If the number is 0: `is zero`
		- If the number is less than 0: `is negative`
	- followed by a new line

##### 2. The last digit
This program will assign a random number to the variable n each time it is executed. It should print the last digit of the number stored in the variable `n`
- file: [`1-last_digit.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c)
- The variable `n` will store a different value every time you run this program
- The output of the program is:
	- The string `Last digit of`, followed by
	- `n`, followed by
	- the string `is`, followed by
		- if the last digit of `n` is greater than 5: the string `and is greater than 5`
		- if the last digit of `n` is 0: the string `and is 0`
		- if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`

##### 3. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
This program prints the alphabet in lowercase, followed by a newline.
- file: [`2-print_alphabet.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c)
- Only the `putchar` function is used
- All code is in the `main` function
- `putchar` is used twice

##### 4. alphABET
A program that prints the alphabet in lowercase, and then in uppercase, followed by a newline.
- file: [`3-print_alphabets.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c)
- Only the `putchar` function is used
- All code is in the `main` function
- `putchar` is used twice

##### 5. When I was having that alphabet soup, I never thought that it would pay off
- file: [`4-print_alphabt.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c)
- Prints all letters except `q` and `e`
- Only `putchar` function is used
- All code is in the `main` function
- `putchar` is used twice

##### 6. Numbers
This program prints all single digit numbers of base 10 starting from `0`, followed by a newline
- file: [`5-print_numbers.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c)
- All code is in the `main` function

##### 7. Numberz
This program prints all base 10 single digit number starting with `0` and a newline
- file: (`6-print_numberz.c`)[https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c]
- Variable of type `char` is not used
- Only the `putchar` function is used
- All code is in the `main` function

##### 8. Smile in the mirror
This program prints the lowercase letters in reverse, followed by a newline
- file: [`7-print_tebahpla.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c)
- Only the `putchar` function is used
- All code is in the `main` function
- `putchar` is only used twice

##### 9. Hexadecimal
A program that prints all the base 16 numbers
- file: [`8-print_base16.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c)
- Only the `putchar` function is used and it is used three times
- All codes are in the `main` function

##### 10. Patience, persistence and perspiration make an unbeatable combination for success
A program that prints all possible combinations of single-digit numbers
- file: [`9-print_comb.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/9-print_comb.c)
- Numbers are sepeated by `,`, followed by space
- Numbers are printed in ascending order
- Only the `putchar` function is used, and it is used four times
- Variable of type `char` is not allowed

### Advanced tasks
##### 11. Inventing is a combination of brains and materials. The more brains you use, the less material you need
A program that prints all possible different combinations of two digits
- file: [`100-print_comb3.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/100-print_comb3.c)
- Numbers are seperated by `,`, followed by space
- The two digits must be different
- `01` and `10` are considered the same combination of digits `0` and `1`
- It prints only the smallest combination of two digits
- Numbers are printed in ascending order, with two digits
- Only `putchar` function is used, and it is used five times
- Variable of type `char` is not allowed and not used
- All codes is in the `main` function

##### 12. The success combination in business is: Do what you do better... and: do more of what you do...
- file: [`101-print_comb4.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/101-print_comb4.c)
- Numbers are seperated by `,`, followed by space
- The three digits are different
- `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
- Prints only the smallest combinations of three digits
- Numbers are printed in ascending order, with three digits
- Only `putchar` function is used, and it is used three times
- Variable of type `char` is not allowed and not used
- All codes is in the `main` function

##### 13. Software is eating the World
Prints all possible combinations of two two-digit numbers
- file: [`102-print_comb5.c`](https://github.com/Vulcanric/alx-low_level_programming/blob/master/0x01-variables_if_else_while/102-print_comb5.c)
- The numbers range from `0` to `99`
- The two numbers are seperated by space
- All numbers are printed with two digits. `1` is printed as `01`
- The combination of numbers are seperated by comma `,`, followed by a space
- The combinations of the numbers is printed in ascending order
- `00 01` and `01 00` are considered same combination of the numbers `0` and 1`
- Only `putchar` function is used and it is used eight times
- Variables of type `char` is not allowed and not used
- All codes are in the `main` function
