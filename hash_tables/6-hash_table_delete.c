#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *temp2;

	temp = ht->array[0];
	temp2 = ht->array[0];

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next == NULL)
			{
				free(ht->array[i]);
			}
			else if (ht->array[i]->next != NULL)
			{
				temp = ht->array[i];

				while (temp)
				{
					temp2 = temp;
					temp = temp->next;
					free(temp2->key);
					free(temp2->value);
					free(temp2);
				}
			}
		}
	}
}
