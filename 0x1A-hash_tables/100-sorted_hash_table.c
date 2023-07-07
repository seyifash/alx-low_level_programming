#include "hash_tables.h"

/**
 * shash_table_create - a function that sorts a hashtable
 * @size: the size of the hashtable
 *
 * Return: the newly created ghash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - adds the key/value pair to the sorted hash tabe
 * @ht: the hash table to be updated
 * @key: the key to be inserted
 * @value: the value to be inserted
 * Return: return 1 on success and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *tmp, *new_node;

	if ((ht != NULL) && (ht->array != NULL) && (key != NULL) && (strlen(key) > 0))
	{
		index = key_index((unsigned char *)key, ht->size);
		tmp = ht->array[index];
		while (tmp != NULL)
		{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = _strdup1(value);
			return (1);
		}
		tmp = tmp->next;
		}

		new_node = malloc(sizeof(shash_node_t));
		if (new_node != NULL)
		{
		new_node->key = _strdup1(key);
		new_node->value = _strdup1(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;

		insert_to_sorted_ht(ht, new_node);
		return (1);
		}
	}
	return (0);
}

/**
 * _strdup1 - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: retrns the duplicated string
 */
char *_strdup1(const char *str)
{
	int i, j;
	char *dup = NULL;

	if (str == NULL)
	return (NULL);

	i = 0;
	while (str[i] != '\0')
	i++;

	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		dup[j] = str[j];
	dup[j] = '\0';

	return (dup);
}

/**
 * insert_to_sorted_ht - inserts a node into the sorted hash table
 * @ht: the hash table
 * @new_node: the new node to be inserted to the sorted hash table
 * Return: nothing
 */
void insert_to_sorted_ht(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL || strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
		if (ht->stail == NULL)
			ht->stail = new_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(new_node->key, tmp->snext->key) > 0)
		tmp = tmp->snext;

		new_node->sprev = tmp;
		new_node->snext = tmp->snext;
		if (tmp->snext != NULL)
			tmp->snext->sprev = new_node;
		tmp->snext = new_node;
		if (new_node->snext == NULL)
			ht->stail = new_node;
	}
}

/**
 * shash_table_get - gets the corresponding value of the given key
 * @ht: the hash table to be searched
 * @key: the key whpse value is to be returned
 * Return: rtuns the corresponding value if found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if ((ht != NULL) && (ht->array != NULL) && (key != NULL) && (strlen(key) > 0))
	{
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	}
	return (NULL);

}
/**
 * hash_table_print - a function that prints the sorted list
 * @ht: the hash table
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
		tmp = ht->shead;
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->snext;
		}
		printf("}\n");
}

/**
 * shash_table_print_rev -function that prints a hash table in reverse
 * @ht: the hash table to be printed
 *
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;
	int flag = 0;

	if (ht == NULL)
	return;

	printf("{");
		tmp = ht->stail;
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->sprev;
		}
		printf("}\n");
}
/**
 * shash_table_delete - function that deletes the hash table
 * @ht: the hash table to be deleted
 *
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp, *prev;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			prev = tmp;
			tmp = tmp->next;
			if (prev->key)
				free(prev->key);
			if (prev->value)
				free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}

