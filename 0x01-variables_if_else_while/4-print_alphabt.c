#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints the alphabet in lower case
 *  It prints evry other alphabet except q and e
 *  Return: Always 0 (success)
 */

int main(void)

{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
	return (0);
}

