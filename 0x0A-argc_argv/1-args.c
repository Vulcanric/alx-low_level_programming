#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: argument counter
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Iam not using this parameter */

	/* Print number of arguments without counting argv[0] */
	printf("%d\n", argc - 1);
	return (0);
}
