#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - search for a value in a sorted array by interpolation
 * @array: teh array in which to search
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the given value if found else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (!array)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
	return (int)pos;
	else if (array[pos] < value)
	low = pos + 1;
	else
	high = pos - 1;
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}

