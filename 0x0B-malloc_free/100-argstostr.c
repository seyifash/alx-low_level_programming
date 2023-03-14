#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function to concatnate all the argument of your program
 * @ac: takes in the width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int l;
	int r = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);


	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	l++;
	}

	l += ac;

	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	str[r] = av[i][j];
		r++;
	}
	str[r] = '\n';
	r++;
	}
	return (str);
}
