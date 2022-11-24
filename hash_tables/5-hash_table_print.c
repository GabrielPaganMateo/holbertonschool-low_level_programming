#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (i == 0)
		printf("{");

		if (ht->array[i] && ht->array[i]->next == NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			printf(" ");
		}
	}
	printf("}");
}
