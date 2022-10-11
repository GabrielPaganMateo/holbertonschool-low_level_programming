#include "main.h"
/**
 * _strcmp - Compares two string
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, less or greater than 0 if not equal
 */
int _strcmp(char *s1, char *s2)
{
        while (s1 ==s2)
        {
                if (s1 == '\0')
                {
                        return(0);
                }
                s1++;
                s2++;
        }
        return (s1 - *s2);
}
