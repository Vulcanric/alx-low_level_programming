#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to memory area where it is filled into
 * @b: Constant byte that is used to fill
 * @n: first n bytes of the memory area pointed to by s
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
