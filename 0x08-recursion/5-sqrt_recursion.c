#include "main.h"

int sqrt_actual_function(int n);
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
	if (n == 0)
		return (0);
	if (n < 0) /* IF number is a negative number ...*/
		return (-1); /* return -1 signifying error! */
	if (n > 1)
		return (sqrt_actual_function(n));
	return (0);
}

/**
 * sqrt_main_function - Iterates through all natural
 * numbers from zero to n , checking for the square root.
 * @n: Number to find it's square root.
 * Return: square root of n.
 */
int sqrt_actual_function(int n)
{
/* Declare iterator variable, and variable to hold the value returned */
	int i = 0;
	int valret = 0;

/* WHILE loop to go through all natural from 0 to n */
	while (i < n)
	{
	/* IF square of the natural number is equal to n */
		if ((i * i) == n)
		{
		/* Let the value returned be the natural number */
			valret = i;
			break; /* THEN break loop to stop searching */
		}
		else
			valret = -1; /* Indicating that n's sqrt is not a natural number */
		i++; /* Increment i to the next natural number in search */
	}
	return (valret); /* return the return-value gotten from condition */
}
