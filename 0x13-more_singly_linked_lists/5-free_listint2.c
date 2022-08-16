#include "lists.h"

/**
 * free_listint2 - frees linked list memory space
 * @head: head of the linked list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *nn, *t;

	t = *head;
	while (t != NULL)
	{
		nn = t;
		t = t->next;
		free(nn);
	}
	*head = NULL;
	
}
