#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: First node of the list
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head) /* IF head == null */
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		free(temp->str);
	}
}
