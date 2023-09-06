#include <stdio.h>
/**
 * main -prints the alphabets in lowercase
 * 
 * Return: Always 0
*/
int main(void)
{
    char letter = 'z';

    while (letter >= 'a')
    {
        putchar(letter);
        letter--;
    }
    putchar('\n');
    return (0);
}