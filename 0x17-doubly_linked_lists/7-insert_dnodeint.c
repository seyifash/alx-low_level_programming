#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at the given index
 * @h: the head pointer
 * @index: the given index
 * @n: the data to insert
 * Return: the new node else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	if (h == NULL)
	{
        return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return NULL;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
	new_node->next = *h;
	if (*h != NULL)
	(*h)->prev = new_node;
	*h = new_node;
	return (new_node);
	}
	current = *h;
	while (current != NULL && count < idx - 1)
	{
	current = current->next;
	count++;
	}
	if (current == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->next = current->next;
	if (current->next != NULL)
	current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
