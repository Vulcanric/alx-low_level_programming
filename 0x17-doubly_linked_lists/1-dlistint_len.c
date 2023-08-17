#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the dlistint_t list
 * @h: pointer to the head node of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int num_of_nodes;
	const dlistint_t *current;

	current = h;
	num_of_nodes = 0;

	while (current != NULL)
	{
		num_of_nodes++;
		current = current->next;
	}

	return (num_of_nodes);
}
