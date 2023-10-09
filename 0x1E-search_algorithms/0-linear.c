#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array using linear search algor
 * @array: the array in which to search
 * @size: size of the array
 * @value: the value to be searched for
 * Return: the index of the given value if found else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
