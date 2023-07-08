#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes the char c to stdout
 * @c: the char to to print
 *
 * Return: 1 if successful, else -1 and
 * errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
