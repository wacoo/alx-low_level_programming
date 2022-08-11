#include "lists.h"

/**
 * list_len - lists number of elemets in a lingked list
 * @h: linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
