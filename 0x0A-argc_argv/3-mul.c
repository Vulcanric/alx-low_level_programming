#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: argument counter
 * @argv: array of strings
 * Return: 1 if arguments passed are not 2 argument
 * else 0
 */
int main(int argc, char *argv[])
{
	int i; /* Index */
	int mul = 1; /* Variable to hold value gotten from the multiplication */

	if (argc == 3) /* Checking if the arguments passed are two */
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul); /* Print value of multiplication */
	}

	else /* ELSE if arguments passed are not two arguments */
	{
		printf("Error\n");
		return (1); /* Indicating error */
	}

	return (0); /* Indicating success */
}
