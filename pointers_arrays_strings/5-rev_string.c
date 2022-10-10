#include "main.h"
/**
 * rev_string - Reverse a string
 * @s : string
 * Return : gnirts is string
 */
void rev_string(char *s)
{
int i, j, k, length;
char temp;

        length = 0;

        while (*(s + length) != '\0')
        {
                length++;
        }
	
	j = length - 1;

        for (i = j, k = 0 ; i <= length ; i-- , k++)
	{	
		temp = *(s + i);
               *(s + i) = *(s + k);
		*(s + k) = temp;
        }
}
