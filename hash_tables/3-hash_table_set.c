#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key, key is not empty string
 * @value: value associated with the key
 * Return: 1 if success, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (key == NULL || node == NULL || ht == NULL)
		return (0);

	if (node == NULL)
		return (0);

	index = key_index((unsigned char*) key, ht->size);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node->key);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->value);
		return (0);
	}

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}

	return (1);
}
