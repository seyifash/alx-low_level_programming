#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated string
 * @str: the string to be duplicated
 * Return: return pointer to the duplicatd string
 */

char *_strdup(char *str)
{

	int f;
	int i;
	char *arr;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	arr = malloc(sizeof(char) * i);

	if (arr == NULL)
	return (NULL);

	for (f = 0; str[f] != '\0'; f++)
		arr[f] = str[f];
	return (arr);
}
