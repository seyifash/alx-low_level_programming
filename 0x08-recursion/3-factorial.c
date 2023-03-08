#include "main.h"

/**
 * factorial - function that return the factorial of a given number
 * @n: the number to find the factorial of.
 * Return: return result
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 0)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
