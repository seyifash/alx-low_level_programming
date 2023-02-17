#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - this is  a program the no stored in the variable n
 * it prints if the number is positive or a negative number
 * if the number is greater than 0, then it is positive
 * if the numeber is equal to zero, then it is zero
 * if the no is less than zero, then it is negative
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
