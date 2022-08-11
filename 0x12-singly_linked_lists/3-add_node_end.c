#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds node at the end of list
 * @head: head
 * @str: string
 *
 * Return: ponter to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *h;
	int i = 0;

	h = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	new->len = i;
	new->next = NULL;

	if (h == NULL)
	{
		*head = new;
	}
	else
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
	}
	return (*head);
}
