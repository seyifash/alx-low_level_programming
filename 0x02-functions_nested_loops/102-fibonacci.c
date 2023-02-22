#include <stdio.h>

/**
 * main - entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	long a = 1, b = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%ld", a);
	else if (i == 1)
	printf(", %ld", b);
	else
	{
	b += a;
	a = b - a;
	printf(", %ld", b);
	}
	++i;
	}
	printf("\n");
	return (0);
}
