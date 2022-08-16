#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: head of list
 * @idx: given position
 * @n: n's value in the new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_n, *prv;
	unsigned int i = 0;

	new_n = malloc(sizeof(listint_t));
	if (!new_n || !head)
	{
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
		return (*head);
	}
	else
	{
		tmp = *head;
		while (i < idx - 1)
		{
			if (tmp != NULL)
			{
				prv = tmp;
				tmp = tmp->next;
			}
			i++;
		}
		prv->next = new_n;
		new_n->next = tmp;
	}
	return (*head);
}
