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

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR);
	if (fd == -1)
		return (-1);
	ret = write(STDOUT_FILENO, text_content, ret);
	if (!ret)
		return (-1);
	close(fd);
	return (1);
}
