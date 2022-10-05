#include "main.h"
/**
 * times_table- Prints the 9 times table
 *
 * Return: Multiplication results of times table
 */
void times_table(void)
{
	int x, y, z, z1, z2;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 9 ; y++)
		{

		z = x * y;
		z1 = ((z / 10) + '0');
		z2 = ((z % 10) + '0');

		if (z1 > 48)
		{
			_putchar(z1);
		}

		if (y <= 8)
		{
			_putchar(z2);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
			_putchar(z2);
		}
		}
	_putchar('\n');
		}
}


