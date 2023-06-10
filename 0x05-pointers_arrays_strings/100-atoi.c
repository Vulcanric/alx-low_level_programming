#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: pointer to the string to be converted
 * Return: s, if the character is number.
 * else 0.
 */
int _atoi(char *s)
{
	unsigned int res = 0; /* result of the conversion */
	int sign = 1; /* To determine sign of character */
	int i;

	i = 0;
	/* Handling signs */
		/* WHILE character is not null and is not a number */
	while (s[i] && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-') /* IF character is minus */
			sign *= -1; /* Let sign be whatever sign was before * -1 */
		i++;
	}

	/* Handling numbers */
		/* WHILE character is not null and is a number('0' - '9') */
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}

	/* Applying sign to my result by multiply the sign gotten by result */
	res *= sign;

	return (res);
}
