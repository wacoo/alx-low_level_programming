#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a list 
 * @head: head of the list
 * @n: data of the new node
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *newNode;
	int i;

	h = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL || head == NULL || *head == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		for (i = 0; h->next != NULL; i++)
		{
			h = h->next;
		}
		h->next = newNode;
		newNode->prev = h;
	}
	return newNode;
}
