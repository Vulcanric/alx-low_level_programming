#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: pointer to pointer to the head node of list
 * @n: Integer to be included
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new; /* new node */
	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (current != NULL)
		current->prev = new;
	*head = new;

	return (new);
}
