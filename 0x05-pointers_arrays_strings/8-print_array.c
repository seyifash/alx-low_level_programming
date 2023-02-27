#include "main.h"

/**
 * print_array - a function that prints the elements of an array
 * @a: arrayr to be printed
 * @n: number of value to be printed
 * Return: Empty
 */

void print_array(int *a, int n);
{
	int f;

	for (f = 0; f < n; f++)
	{
	printf("%d", a[f]);
	if (f != n - 1)
	printf(", ");
	}
	printf("\n");
}
