#include "main.h"
/**
 * is_prime_number - determines if integer is prime number,
 * if yes then return 1 otherwise return 0
 * @n: given number
 */
int _prime(int i, int n);
int is_prime_number(int n)
{
	return (_prime(0, n));
	
}

int _prime(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	return (_prime(i + 1, n));
}

