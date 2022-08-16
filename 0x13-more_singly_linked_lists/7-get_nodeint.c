#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: head of list
 * @index: index of node
 *
 * Return: indexth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head != NULL)
		{
			head = head->next;
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	return (head);
}
