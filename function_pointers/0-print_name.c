#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Function that prints a name
 * @name: name
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{

	}
	else
	{
	void (*fptr)(char *);

	fptr = f;

	(*fptr)(name);
	}
}
