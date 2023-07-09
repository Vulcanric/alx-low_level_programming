#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given
 * index of the binary form of a number to 1
 * @n: Pointer to the number
 * @index: The bit index to set
 * Return: 1 if it worked, else -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int bitmask = 1;

	for (i = 0; i < index; i++)
	{
		if (i < 128) /* Considering 128 as the highest bits range */
		{
			bitmask <<= 1; /* Moving the bit with value 1 to index */
		}
		else /* When out of range */
			return (-1);
	}

	*n |= bitmask; /* Combining n and bitmask to enable the bit at index */

	return (1);
}
