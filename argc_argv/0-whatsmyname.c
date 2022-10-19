#include "main.h"
#include <stdio.h>
/**
 * myname - Program that prints its name
 * @argc: argument count
 * @argv: argument array
 * Return: Integer
 */
int myname(int argc, char *arg[])
{
	printf("%s\n", *argv[0]);

	return (0);
}
