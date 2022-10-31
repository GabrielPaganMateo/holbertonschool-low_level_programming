#include "dog.h"
/**
 * free_dog - Function that frees dogs
 * @d: pointer to allocated dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
