#include "lists.h"

/**
 * sum_listint - sum of the data in linked list n
 * @head: head of the list
 *
 * Return: sum
 *
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	for (i = 0; head != NULL; i++)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
