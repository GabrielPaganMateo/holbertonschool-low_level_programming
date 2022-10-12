#include "main.h"
/**
 * *leet - Encode a string into 1337
 * @str: string
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	j = 0;
	
	char let[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] == let[0] || str[i] == let[1] 
		|| str[i] == let[2] || str[i] == let[3] 
		|| str[i] == let[4] || str[i] == let[5]
		|| str[i] == let[6] || str[i] == let[7]
		|| str[i] == let[8] || str[i] == let[8]
		|| str[i] == let[9] || str[i] == let[10])
		{
			str[i] = num[j];
		}
}
