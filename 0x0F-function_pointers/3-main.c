#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function of the calculator program
 * @argc: Argument counter
 * @argv: Argument vector (Characters passed as argument)
 *
 * Return: 0 (Success)
 */
int main(int __attribute__((unused))argc, char *argv[])
{
	int num1, num2, result;
	char *op_ch;
	char op_l[] = "/%";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op_ch = argv[2];
	num2 = atoi(argv[3]);

	/*
	 * IF operator is not among the 5 operators
	 * or IF operator given is more than one
	 */
	if (get_op_func(op_ch) == NULL || *argv[2]++)
	{
		printf("Error\n");
		exit(99);
	}

	/* IF operator given is '/' or '%' AND second num is 0 */
	if ((op_ch == op_l || op_ch == (op_l + 1)) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op_ch)(num1, num2);
	printf("%d\n", result);

	return (0);
}
