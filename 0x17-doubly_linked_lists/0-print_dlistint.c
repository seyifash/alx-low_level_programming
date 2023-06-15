#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a linked list
 * @h: the nead node of the list
 *
 * Return: returns the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t n = 0;

	while (current != NULL)
	{
	n++;
	printf("%d\n", current->n);
	current = current->next;
	}
	return (n);
}
