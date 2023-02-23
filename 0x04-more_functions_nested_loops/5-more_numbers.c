#include "main.h"

/**
 * more_numbers - A function that prints ten times the number
 * Description: prints numbers from zero to fourteen
 * Returns: returns numbers to be printed
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9)
	{
	_putchar((j / 10) + '0');
	}
	_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
