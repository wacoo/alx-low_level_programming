#include "lists.h"

/**
 * dlistint_len - number of elements in a linked list
 * @h: header of a file
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int c;

	if (h == NULL)
	{
		return (0);
	}
	for (c = 0; h != NULL; c++)
	{
		h = h->next;
	}
	return (c);
}
