#include "hash_tables.h"

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: returns the duplicated string
 */
char *_strdup(const char *str)
{
	int i, j;
	char *dup = NULL;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	j++;

	dup = malloc(sizeof(char) * (j + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table to be updated
 * @key: the key to the element to be added
 * @value: the value of the key to be added
 * Return: retuns 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *tmp, *new_node;

	if ((ht != NULL) && (ht->array != NULL) && (key != NULL) && (strlen(key) > 0))
	{
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
		free(tmp->value);
		tmp->value = _strdup(value);
		return (1);
		}
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node != NULL)
	{
		new_node->key = _strdup(key);
		new_node->value = _strdup(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	}
	return (0);
}
