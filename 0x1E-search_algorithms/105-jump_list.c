#include "search_algos.h"
#include <stdio.h>

/**
 * jump_list - searches for a value in a sorted using the Jump search algorithm
 * @list: the list
 * @size: th size of the list
 * @value: the value to be searched for in the list
 * Return: returns the index of the given value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump;
	listint_t *start, *end;


	if (!list || size == 0)
		return (-1);
	jump = sqrt(size);
	start = list;
	end = get_to_next_step(start, jump);
	while (end->index < size && end->n < value)
	{
		start = end;
		end = get_to_next_step(start, end->index + sqrt(size););
		printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
	}
