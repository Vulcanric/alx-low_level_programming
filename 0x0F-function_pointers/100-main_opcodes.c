#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints this program opcodes
 * @argc: count of argument
 * @argv: Pointer to the argument
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *opcode_byte;
	int numbyte;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbyte = atoi(argv[1]);
	if (numbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode_byte = (char *)main;
	for (i = 0; i < numbyte; i++)
	{
		printf("%02hhx", opcode_byte[i]);
		if (i == (numbyte - 1))
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
