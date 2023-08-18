#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to pointer to the head node of list
 * @idx: the index (position) to place new node
 * @n: integer to be included
 * Return: pointer to the new node, or NULL if it failed or
 * idx is out of range
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *prev_node;
	dlistint_t *current;
	dlistint_t *new;

	current = *h;

	if (idx == 0 || current == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (idx > 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = NULL;

		for (i = 0; i <= idx && (current != NULL); i++)
		{
			if (i == idx)
				break;
			prev_node = current;
			current = current->next;
		}
		if (i == idx)
		{
			new->next = current; /* NEW --> CURRENT */
			if (current != NULL)
				current->prev = new; /* NEW <-- CURRENT */
			prev_node->next = new; /* PREV_NODE --> NEW */
			new->prev = prev_node; /* PREV_NODE <-- NEW */
			/* PREV_NODE --> <-- NEW --> <-- CURRENT */
			return (new);
		}
	}
	return (NULL);
}
