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

        for (i = j, k = 0 ; i >= 0 ; i-- , k++)
	{	
		temp = *(s + k);
               *(s + k) = *(s + i);
		*(s + i) = temp;
		
		*(s + i)++;
		*(s + k)--;
        }
}
