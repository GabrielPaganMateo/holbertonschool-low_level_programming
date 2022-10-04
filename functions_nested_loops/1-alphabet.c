#include "main.h"
/**
 * main - print letters
 *
 * Return: alphabet in lowercase
 */
int print_alphabet(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
	return (0);
}
