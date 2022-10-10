#include "main.h"
/**
 * rev_string - Reverse a string
 * @s : string
 * Return : gnirts is string
 */
void rev_string(char *s)
{
	int i, j, k, l, length, rep;
	char temp;

	length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	j = length - 1;
	l = length / 2;
	i = j;
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
