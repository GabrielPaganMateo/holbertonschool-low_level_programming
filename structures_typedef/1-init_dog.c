#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: structure type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok");
	}
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
