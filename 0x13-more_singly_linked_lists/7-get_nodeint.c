#include "lists.h"

/**
 * get_nodeint_at_index - get the list node at a particular index
 * @head: pointer to the topmost element
 * @index: index to check for element (node)
 * Return: node at index @index or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	if (!head)
		return (NULL);

	current = head;
	while (current && i < index) /* Breaks when current node is at index */
	{
		i++;
		current = current->next;
	}

	if (!current)
		return (NULL);

	/* return current node at index @index */
	return (current);
}
