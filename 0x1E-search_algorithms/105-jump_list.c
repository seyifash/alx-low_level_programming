#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * get_to_next_step - moves to the desired index
 * @list: the list in which we are to jump to the next step
 * @jump: the next jump
 * Return: the index to start from
 */
listint_t *get_to_next_step(listint_t *list, size_t jump)
{
	while (list->next != NULL && list->index < jump)
		list = list->next;
	return (list);
}

/**
 * jump_list - searches for a value in a sorted using the Jump search algorithm
 * @list: the list
 * @size: th size of the list
 * @value: the value to be searched for in the list
 * Return: returns the index of the given value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	listint_t *start = NULL;
	listint_t *end = list;

	if (list != NULL || size > 0)
	{
	while (end->index < (size - 1) && end->n < value)
	{
		start = end;
		end = get_to_next_step(start, end->index + jump);
		printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			start->index, end->index);

	while (start && start->index <= end->index && start->index < size)
	{
	printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
	if (start->n == value)
		return (start);
	start = start->next;
	}
	}
	return (NULL);
}
