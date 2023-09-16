#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: topmost element of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current, *tmp;

	current = head;

	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
}
