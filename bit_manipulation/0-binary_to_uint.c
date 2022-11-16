#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i;
	int len = strlen(b);

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] == '0' || b[i] == '1')
	{
		uint <<= 1;
		uint += b[i] - '0';

		if (len = i)
		{
			return (uint);
		}

		i++;
	}
	return (uint);
}
