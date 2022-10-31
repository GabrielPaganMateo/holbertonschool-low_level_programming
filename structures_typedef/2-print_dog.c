#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints a struct dog
 * @d: structure to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{

	}
	else if (name == NULL || age == NULL || owner == NULL)
	{
	
	}
	else
	{
		printf ("Name: %s\nAge: %lf\nOwner: %s", d->name, d->age, d->owner);
	}
}
