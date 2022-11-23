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
	const char *valueDUP;
	hash_node_t *node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	if (key == NULL)
	{
		return (0);
	}

	index = key_index(key, ht->size);
	valueDUP = strdup(value);
	node->key = key;
	node->value = valueDup;

	if (ht[index] != NULL)
	{
		node->next = ht;
		return (1);
	}
	else
	{
		ht[index] = node;
		return (1);
	}
	return (0);
}
