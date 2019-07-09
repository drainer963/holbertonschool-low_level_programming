#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copies to mem
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: int
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		*dest++ = *src++;
	return (dest);
}
