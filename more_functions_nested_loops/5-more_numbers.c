#include "main.h"
/**
 * more_numbers- Prints numbers
 * Return: 0 to 14, ten times
 */
void more_numbers(void)
{
	int times, n;
	
	for (times = 1 ; times <= 10 ; times++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n <= 9)
			{
				_putchar(n + '0');
			}
			else 
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
