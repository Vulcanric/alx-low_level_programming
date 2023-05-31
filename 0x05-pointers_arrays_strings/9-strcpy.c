#include "main.h"

/**
 * _strcpy - Copies string from one place to another
 * @src: pointer in which the string is copied from
 * @dest: destination of the string copied
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i; /* Index */

	/*
	 * FOR LOOP
	 *  Initialize i to be zero
	 *  break when index of pointer src is equal to NULL byte
	 *  Increment i
	 */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i]; /* Assign indexes of dest to be equal to indexes of src */
	}
	return (dest); /* return the copied value stored in dest */
}
