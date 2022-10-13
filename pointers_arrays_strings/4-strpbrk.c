#include "main.h"
/**
 * *_strpbrk - locate ocurrence of string s in any byte of string accept
 * @s: string evaluated
 * @accept: string with desired characters
 * Return: Characters
 */
char *_strpbrk(char *s, char *accept)
{

        do {
                if (*s == *accept)
                {
                        return (s);
                }
        } while (*s++ && *accept++);
        return (0);
}
