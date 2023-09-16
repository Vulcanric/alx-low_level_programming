#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head node of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t num_of_nodes = 0;

	if (!h)
		return (num_of_nodes);

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		num_of_nodes++;
		current = current->next;
	}

	return (num_of_nodes);
}
