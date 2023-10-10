#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary - searches for the first occurence of the given value
 * @array: the array in which the search is to be done
 * @size: the size of the array
 * @value: the value to be searched for in the array
 * Return: returns the first index of the given value else -2
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (advanced_binary_recur(array, 0, size - 1, value));
}

/**
 * advanced_binary_recur - helper function to get the first occurence of value
 * @array:the array to search
 * @left: the first index of the given array
 * @right: the last index of the array
 * @value: the value to search for in the given array
 * Return: returns the index of the given value
 */
int advanced_binary_recur(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
	if (i < right)
	printf("%d, ", array[i]);
	else
	printf("%d\n", array[i]);
	}
	mid = (left + right) / 2;
	if (array[mid] == value && (left == mid || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (advanced_binary_recur(array, left, mid, value));
	return (advanced_binary_recur(array, mid + 1, right, value));
}

