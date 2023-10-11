#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: the list in which to search
 * @value: the value to search for
 * Return: returns the given value if found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start = NULL;
	skiplist_t *end = list;

	if (list == NULL)
		return (NULL);
	while (end->next != NULL && end->n < value)
	{
		start = end;
		if (end->express != NULL)
		{
		end = end->express;
		printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);
		}
		else
		{
		while (end->next != NULL)
			end = end->next;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			start->index, end->index);
	while (start)
	{
		printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}
