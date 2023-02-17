#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints all the numbers of base sixteen
 * In lower case followed by a new line
 * Return: Always 0 (success)
 */

int main(void)

{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
