#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: head of given linked list
 *
 * Return: address of new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *cur;

	cur = *head;
	prv = NULL;
	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (cur != NULL)
		{
			*head = cur->next;
			cur->next = prv;
			prv = cur;
			cur = *head;
		}
		*head = prv;
		return (*head);
	}
}
