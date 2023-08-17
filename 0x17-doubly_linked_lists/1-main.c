#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	size_t n;
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t hello = {8, NULL, NULL};

	head = &hello;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (EXIT_FAILURE);

	new->n = 9;
	head->prev = new;
	new->prev = NULL;
	new->next = head;
	head = new;

	n = dlistint_len(head);
	printf("-> %lu elements\n", n);
	free(new);

	return (EXIT_SUCCESS);
}
