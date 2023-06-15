#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: the head pointer
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
	next = current->next;
	free(current);
	current = next;
	}
}
