#include "holberton.h"
/**
 * _memset - set n memory to byte b.
 * @s: char ptr
 * @b: char
 * @n: unsig int
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	do {
		*s++ = b;
	} while (--n);
	return (s);
}
