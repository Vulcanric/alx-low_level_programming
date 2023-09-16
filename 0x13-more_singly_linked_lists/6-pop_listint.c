#include "lists.h"

/**
 * pop_listint - deletes the topmost element of list
 * @head: pointer to pointer to the topmost element
 * Return: topmost node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data = 0;

	if (!head || !*head)
		return (data);  /* return 0 */

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
