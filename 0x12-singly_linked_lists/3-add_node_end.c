#include "lists.h"

/**
 * add_node_end - Adds a node at the end of a list_t list
 * @head: pointer to the head node of the list
 * @str: the string to be assigned to the str member
 * of a list_t node
 * Return: pointer to the new node created, or null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
		new_node->str = "(nil)";
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}

	return (new_node);
}
