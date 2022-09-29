#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t
 * @head: head of the list
 * @index: index of the node to be returned
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (index == i)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
