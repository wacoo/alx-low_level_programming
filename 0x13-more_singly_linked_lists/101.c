#include "lists.h"

/**
 * print_listint_safe - prints linked list
 * @head: head of the list
 *
 * Return: number of nodes
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *h;
	int count = 0, flag = 0;

	h = head;
	if (head == NULL)
	{
		exit(98);
	}
	else
	{
		while (h != NULL)
		{
			if (h != head || !flag)
			{
				flag =1;
				printf("[%p] ", (void *) h->next);
				printf("%d\n", h->n);
				h = h->next;
				count++;
			}
		}
	}
	return(count);
}
