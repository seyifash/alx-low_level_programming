#include "main.h"

/**
 * _isalpha - A programme that checkes for alphabetic character
 * @c: The character to check
 * Return: return 1 if c is a lower or upper case letter, otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
