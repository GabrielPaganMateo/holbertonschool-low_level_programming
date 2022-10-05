#include "main.h"
/**
 * times_table- Prints the 9 times table
 *
 * Return: Multiplication results of times table
 */
void times_table(void)
{
        int x, y, z, firstdigit, lastdigit;

        for (x = 0 ; x <= 9 ; x++)
        {
                for (y = 0 ; y <= 9 ; y++)
                {

                z = x * y;
                firstdigit = ((z / 10) + '0');
                lastdigit = ((z % 10) + '0');

		if (z <= 9 && y != 0)
		{
			_putchar(' ');
		}
			else
			{
			_putchar(firstdigit);
			}
		if (y != 0)
		{		
		_putchar(lastdigit);
		}
		if (y <= 8)
		{
		_putchar(',');
		}
		if (y <= 8)
		{
		_putchar(' ');
		}

                }
        _putchar('\n');
        }
}

