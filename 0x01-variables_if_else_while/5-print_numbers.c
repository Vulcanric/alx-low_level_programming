#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
