#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: head of the list
 * @idx: index
 * @n: data
 *
 * Return: addres of the new node
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *hh = *h;
	unsigned int i;

	if (idx == 0)
	{
		new_n = add_dnodeint(h, n);
	}
	else
	{
		for (i = 0; hh != NULL; i++)
		{
			if (i == idx)
			{
				if (hh->next == NULL)
				{
					new_n = add_dnodeint_end(h, n);
				}
				else
				{
					new_n = malloc(sizeof(dlistint_t));
					if (new_n == NULL)
					{
						return (NULL);
					}
					new_n->prev = hh;
					new_n->next = hh->next;
					new_n->n = n;
					hh->next->prev = new;
					hh->next = new_n;
				}
			}
			hh = hh->next;
		}
	}
	return (new_n);
}
