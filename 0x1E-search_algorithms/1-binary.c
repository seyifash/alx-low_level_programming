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
	size_t mid;
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
	return (-1);

	while (left <= right)
	{
	mid = left + (right - left) / 2;
	print_array(array, left, right);

	if (value == array[mid])
	return ((int)mid);
	else if (value < array[mid])
	right = mid - 1;
	else
	left = mid + 1;
	}
	return (-1);
}

/**
 * print_array - prints the array
 * @array: the array to be printed
 * @left: the left side of the array
 * @right: the right side of the array
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	if (array)
	{
		printf("searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
			printf("%d, ", array[i]);
			else
			printf("%d\n", array[i]);
		}
	}
}
