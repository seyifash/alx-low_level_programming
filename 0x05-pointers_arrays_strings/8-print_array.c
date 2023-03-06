#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints the elements of an array
 * @a: arrayr to be printed
 * @n: number of value to be printed
 * Return: Empty
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
	printf("%d",  a[t]);
	if (t != n - 1)
	printf(", ");
	}
	printf("\n");
}
