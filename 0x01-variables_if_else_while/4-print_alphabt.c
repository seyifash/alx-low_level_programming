#include <stdio.h>
/**
 * main -prints the alphabets in lowercase except e and q
 * 
 * Return: Always 0
*/
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        if (letter != 'e' && letter != 'q')
        putchar(letter);
        letter++;
    }
    putchar('\n');
    return (0);
}