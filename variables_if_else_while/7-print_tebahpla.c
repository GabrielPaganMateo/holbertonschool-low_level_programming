#include <stdio.h>
/**
 * main - Print alphabet in reverse
 *
 * Return: Alphabet in lowercase letters in reverse
 */
int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
