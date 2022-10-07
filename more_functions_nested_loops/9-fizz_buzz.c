#include <stdio.h>
/**
 * main- Print numbers 1 to 100, fizz if multiple of 3 & buzz if multiple of 5
 * Return: Number, fizz or buzz
 */
int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			printf("Buzz ");
			else 
			printf("Buzz");
		}
		else if ((num % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i ", num);
		}
	}
	return (0);
}
