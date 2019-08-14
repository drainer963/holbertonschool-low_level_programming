#include "holberton.h"
/**
 * append_text_to_file - appends text to end of specified file.
 * @filename: const char pointer
 * @text_content: char pointer
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret = 0;
	size_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (len)
		ret = write(fd, text_content, len);
	close(fd);
	if (ret == -1)
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
