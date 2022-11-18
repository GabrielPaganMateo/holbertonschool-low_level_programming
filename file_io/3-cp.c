#include "main.h"
/**
 * main - copies the content of a file to another file
 * Return: integer
 */
int main (int argc, char *argv[])
{
	int fd1, fd2;

	if (argc != 3)
	{
		write(1, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1 || argv[1] == NULL)
	{
		write(1, "Error: Can't read from file NAME_OF_THE_FILE\n", 45);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR);

	if (fd2 == -1)
	{
	}

	printf("TESTing printf");

	return(1);
}


