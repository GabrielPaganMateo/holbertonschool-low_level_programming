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
	char *newname, *newowner;
	dog_t newdog;

	newname = malloc(sizeof(char) * strlen(name));
	if (newname == NULL)
	{
		return (NULL);
	}

	newowner = malloc(sizeof(char) * strlen(owner));
	if (newowner == NULL)
	{
		return (NULL);
	}

		newdog->name = newname;
		newdog->age = age;
		newdog->owner = newowner;

	return (newdog);
}
