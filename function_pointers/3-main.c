#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Accept arguments for operation
 * @argc: argument count
 * @argv: array of arguments
 * Return: result of operation
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if (*s == '+' || *s == '-' || *s == '/' || *s == '*' || *s == '%' || argv[2][1] != '\0' )
	{
		c = get_op_func(s)(a, b);

		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
