#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *TABLE;

	TABLE->size = size;

	return(TABLE);
}
