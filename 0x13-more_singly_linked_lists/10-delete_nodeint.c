#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * a given position in list
 * @head: pointer to pointer to the head node of the list
 * @idx: position(index) of the new element to delete
 * Return: 1 if successful, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *tmp, *prev, *curr = *head;

	if (!head || !*head)
		return (-1);

	if (idx == 0)  /* deletion at the beginning */
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	else  /* deletion at any other point */
	{
		while (curr && i < idx)
		{
			i++;
			prev = curr;
			curr = curr->next;
		}

		if (i < idx)  /* If i is still less than index */
			return (-1); /* Don't do anything */

		/*				tmp[to free]		*/
		tmp = curr;  /* PREV_NODE -> [(idx)CURR_NODE] -> NEXT_NODE */
		prev->next = curr->next;  /* PREV_NODE -> NEXT_NODE */
		free(tmp);
	}
	return (1); /* Success! */
}
