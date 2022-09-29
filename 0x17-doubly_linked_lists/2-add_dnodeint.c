#include "lists.h"

/**
 * add_dnodeint - adds a new node at the begining of the list
 * @head: head of the list
 * @n: data of the new node
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = *head, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		newNode->next = h;
		h->prev = newNode;
		*head = newNode;
	}
	return (newNode);
}
