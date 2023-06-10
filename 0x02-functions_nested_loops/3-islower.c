#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: if lowercase 1, else 0
 */
int _islower(int c)
{
	int result; /* Variable to hold return value */

	/*
	 * IF c is greater than or equal to 'a'
	 * and c is less than or equal to 'z'
	 */
	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
		result = 0;

	return (result);
}
