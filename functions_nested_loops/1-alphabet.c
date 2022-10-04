#include "main.h"
/**
 * main - print letters
 *
 * Return: alphabet in lowercase
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		_putchar(al);
	}
	putchar('\n');
	return (0);
}
