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
	
	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index || head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
	{
		return (head);
	}
	else
	{
		return(NULL);
	}
}
