#include "main.h"
#include <stdlib.h>

/**
 * create_array - creat array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */

char *create_ array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return(arr);
}
