#include "lists.h"

/**
 * print_dlistint - prints elements in a linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	if (h == NULL)
	{
		return (0);
	}

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h-> next;
	}
	return i;
}
