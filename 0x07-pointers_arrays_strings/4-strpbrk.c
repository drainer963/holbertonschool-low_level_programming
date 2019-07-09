#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - search string for any set of bytes.
 * @s: char ptr
 * @accept: char ptr
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (__strchar(accept, *s++))
			return (--s);
	}
	return (NULL);
}
/**
 * __strchar - search string for any set of bytes.
 * @s: char ptr
 * @c: char
 * Return: Always 0
 */
char *__strchar(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
