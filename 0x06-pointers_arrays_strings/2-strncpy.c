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

	if (dest == NULL)
		return (NULL);
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n++;
	}
	*dest = '\0';
	return (ptr);
}
