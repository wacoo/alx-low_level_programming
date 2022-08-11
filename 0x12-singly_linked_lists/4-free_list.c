#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees malloced list nodes
 * @head: head
 *
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
