#include "lists.h"

/**
 * free_listint - frees a linked list listint_t's memory space
 * @head: head of the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
