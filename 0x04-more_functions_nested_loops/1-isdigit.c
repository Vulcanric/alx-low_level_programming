#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c: character to check
 *
 * Return: 1 if 'c' is a digit
 * else 0
 */
int _isdigit(int c)
{
	int valret;

	if (c > 47 && c < 58)
	{
		valret = 1;
	}
	else
		valret = 0;

	return (valret);
}
