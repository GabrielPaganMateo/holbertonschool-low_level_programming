#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Accept arguments for operation
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int a, b;
	char *s;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	return (get_op_func(s)(a, b));
}




