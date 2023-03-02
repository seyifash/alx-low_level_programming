#include "main.h"

/**
 * reverse_ array - a funtion that reverses the content of an array
 * @a: array
 * @n: number of elements in the array
 * Return: rev
 */

void reverse_array(int *a, int n);
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
	n--;
	j = a[i];
	a[i] = a[n];
	a[n] = j;
	}
}
