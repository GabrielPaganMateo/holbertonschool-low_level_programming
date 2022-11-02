#include <stdarg.h>
/**
 * sum_them_all - Returns sum of all parameters
 * @n: last known argument
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{

	if (n == 0)
	{
		return (0);
	}
