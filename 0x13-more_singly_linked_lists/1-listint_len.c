#include "lists.h"

/**
 * listint_len - returns the length of a linked list
 * @h: list
 *
 * Return: length of list
 *
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
