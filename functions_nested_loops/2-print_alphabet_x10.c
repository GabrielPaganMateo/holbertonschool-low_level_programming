#include "main.h"
/**
 * print_alphabet_x10- Print letters
 *
 * Return: Alphabet ten times, in lowercase
 */
void print_alphabet_x10(void)
{
	int ti;
	char al;

	for (ti = 1 ; ti <= 10 ; ti++)
	{
		for (al = 'a' ; al <= 'z' ; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
