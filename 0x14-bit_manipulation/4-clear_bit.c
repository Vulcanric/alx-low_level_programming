#include "main.h"

/**
 * clear_bit - Sets a bit at a given index to 0
 * @n: Pointer to the number whose bit is to be modified
 * @index: The index at which the bit is to be modified
 * Return: 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int bitmask = 1;

	for (i = 0; i < index; i++)
	{
		if (i < 128) /* Considering 128 as the highest bits range */
		{
			bitmask <<= 1; /* moving the bit with value 1 to index */
		}
		else
			return (-1);
	}
	bitmask = ~bitmask; /* Fliping bits to have more 1s and one 0 at index*/
	*n &= bitmask; /* Disabling the bit of n at index */

	return (1);
}
