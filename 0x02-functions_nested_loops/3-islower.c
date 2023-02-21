#include "main.h"

/**
 * _islower - checkes for lowercase charcater
 * @c: The character to be checked
 * Return: returns 1 for lowercase and 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
