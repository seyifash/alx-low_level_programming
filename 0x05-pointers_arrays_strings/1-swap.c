#include "main.h"

/**
 * swap_int - A function that swaps the value of two integers
 * @a: The value to be swapped
 * @b: The value to be swapped
 * Return: Empty
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
