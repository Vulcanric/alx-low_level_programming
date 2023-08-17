#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int n; /* number of nodes */
	const dlistint_t *current;

	n = 0;
	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		n++;
		current = current->next;
	}

	return (n);
}
