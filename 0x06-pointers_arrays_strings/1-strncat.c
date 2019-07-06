#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - string concat.
 * @dest: destionation
 * @src: source
 * @n: int
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *tmp = dest;

	while (*tmp)
		tmp++;
	while (i < n && i <= *src)
	{
		*tmp = *src;
		src++;
		tmp++;
		i++;
	}
	*tmp = '\0';
	return (dest);
}
