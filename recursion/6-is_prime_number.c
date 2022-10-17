#include "main.h"
/**
 * is_prime_number - determines if integer is prime number,
 * if yes then return 1 otherwise return 0
 * @n: given number
 */
int is_prime_number(int n)
{
	static int i = 2;

	if (n == 0 || n == 1)
	{
		return (0);
	}

	if (n == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	i++;

	return is_prime_number(n);
}
