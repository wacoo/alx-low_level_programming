#include "lists.h"

/**
 * free_dlistint - free dlistint_t from memory
 * @head: head of list
 *
 */
void free_dlistint(dlistint_t *head)
{
	int i;
	dlistint_t *t;

	for (i = 0; head != NULL; i++)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
