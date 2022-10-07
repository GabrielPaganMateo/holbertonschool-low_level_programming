#include <stdio.h>
/**
 * main- Print numbers 1 to 100, fizz if multiple of 3 & buzz if multiple of 5
 * Return: Number, fizz or buzz
 */
int main(void)
{
	int num, three, five;
	three = num % 3
	five = num % 5

	for (num = 1 ; num <= 100 ; num++)
	{
		if (three == 0)
		{
			printf("Fizz ");
		}
		else if (five == 0)
		{
			if (num != 100)
			printf("Buzz ");
			else 
			printf("Buzz");
		}
		else if (three == 0 && five == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i ", num);
		}
	}
	printf("\n");
return (0);
}
