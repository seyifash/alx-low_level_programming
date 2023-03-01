#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i'
	int j;
	int n;

	for (n = 0; dest[n] != '\0'; n++);
	for (i = n, j = 0; src[j] != '\0'; i++, j++)
	{
	dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
