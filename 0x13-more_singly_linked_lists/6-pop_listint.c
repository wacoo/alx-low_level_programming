#include "lists.h"

/**
 * pop_listint - deletes node from beginning of a list
 * @head: head of a list
 *
 * Return: the value of head after delete
 */

int pop_listint(listint_t **head)
{
	listint_t *current, *old;
	int n = 0;

	if (head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	old = *head;
	current = old->next;
	*head = current;

	free(old);

	if (current == NULL)
	{
		return (0);
	}
	else
	{
		return (n);
	}

}
