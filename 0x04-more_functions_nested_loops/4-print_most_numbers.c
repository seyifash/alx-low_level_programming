#include "main.h"

/**
 * print_most_numbers - A funtion that prints digit from zero to nine
 * Description: prints the numbers excluding 2 and 4
 * Return: returnthe digit to be printed
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	_putchar(x + '0');
	}
	_putchar('\n');
}
