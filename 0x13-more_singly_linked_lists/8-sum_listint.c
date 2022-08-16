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
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
