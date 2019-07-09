#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copies to mem
 * @dest: the dest
 * @src: the source
 * @n: int
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}
