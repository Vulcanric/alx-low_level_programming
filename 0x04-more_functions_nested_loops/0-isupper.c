#include "main.h"

/**
 * _isupper - Checks if a character is uppercase character
 * @c: character to check
 * Return: 1. if 'c' is uppercase
 * else 0
 */
int _isupper(int c)
{
	int retval;

	if (c >= 65 && c <= 90)
	{
		retval = 1;
	}
	else
		retval = 0;

	return (retval);
}
