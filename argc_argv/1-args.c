#include "main.h"
#include <stdio.h>
/**
 * main - Prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument array
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	if (argv[0] == 0)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
