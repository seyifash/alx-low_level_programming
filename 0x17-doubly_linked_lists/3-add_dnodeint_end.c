#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - adds node at the beginning of a double linke list
 * @head: thehead pointer
 * @n: the node to be added list
 *
 * Return: returns the address of  new elements
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
	new_node->prev = NULL;
	*head = new_node;
	}

	else
	{
	while (current->next != NULL)
	current = current->next;

	current->next = new_node;
	new_node->prev = current;
	}

	return (current);
}
