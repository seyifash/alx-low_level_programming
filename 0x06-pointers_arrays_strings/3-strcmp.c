#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: return difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int flag = 0;
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	{
	flag = 1;
	break;
	}
	}
	if (flag == 1)
	{
	return (s1[i] - s2[i]);
	}
	return (0);
}
