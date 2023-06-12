#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: argument counter
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i; /* Index */

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]); /* Print argument at index i */
	}
	return (0);
}
