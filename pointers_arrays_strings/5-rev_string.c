#include "main.h"
/**
 * rev_string - Reverse a string
 * @s : string
 * Return : gnirts is string
 */
void rev_string(char *s)
{
int i, j;

        j = 0;

        while (*(s + j) != '\0')
        {
                j++;
        }
	
	j = j - 1;

        for (i = j ; i > 0 ; i--)

        {
                s[j] = (*(s + i));
        }
}
