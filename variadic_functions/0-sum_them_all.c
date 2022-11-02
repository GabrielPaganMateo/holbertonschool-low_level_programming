#include <stdarg.h>
/**
 * sum_them_all - Returns sum of all parameters
 * @n: last known argument
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
