#include "holberton.h"

/**
 * create_file - create file and add data.
 * @filename: const char pointer
 * @text_content: string to write
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t ret = 0;

	fd = open(filename, O_CREAT | O_RDWR);
	if (fd == -1)
		return (0);
	write(STDOUT_FILENO, text_content, ret);
	close(fd);
	return (ret);
}
