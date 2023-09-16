#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * a given position in list
 * @head: pointer to pointer to the head node of the list
 * @idx: position(index) to insert the new element
 * @n: integer included
 * Return: if it is possible to insert at index @idx:
 * address of new element, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *prev, *curr = *head, *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head || idx == 0)  /* Insertion at the beginning */
	{
		new->next = *head;
		*head = new;
	}
	else  /* Insertion at any other point */
	{
		while (curr && i < idx)
		{
			i++;
			prev = curr;
			curr = curr->next;
		}

		if (i < idx)  /* If i is still less than index */
			return (NULL);

		prev->next = new;  /* PREV_NODE -> NEW_NODE  (idx) */
		new->next = curr;  /* PREV_NODE -> NEW_NODE -> CURR_NODE*/
	}
	return (new);
}
