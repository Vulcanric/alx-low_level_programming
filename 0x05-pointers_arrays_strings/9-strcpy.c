#include "main.h"

/**
 * _strcpy - Copies string from one place to another
 * @src: pointer in which the string is copied from
 * @dest: destination of the string copied
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len; /* Length of string including NULL byte*/

	/*
	 * FOR LOOP
	 *  Initialize i to be zero
	 *  break when index of pointer src is equal to NULL byte
	 *  Increment i
	 */
	len = 0;
	while (src[len] != '\0')
	{
		len++; /* Increment till it is equal to the length of str plus NULL */
	}

	while (len >= 0) /* WHILE length is greater than or equal to 0*/
	{
		dest[len] = src[len]; /*
					* set each character of dest to be equal
					* to the same character on src
					*/
		len--;
	}
	return (dest); /* return the copied value stored in dest */
}
