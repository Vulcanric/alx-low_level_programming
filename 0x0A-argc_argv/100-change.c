#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to change an amount of money
 * @argc: argument counter
 * @argv: array of strings
 * Return: 0 if success, else 1 if the number of argument passed is not one
 */
int main(int argc, char *argv[])
{
	int cent, n = 0;

	if (argc == 2) /* IF number of argument is one */
	{
		cent = atoi(argv[1]);
		if (cent >= 0)
		{
			if (cent >= 25)
			{
				n += (cent / 25);
				cent = (cent % 25);
			}
			if (cent >= 10 && cent < 25)
			{
				n += (cent / 10);
				cent = (cent % 10);
			}
			if (cent >= 5 && cent < 10)
			{
				n += (cent / 5);
				cent = (cent % 5);
			}
			if (cent >= 2 && cent < 5)
			{
				n += (cent / 2);
				cent = (cent % 2);
			}
			if (cent == 1)
				n += 1;
			printf("%d\n", n);
		}
		else
			printf("0\n");
	}
	else /* ELSE if the number of arguments passed is not exactly one */
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
