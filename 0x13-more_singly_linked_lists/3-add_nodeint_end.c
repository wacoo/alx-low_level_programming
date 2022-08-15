#include "lists.h"

/**
 * add_nodeint_end - adds node at the nedo of alinked list
 * @head: head of the list
 * @n: value of n in the new node
 *
 * Return: address of the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *tmp;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		return (NULL);
	}
	tmp = *head;

	new_n->n = n;
	new_n->next = NULL;

	if (tmp == NULL)
	{
		*head = new_n;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_n;
	}
	return (new_n);
}
