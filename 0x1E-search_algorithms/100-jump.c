#include "search_algos.h"
#include <stdio.h>
#include <math.h>

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
	while ( b < size && array[b] < value)
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
