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

	if (key == NULL || ht == NULL)
		return (0);
	if (node == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	return (1);
}
