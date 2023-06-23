#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function of the calculator functions
 *
 * Return: 0 (Success)
 */
int main(int __attribute__((unused))argc, char *argv[])
{
	int num1, num2, result;
	char *op_ch;
	char op_l[] = "/%";

	num1 = atoi(argv[1]);
	op_ch = argv[2];
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(op_ch) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op_ch == op_l || op_ch == (op_l + 1)) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op_ch)(num1, num2);
	printf("%d\n", result);

	return (0);
}
