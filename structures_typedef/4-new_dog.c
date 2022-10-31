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
	if (newdog->name == NULL)
	{
		free(newdog);
	}

	newdog->age = age;
	if (newdog->age == NULL)
	{
		free(newdog->name);
		free(newdog);
	}

	newdog->owner = strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
	}

	return (newdog);
}
