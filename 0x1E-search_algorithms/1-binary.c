#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - search for a value in an array using the Binary search algor
 * @array: array in which to search
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: returns theindex of the given value if searched else -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, i;
	size_t left = 0;
	size_t right = size - 1;

	if (!array || size == 0)
	return (-1);

	while (left <= right)
	{
	printf("searching in array: ");
	for (i = left; i <= right; i++)
	{
	if (i < right)
	printf("%d, ", array[i]);
	else
	printf("%d\n", array[i]);
	}
	mid = (right + left) / 2;

	if (array[mid] < value)
	left = mid + 1;
	else if (array[mid] > value)
	right = mid - 1;
	else
	return (mid);
	}
	return (-1);
}

