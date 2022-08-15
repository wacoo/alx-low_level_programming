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

	if (*head == NULL)
	{
		return (0);
	}
	old = *head;
	current = old->next;
	free(old);
	return (current->n);

}
