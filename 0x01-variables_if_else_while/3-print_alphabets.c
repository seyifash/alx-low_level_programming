#include <stdio.h>
/**
 * main -prints the alphabets in lowercase and in uppercase
 * 
 * Return: Always 0
*/
int main(void)
{
    char d;

    for (d = 'a'; d <= 'z'; d++)
    putchar(d);
    for (d = 'A'; d <= 'Z'; d++)
    putchar(d);
    putchar('\n');
    return (0);
}