#include "main.h"
/**
 * get_bit - returns the valua of a bit at given index
 * @n: number
 * @index: given index
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index == 1)
	{
		return (0);
	}

	if (index > n)
	{
		return (-1);
	}

	bit = (index >> n) & 1;

	return (bit);
}
