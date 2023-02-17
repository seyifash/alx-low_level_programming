#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main - Writes a program that prints all possible combination
 *  Of a single digit
 *  Return: Always 0 (success)
 */

int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
