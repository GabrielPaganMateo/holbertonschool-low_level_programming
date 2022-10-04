#include <stdio.h>
/**
 * main- Print numbers with putchar
 *
 * Return: Single digit numbers with putchar
 */
int main(void)
{
	int dig;

	for (dig = '0' ; dig <= '9' ; dig++)
	{
		putchar(dig);
	}
	putchar('\n');
	return (0);
}
