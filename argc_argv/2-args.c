#include "main.h"
#include <stdio.h>
/**
 * main - Print all argument
 * @argc: argument counter
 * @argv: argument array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
