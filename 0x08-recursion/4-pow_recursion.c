#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: 'x' (number)
 * @y: 'y' (power)
 * Return: Exponentiation(power) of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* IF y is lower than 0 */
		return (-1); /* return -1 as exponential */
	else if (y == 0) /* ELSE IF y is zero */
		return (1); /* Set base value for function */
	else
	{
	/* Multiply x until x * base value */
		return (x * _pow_recursion(x, y - 1));
	}
}
