#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - prints all elements of a linked list
 * @h: the head node of the list
 *
 * Return: returns the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t n = 0;

	while (current != NULL)
	{
	n++;
	current = current->next;
	}
	return (n);
}
