#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array using Jump Search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if not found
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
