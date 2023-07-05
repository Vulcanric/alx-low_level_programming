#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: pointer to the head node of the list
 * @str: the string to be assigned to
 * the str member of the node
 * Return: pointer to the new node created
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
		new_node->str = "(nil)";
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - counts the characters of a string
 * @str: string to count
 * Return: the length of the string
 */
size_t _strlen(const char *str)
{
	unsigned int counter = 0;

	while (*str != '\0')
	{
		counter++;
		sr++;
	}
	return (counter);
}
