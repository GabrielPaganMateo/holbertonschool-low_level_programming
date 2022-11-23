#include "hash_tables.h"
/**
 * key_index - Gives index of key
 * @key: the key
 * @size: size of the array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, __unused__((attribute)) unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index);
}
