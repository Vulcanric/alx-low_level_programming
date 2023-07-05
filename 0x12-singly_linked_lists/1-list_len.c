#include "lists.h"

/**
 * list_len - counts the number of nodes
 * @h: Head node of list_t list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int num_of_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}
