#include "lists.h"

/**
 * sum_listint - returns the sum of data (n) of all
 * element of the list
 * @head: head node of the list
 * Return: the sum of data in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (!head)
		return (sum); /* return 0 */

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
