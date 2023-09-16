#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 5, 4096); /* Insertion at middle */
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 0, -1); /* Insertion at beginning */
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 10, 2048); /* Insertion at end */
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 12, 409); /* out of range */
	print_listint(head);
	free_listint2(&head);
	return (0);
}
