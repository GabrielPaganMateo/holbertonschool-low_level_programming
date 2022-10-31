#include "dog.h"
#include "string.h"
#include "stdlib.h"
/**
 * new_dog - Creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = strdup(name);
	newdog->age = age;
	newdog->owner = strdup(owner);

	return (newdog);
}
