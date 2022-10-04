#include <stdio.h>
/**
 * main- Prints numbers
 *
 * Return: All possible combinations of single digit #'s
 */
int main(void)
{
	int pr0n;

	for (pr0n = '0' ; pr0n <= '9' ; pr0n++)
	{
		putchar(pr0n);
		if (pr0n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
