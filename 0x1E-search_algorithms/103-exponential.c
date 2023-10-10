#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - search for a val in an array using exponential algo
 * @array: the array in which the search is to done
 * @size: the size of the array
 * @value: the value to be searched for
 * Return: the index of the value if found else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t b = 1;
	size_t min;

	if (!array)
	return (-1);

	if (array[i] == value)
	return (i);

	while (b < size && array[b] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", b, array[b]);
	b *= 2;
	}
	min = (b < size) ? b : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", b / 2, min);
	return (binar_search(array, b / 2, min, value));
}

/**
 * binar_search - searches for a value using binary search
 * @array: the array to be searched
 * @left: the starting range
 * @min: the minumum range
 * @value: the value to search for
 * Return: the index of the given value in the array else -1
 */
int binar_search(int *array, size_t left, size_t min, int value)
{
	size_t i;
	size_t mid;

	if (!array)
	return (-1);

	while (left <= min)
	{
	printf("Searching in array: ");
	for (i = left; i <= min; i++)
	{
		if (i < min)
		printf("%d, ", array[i]);
		else
		printf("%d\n", array[i]);
	}
	mid = (left + min) / 2;
	if (array[mid] < value)
	left = mid + 1;
	else if (array[mid] > value)
	min = mid - 1;
	else
	return (mid);
	}

	return (-1);
}
