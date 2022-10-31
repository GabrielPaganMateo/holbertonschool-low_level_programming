#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 * @name: name
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*fptr)(char);

	fptr = &f;

	(*fptr)(name);
}
