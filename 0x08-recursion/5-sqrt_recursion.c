#include "main.h"

int sqrt_function(int n, int lower_nums);
/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: Number
 * Return: natural square root, if n has a natural square root
 * else return -1
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n < 0) /* IF number is a negative number ...*/
		return (-1); /* return -1 signifying error! */
	if (n > 1)
		return (sqrt_function(n, 2));

	return (0);
}

/**
 * sqrt_function - Helps the _sqrt_recursion function
 * @n: Number to find it's square root.
 * @lower_nums: numbers lower than 'n'
 * Return: square root of n, else -1
 */
int sqrt_function(int n, int lower_nums)
{
	if (n == lower_nums * lower_nums) /* IF number square is equal to n */
		return (lower_nums); /* return number */
/* ELSE if number square is not equal to n until number is equal to n */
	else if (n == lower_nums)
		return (-1); /* return -1 indicating n is not a square */

	return (sqrt_function(n, lower_nums + 1));
}
