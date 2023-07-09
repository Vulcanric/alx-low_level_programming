#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 * to change one number to another
 * @n: The number to change from
 * @m: The number to change to
 * Return: the number of bits that will be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_flip = 0;
	unsigned long int inv_bits;

	/*
	 * Inv_bits will hold a mask containing the bits to be
	 * flipped as 1 and others 0
	 */
	inv_bits = n ^ m;
	while (inv_bits != 0) /* Counting all bits with 1 while moving to right*/
	{
		if (inv_bits & 01) /* IF bit is 1 */
		{
			bits_flip++; /* Increment count */
		}
		inv_bits >>= 1;
	}

	return (bits_flip);
}
