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
	ssize_t len = _strlen(text_content), len2 = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (len)
		len2 = write(fd, text_content, len);
	close(fd);
	if (len2 == -1)
		return (-1);
	return (1);
}
/**
 * _strlen - return the length of a string
 * @s: char pointer
 *
 * Return: The length of the string
 */
ssize_t _strlen(char *s)
{
	ssize_t i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
