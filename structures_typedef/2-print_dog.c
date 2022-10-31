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
	else if (d->name == NULL && d->owner == NULL)
	{
		printf ("Name: (nil)\nAge: %f\nOwner: (nil)\n", d->age);
	}
	else
	{
		printf ("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
