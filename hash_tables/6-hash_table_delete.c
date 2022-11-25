#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		free(ht->array[i]->key);
		free(ht->array[i]->value);
		free(ht->array[i]->next);
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
