#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at some index given
 * @head: head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prv, *cur;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
		cur = *head;
		if (index == 0)
		{
			*head = cur->next;
			free(cur);
			cur = NULL;
		}
		else
		{
			for (i = 0; i < index; i++)
			{
				if (cur != NULL)
				{
					prv = cur;
					cur = cur->next;
				}
			}
			prv->next = cur->next;
			free(cur);
			cur = NULL;
		}
		return (1);
	}
}
