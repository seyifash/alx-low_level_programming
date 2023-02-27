#include "main.h"

/**
 * puts2 - A functions that prints the character of a string
 * @str: the string to be printed
 * Return: prints
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
	if ((i % 2) == 0)
	_putchar(str[i]);
	else
	comtinue;
	}
	_putchar('\n')
}
