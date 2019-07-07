#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - copy string.
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (ptr);
}
