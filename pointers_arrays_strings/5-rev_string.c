#include "main.h"
/**
 * rev_string - Reverse a string
 * @s : string
 * Return : gnirts is string
 */
void rev_string(char *s)
{
	int i, k, l, length, rep;
	char temp;

	length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	l = length / 2;
	k = 0;

	for (rep = 0; rep < l ; rep++)
	{
		temp = *(s + k);
		*(s + k) = *(s + i);
		*(s + i) = temp;

		k++;
		i--;
	}
}
