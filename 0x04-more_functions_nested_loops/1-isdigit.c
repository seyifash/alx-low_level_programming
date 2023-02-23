#include "main.h"

/**
 * _isdigit - A function that checks for digit between 0 and 9
 * @c: The number to be checked.
 * Return: returns 1 if c is a digit ,if otherwise it returns 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
