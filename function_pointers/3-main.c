#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Accept arguments for operation
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int a, b, c;
	char *s;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	c = get_op_func(s)(a, b);

	printf("%d\n", c);


	return (0);
}




