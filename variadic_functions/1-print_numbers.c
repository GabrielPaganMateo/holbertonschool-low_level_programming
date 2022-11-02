#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(numbers, int);
		printf("%d", x);

		if (separator != NULL && i != (n -1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

