#include "main.h"
#include <stddef.h>
void ReadError(char *argv);
void WriteError(char *argv);
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: array of arguments
 * Return: integer
 */
int main(int argc, char *argv[])
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
		ReadError(argv[1]);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1 || argv[2] == NULL)
		WriteError(argv[2]);
	while (1)
	{
		readcount = read(fd1, buf, 1024);
		if (readcount == 0)
			break;
		if (readcount == -1)
			ReadError(argv[1]);
		writecount = write(fd2, buf, readcount);
		if (writecount == -1)
			WriteError(argv[2]);
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
	return (0);
}
/**
 * ReadError - prints read error
 * @argv: pointer to string
 */
void ReadError(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	exit(98);
}
/**
 * WriteError - prints write error
 * @argv: pointer to string
 */
void WriteError(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
	exit(99);
}
