#include <stdio.h>
/**
 * main -prints all single digit numbers of base 10 starting from 0
 * 
 * Return: Always 0
*/
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    putchar(i + '0');
    for (i = 'a'; i <= 'f'; i++)
    putchar(i);
    putchar('\n');

    return(0);
}