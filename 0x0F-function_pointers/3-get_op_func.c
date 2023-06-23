#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct operator function to perform
 * the operation asked by the user
 * @s: Operator passed to argument
 *
 * Return: Pointer to function that correspond to the given operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) != *s)
			i++;
	}

	/* IF s does not match any character until ops[i].op is null */
	if (ops[i].op == NULL)
	{
		return (NULL);
	}

	return (ops[i].f);
}
