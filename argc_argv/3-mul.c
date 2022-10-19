#include "main.h"
#include <stdio.h>
/**
 * main - Multiply two numbers
 * @argc: argument count
 * @argv: argument array
 * Return: integer
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int product, num1, num2;

	num1 = *argv[1];

	num2 = *argv[2];

	product = (num1 * num2);

	printf("%d\n", product);

	return (0);
}
