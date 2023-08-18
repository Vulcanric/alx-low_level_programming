#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a dlistint_t linked list
 * @head: pointer to the head node of list
 * @index: index to retrieve node
 * Return: node at index "index", or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current; /* Current node */

	current = head;

	for (i = 0; i <= index && current != NULL; i++)
	{
		if (i == index)
			return (current); /* node at index */
		current = current->next;
	}

	return (NULL); /* It doesn't exist */
}
