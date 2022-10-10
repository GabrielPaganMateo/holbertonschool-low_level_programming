#include "main.h"
/**
 * rev_string - Reverse a string
 * @s : string
 * Return : gnirts is string
 */
void rev_string(char *s)
{
int i, j, k;

        j = 0;

        while (*(s + j) != '\0')
        {
                j++;
        }
	
	j = j - 1;

        for (i = j, k = 0 ; i > 0 ; i-- , k++)

        {
               *(s + k) = (*(s + i));
        }
}
