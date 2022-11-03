#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_all - Prints anything
 * @format: list of data types passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	char *c;
	char *s;
	double f;
	va_list args;
	
	va_start(args, format);

	i = 0;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
			i = va_arg(args, int);
			printf("%i", i);

			case 'c':
			c = va_arg(args, char*);
			printf("%c", c);

			case 's':
			s = va_arg(args, char*);
			printf("%s", s);

			case 'f':
			f = va_arg(args, double);
			printf("%f", f);

			default:
			printf(" ");
		}
		i++;
		if (format[i] == '\0')
		{
			return (NULL);
		}
	}
	va_end(args);
}
