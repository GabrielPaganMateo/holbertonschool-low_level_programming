#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiply two numbers
 * @argc: argument count
 * @argv: argument array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int product, num1, num2;
	char error[] = "Error";

	if (argc < 2 && argc != 0 && argc != 1)
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;

	printf("%d\n", product);
	}
	else
	{
		printf("%s\n", error);
		return (1);
	}

	return (0);
}
