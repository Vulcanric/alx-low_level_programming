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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op_ch = argv[2];
	num2 = atoi(argv[3]);

	/*
	 * IF the operator given is not among the 5 operators
	 * or operator given is more than one
	 */
	if (get_op_func(op_ch) == NULL || op_ch[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/* IF */
	if ((*op_ch == '/' || *op_ch == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op_ch)(num1, num2);
	printf("%d\n", result);

	return (0);
}
