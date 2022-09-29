#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: head of the list
 * @index: given index
 *
 * Return: 1 if success else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h = *head;

	if (index == 0)
	{
		if (h != NULL)
		{
			*head = h->next;
			free(h);
		}
		return (1);
	}
	else
	{
		for (i = 0; h != NULL; i++)
		{
			if (i == index)
			{
				if (h->next == NULL)
				{
					h->prev->next = NULL;
					free(h);
					return (1);
				}
				else
				{
					h->prev->next = h->next;
					h->next->prev = h->prev;
					free(h);
					return (1);
				}
			}
			h = h->next;
		}
	}
	return (-1);
}


