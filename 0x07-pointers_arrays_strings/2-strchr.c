#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - check string for certian char
 * @s: char pointer
 * @c: char.
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
