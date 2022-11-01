#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Accept arguments for operation
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	char *s;

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	
	if (*s != '+' || *s != '-' || *s != '/' || *s != '%' || *s != '*')
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	c = get_op_func(s)(a, b);

	printf("%d\n", c);

	return (0);
}




