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
	int fd;
	size_t ret;
	char buf[8092];

	if (filename == NULL || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ret = read(fd, buf, letters);
	*buf = 0x00;
	ret = write(STDOUT_FILENO, buf, ret);
	close(fd);
	return (ret);
}
