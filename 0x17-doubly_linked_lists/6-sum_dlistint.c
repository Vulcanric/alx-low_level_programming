#include "lists.h"

/**
 * sum_dlistint - Sums all the data(n) of list
 * @head: pointer to the head node of list
 *
 * Return: Addition of all list data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nodes;
	int sum = 0;

	nodes = head;

	while (nodes != NULL)
	{
		sum += nodes->n; /* sum = sum + nodes data */
		nodes = nodes->next; /* traversing the list */
	}

	return (sum);
}
