#include "main.h"
/**
 * print_alphabet_x10- Print letters
 *
 * Return: Alphabet ten times, in lowercase
 */
int main (void)
{
	int ti;
	char al;

	for (ti = 0 ; ti <= 10 ; ti++)
	{
		for (al = 'a' ; al <= 'z' ; al++)
		{
			print_alphabet();
		}
	}
	return (0);
}
