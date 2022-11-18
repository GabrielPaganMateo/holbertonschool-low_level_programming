#include "main.h"
/**
 * create_file - Function that creates a file
 * @filename: pointer to file
 * @text_content: pointer to Null terminated string
 * Return: 1 on success , -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR);

	if (fd == -1)
	{
		fd = open(filename, O_TRUNC);
		return (1);
	}

	write(STDOUT_FILENO, text_content, len);

	close(fd);

	return (1);
}

