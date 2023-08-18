#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: pointer to pointer to the head node of the list
 * @n: Integer to include
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new; /* new node */
	dlistint_t *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (current == NULL)
		*head = new;

	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new;
		new->prev = current;
	}

	return (new);
}
