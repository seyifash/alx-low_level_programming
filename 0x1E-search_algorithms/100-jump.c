#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * min -  find minimum
 * @a: first item in comparison
 * @b: second
 * Return: minimum
 */
size_t min(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

/**
 * jump_search - jump search algo
 * @array: array to search from
 * @size: size of array
 * @value: value of array
 * Return: index value of -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = sqrt(size);
	size_t f;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	while (array[b] < value && b < size)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b = b + sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	for (f = a; f <= b && f < size; f++)
	{
		printf("Value checked array[%lu] = [%d]\n", f, array[f]);
		if (array[f] == value)
			return ((int)f);
	}
	return (-1);
}
