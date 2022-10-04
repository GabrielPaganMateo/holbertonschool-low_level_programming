#include <stdio.h>
/**
 * main- Print numbers
 *
 * Return: Single digit numbers starting from 0
 */
int main(void)
{
	char dig;

	for(dig = '0' ; dig <= '9' ; dig++)
	{
		printf("%c", dig);
	}
	putchar('\n');
	return (0);
}
