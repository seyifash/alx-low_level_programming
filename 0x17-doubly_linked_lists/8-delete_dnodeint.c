#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deltes node at given index
 * @head:head pointer
 * @index: the index at which to delete
 * Return: returns  -1 on failure and 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	return (-1);
	current = *head;
	if (index == 0)
	{
	*head = current->next;
	if (*head != NULL)
	(*head)->prev = NULL;
	free(current);
	return (1);
	}
	while (current != NULL && count < index)
	{
	current = current->next;
	count++;
	}
	if (current == NULL)
	return (-1);

	temp = current;
	current->prev->next = current->next;
	if (current->next != NULL)
	current->next->prev = current->prev;
	free(temp);
	return (1);
}
