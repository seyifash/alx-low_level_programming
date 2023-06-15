#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at the giving index
 * @head: the head pionter
 * @index: the given index
 *
 * Return: returns node at the given position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
	if (count == index)
	{
	return (current);
	}
	current = current->next;
	count++;
	}

	return (NULL);
}

