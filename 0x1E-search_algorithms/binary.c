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
	return (binary_search_recur(array, 0, size - 1, value));
}

/**
 * binary_search_recur - helper function to serach for the index of the value
 * @array: the array to be searched
 * @left: the left side of the array
 * @right: the right index of the array
 * @value: the value to be searched for
 * Return: returns the given index if found
 */

int binary_search_recur(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (!array)
	return (-1);

	print_array(array, left, right);
	mid = left + (right - left) / 2;

	if (left == right)
	{
		if (array[mid] == value)
		return ((int)mid);
		else
		return (-1);
	}
	if (value == array[mid])
	return ((int)mid);
	else if (value < array[mid])
	return (binary_search_recur(array, left, mid - 1, value));
	else
	return (binary_search_recur(array, mid + 1, right, value));
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

