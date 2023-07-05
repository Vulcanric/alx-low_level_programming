#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Head node of the list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int num_of_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}
