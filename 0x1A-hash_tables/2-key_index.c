#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key used in creating the hash value
 * @size: size of the array hashtable
 * Return: returns the index of the given pair key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
