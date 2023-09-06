#include <stdio.h>
/**
 * main -prints all single digit numbers of base 10 starting from 0 using putchar
 * 
 * Return: Always 0
*/
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
    putchar(i + '0');
    if (i != 9)
    {
    putchar(',');
    putchar(' ');
    }
    }
    putchar('\n');

    return(0);
}