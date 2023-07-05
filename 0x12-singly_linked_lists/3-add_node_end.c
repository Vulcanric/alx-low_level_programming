#include "lists.h"

/**
 * add_node_end - Adds a node at the end of a list_t list
 * @head: pointer to the head node of the list
 * @str: the string to be assigned to the str member
 * of a list_t node
 * Return: pointer to the new node created
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || *head == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
		new_node->str = "(nil)";

	new_node->len = _strlen(str);
	new_node->next = NULL;
	(*head)->next = new_node;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - Counts the number of characters contained in a string
 * @str: the string to count
 * Return: the count of chars in the string
 */
size_t _strlen(const char *str)
{
	unsigned int counter = 0;

	while (*str != '\0')
	{
		counter++;
		str++;
	}

	return (counter);
}
