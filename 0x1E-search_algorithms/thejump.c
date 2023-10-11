#include "search_algos.h"
#include <stdio.h>
#include "math.h"

/**
 * jump_search - searches for a value in a sorted array using jump search
 * @array: poniter to the sorted array
 * @size: the size of the array
 * @value: the value to search for in the array
 * Return: the index of the given array if founs else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = sqrt(size);
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	while (end < size && array[end] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", end, array[end]);
	start = end;
	end = end + sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
