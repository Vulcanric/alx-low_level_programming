#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: argument counter
 * @argv: array of strings
 * Return: 0 if success, else 1 if one number contains a
 * symbol that is not digit
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1) /* IF the number of argument passed is more than one */
	{
		for (i = 1; i < argc; i++) /* FOR loop to go through all arguments */
		{
			/* IF the argument is a non-digit symbol ... */
			if (!(*argv[i] >= '0' && *argv[i] <= '9'))
			{
				printf("Error\n"); /* Print error and return 1 */
				return (1);
			}
			else /* ELSE if it is a digit */
				sum += atoi(argv[i]); /* Sum them */
		}
		printf("%d\n", sum); /* Print sum*/
	}

	else /* ELSE if arguments passed is not less than one */
		printf("0\n"); /* Print zero */
	return (0); /* Return 0 for success */
}
