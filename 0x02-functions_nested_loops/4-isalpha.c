#include "main.h"

/**
 * _isalpha - Checks if character is an alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if 'c' is an alphabet
 * else 0.
 */
int _isalpha(int c)
{
	int result; /* Variable to hold the return value */

	/*
	 * IF c is greater or equal to 'a'
	 * and c is less or equal to 'z'
	 * OR
	 * c is greater or equal to 'A'
	 * and c is less or equal to 'Z'
	 */
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		result = 1; /* THEN let the return value be 1 */
	}
	else
		result = 0; /* ELSE let the return value be 0 */

	return (result); /* Return the return value gotten */
}
