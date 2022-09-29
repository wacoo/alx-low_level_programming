#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in the linked list n
 * @head: head of the list
 *
 * Return: sum of all ns is the list
 */

int sum_dlistint(dlistint_t *head)
{
	int c, sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	for (c = 0; head != NULL; c++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
