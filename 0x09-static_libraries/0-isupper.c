#include "main.h"

/**
 * _isupper - A function that checks for upper case characters
 * @c: The character to be checked
 * Return: retrns 1 if its uppercase,returns otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
