#include "main.h"
/**
 * clear_int - function that sets the value of a bit to 0 at given index
 * @n: given number
 * @index: position to be set as 0
 * Return: 1 if worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
