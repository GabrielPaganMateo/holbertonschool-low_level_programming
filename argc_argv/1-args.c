#include "main.h"
#include <stdio.h>
#define UNUSED(char *argv[]);
/**
 * main - Prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument array
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	UNUSED(argv[]);

	printf("%d\n", argc);
}
