#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 * Return: 0 if s1 is equal to s2, 15 if s1 is greater than s2
 * -15 if s1 character is less than s2 charactr
 */
int _strcmp(char *s1, char *s2)
{
	int retval, i; /* Declare return value and index */

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			retval = 0;
		}
		else if (s1[i] > s2[i])
		{
			retval = 15;
			break;
		}
		else if (s1[i] < s2[i])
		{
			retval = -15;
			break;
		}
	}
	return (retval);
}
