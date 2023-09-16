#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: topmost element of list
 * @n: integer included with the new node
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new;
	}

	return (new);
}
