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
	if (text_content)
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
int _strlen(char *s)
{
	int i = 0;

	for (; s[i]; i++)
		;
	return (i);
}
