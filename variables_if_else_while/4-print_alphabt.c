#include <stdio.h>
/**
 * main - Print alphabet in lowercase
 *
 * Return: All letters except q and e
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch == 'e')
	{
		continue;
	}
	else if (ch == 'q')
	{
		continue;
	}
	else
	{
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
