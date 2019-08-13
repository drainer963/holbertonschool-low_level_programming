#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * read_textfile - read text and write it to stdout using open, read, wri
 * te, and close system calls.
 * @filename: const char pointer
 * @letters: size_t char count
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ret;
	size_t  bytes;
	char *buf = malloc(sizeof(size_t) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);
	ret = read(fd, buf, letters);
	buf[letters] = '\0';

	bytes = write(1, buf, ret);
	if (!bytes || bytes > letters)
		return (0);
	close(fd);

	return (bytes);
}
