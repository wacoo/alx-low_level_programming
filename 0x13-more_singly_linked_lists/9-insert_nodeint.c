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
	listint_t *prev, *curr, *nn;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (NULL);
	}
	curr = *head;
	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
	{
		return (NULL);
	}
	while (i < idx || curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		i++;
	}
	if (i == idx)
	{
		nn->n = n;
		nn->next = NULL;

		prev->next = nn;
		nn->next = curr;
		return (nn);
	}
	else
	{
		return (NULL);
	}
	return (nn);
}
