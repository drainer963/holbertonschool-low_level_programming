#include "holberton.h"

#define SIZE 1024
#define INCORRECT "Usage: cp file_from file_to\n"
#define READ "Error: Can't read from file %s\n"
#define WRITE "Error: Can't write to %s\n"
#define CLOSE "Error: Can't close fd %d\n"
/**
 * main - starting point of this program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd, fd2, ret = 0;
	char buf[SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, INCORRECT), exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, READ, argv[1]), exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, WRITE, argv[2]), exit(99);

	}
	while (ret = read(fd, buf, SIZE))
	{
		if (ret == -1)
		{
			dprintf(STDERR_FILENO, READ, argv[1]), exit(98);
			close(fd);
			close(fd2);
		}
	ret = write(fd2, buf, ret);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, WRITE, argv[2]), exit(99);
	}
	close(fd);
	close(fd2);
	}
	if (fd)
		dprintf(STDERR_FILENO, CLOSE, fd), exit(100);
	if (fd2)
		dprintf(STDERR_FILENO, CLOSE, fd), exit(100);
	return (0);
}
