#include "lists.h"

/**
 * listint_len - returns the number of elements of listint_t list
 * @h: head node of the list
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t num_of_nodes = 0;

	if (!h)
		return (num_of_nodes);

	current = h;
	while (current)
	{
		num_of_nodes++;
		current = current->next;
	}

	return (num_of_nodes);
}
