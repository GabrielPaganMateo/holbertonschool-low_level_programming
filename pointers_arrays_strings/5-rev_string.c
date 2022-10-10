#include "main.h"
/**
 * rev_string - Reverse a string
 * @s : string
 * Return : gnirts is string
 */
void rev_string(char *s)
{
int i, j, k, l, length;
char temp;

        length = 0;

        while (*(s + length) != '\0')
        {
                length++;
        }
	
	j = length - 1;
	l = length / 2;

        for (i = j, k = 0 ; i <= l ; i-- , k++)
	{	
		temp = *(s + i);
               *(s + k) = *(s + i);
		*(s + k) = temp;
        }
}
