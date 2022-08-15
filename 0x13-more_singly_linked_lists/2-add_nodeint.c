#include "lists.h"

/**
 * add_nodeint - adds node to the beginning of a linked list
 * @head: head of the list
 * @n: value of n in the new node
 *
 * Return: address of the new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nh;

	nh = malloc(sizeof(listint_t));
	if (nh == NULL)
	{
		return (NULL);
	}
	nh->n = n;
	nh->next = NULL;
	if (*head == NULL)
	{
		*head = nh;
	}
	else
	{
		nh->next = *head;
		*head = nh;
	}
	return (*head);
}
