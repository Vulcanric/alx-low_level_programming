#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: topmost node of the list
 * @n: integer to be included with new node
 * Return: the addtess of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
		new->next = *head;

	*head = new;

	return (new);
}
