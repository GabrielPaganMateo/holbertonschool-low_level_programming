#include<stdio.h>
/**
 * main - Print a string
 *
 * Description: Print the size of various types
 *
 * Return: Always 0 (Success)
 *
 */
int main(void);
{
	int intType;
	float floatType;
	char charType;
	long longType;
	long long LONGType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType);
	printf("Size of an int: %zu byte(s)\n", sizeof(intType);
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType);
	printf("Size of a long long int: %zu byte(s)\n", sizeof(LONGType);
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType);

	return (0);
}
