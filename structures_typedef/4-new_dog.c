#include "dog.h"
#include "string.h"
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

	if (new_dog == NULL)
	{
		return (NULL);
	}
	else
	{
		new_dog->name = newname;
		new_dog->age = age;
		new_dog->owner = newowner;
	}

	return (new_dog);
}
