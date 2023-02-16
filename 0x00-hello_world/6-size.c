#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer.
 * Return: 0 (success)
 */
int main(void)
{
	printf("size of char: %i byte(s)\n", sizeof(char));
	printf("size of int: %i byte(s)\n", sizeof(int));
	printf("size of long: %i byte(s)\n", sizeof(long int));
	printf("size of long long: %i byte(s)\n", sizeof(long long int));
	printf("size of float: %i byte(s)\n", sizeof(float));
	return (0);
}
