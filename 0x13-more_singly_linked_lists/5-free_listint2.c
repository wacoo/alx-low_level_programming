#include "lists.h"

/**
 * free_listint2 - frees linked list memory space
 * @head: head of the linked list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *nn;

	while (*head != NULL)
	{
		nn = *head;
		*head = (*head)->next;
		free(nn);
	}
	*head = NULL;
}
