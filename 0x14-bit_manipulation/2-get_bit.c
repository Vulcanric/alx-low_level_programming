#include "main.h"

/**
 * get_bit - Sorts for the value of a bit at
 * a given index in the binary form of a number
 * @n: Number whose binary number is examined
 * @index: the index to get the value from
 * Return: the value of the bit
 * at index "index", or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		/* moving bit at index to the least significant bit */
		n >>= 1;
	}

	/* return the value when the bit is there */
	return (n & 01);
}
