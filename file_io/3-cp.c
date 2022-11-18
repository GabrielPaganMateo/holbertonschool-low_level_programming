#include "main.h"
#include <stddef.h>
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: array of arguments
 * Return: integer
 */
int main (int argc, char *argv[])
{
	int fd1, fd2, cl1, cl2, readcount, writecount;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);

	if (fd2 == -1 || argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while(1)
	{
		readcount = read(fd1, buf, 1024);
		writecount = write(fd2, buf, readcount);

		if (readcount == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		if (writecount == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		if (readcount == 0)
		{
			break;
		}
	}

	cl1 = close(fd1);
	cl2 = close(fd2);

	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", cl1);
		exit(100);
	}
	else if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", cl2);
		exit(100);
	}

	return(0);
}


