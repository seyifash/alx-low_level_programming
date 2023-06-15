#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sums all the elements in a list
 * @head: the head pointer to the list
 *
 * Return: returns the summ of all elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
	sum += current->n;
	current = current->next;
	}

	return (sum);
}
