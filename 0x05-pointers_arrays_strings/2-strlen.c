#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: length of string to be returned
 * Return: returns length
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\n'; s++)
	{
	len += 1;
	}
	return (len);
}
