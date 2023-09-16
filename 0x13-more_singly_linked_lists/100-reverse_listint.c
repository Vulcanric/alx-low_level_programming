#include "lists.h"

/**
 * reverse_listint - reverses a listint list
 * @head: pointer to pointer to the topmost element of list
 * Return: pointer to the reversed list head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev = NULL;

	if (!head || !*head)
		return (NULL);

	/*           top                bottom		*/
	/*            h -> n -> n -> n -> n -> null	*/
	while ((*head)->next)
	{
	/* let curr be the current node while going down the list */
		curr = *head;

	/* Iteration*/
		*head = (*head)->next;

	/* update current-node next point to the previous node */
		curr->next = prev; /* h <- n <- n <- n ... n -> null */
	/* Update prev to point to the current node before the next iteration*/
		prev = curr;
	}

	(*head)->next = curr;

	return (*head); /* return reversed list head node */
}
