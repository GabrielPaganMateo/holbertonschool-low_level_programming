#include <stdio.h>
/**
 * main- for loop
 * Description: Print the alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
