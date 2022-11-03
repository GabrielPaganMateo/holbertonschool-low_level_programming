#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - Prints anything
 * @format: list of data types passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *s;
	int i, c;
	double d;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == 'd')
		{
			i = va_arg(args, int);
			printf("%d\n", i);
		}
		else if (*format == 'c')
		{
			j = va_arg(args, int);
			printf("%c", c);
		}
		else if (*format == 'f')
		{
			d = va_arg(args, double);
			printf("%f", d);
		}
		++format;
	}
	va_end(args);
}
