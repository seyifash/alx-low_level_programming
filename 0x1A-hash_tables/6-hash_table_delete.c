#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table to be deleted
 * Return: return nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *prev = NULL;
	unsigned long int i;

	if (!ht)
	return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			prev = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = prev;
		}
		free(tmp);
	}
	free(ht->array);
	free(ht);
}

