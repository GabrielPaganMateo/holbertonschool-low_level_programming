#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings
 * @separator - space between strings
 * @amount of strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s != NULL)
		{
			printf("%s", s);
		}
		else if (s == NULL)
		{
			printf("(nil)");
		}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
