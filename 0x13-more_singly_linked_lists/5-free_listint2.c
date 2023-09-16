#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * It sets the head node to NULL
 * @head: pointer to pointer to the topmost
 * element of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	current = *head;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
