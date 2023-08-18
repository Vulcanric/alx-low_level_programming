#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node specified by the index from list
 * @head: pointer to pointer to the head node of list
 * @index: index("Position") of node to delete
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *prev_node;
	dlistint_t *toFree;
	dlistint_t *next_node;

	toFree = *head;

	if (index == 0 && toFree != NULL)
	{
		*head = toFree->next;
		free(toFree);
		return (1);
	}
	else if (index > 0)
	{
		for (i = 0; i <= index && (toFree != NULL); i++)
		{
			if (i == index)
				break;
			prev_node = toFree;
			toFree = toFree->next;
		}
		if (i == index)
		{
			/* PREV_NODE--> <--ToFREE--> <--NEXT_NODE */
			next_node = toFree->next;

			/* PREV_NODE <--NEXT_NODE */
			if (next_node != NULL)
				next_node->prev = prev_node;

			/* PREV_NODE--> NEXT_NODE */
			prev_node->next = next_node;

			/* X-- ToFREE --X */
			free(toFree);
			return (1);
		}
	}
	return (-1);
}
