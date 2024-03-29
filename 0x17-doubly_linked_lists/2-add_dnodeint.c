#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds node at the beginning of a double linke list
 * @head: thehead pointer
 * @n: the node to be added list
 *
 * Return: returns the address of  new elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
	(*head)->prev = new_node;
	}

	*head = new_node;

	return (*head);
}
