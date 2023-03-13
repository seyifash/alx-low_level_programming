#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings and allocates memory
 * @s1: first string to be concatenated
 * @s2: second string to be concatenate
 * Return: return pointer to a newly allocated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	int j;
	char *s3;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
	len1++;
	len2 = 0;
	while (s2[len2] != '\0')
	len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
	return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
	*(s3 + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
	*(s3 + i) = *(s2 + j);
	i++;
	}
	return (s3);
}
