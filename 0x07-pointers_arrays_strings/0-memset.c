#include "holberton.h"
/**
 * *_memset - set n memory to byte b.
 * @s: char ptr
 * @b: char
 * @n: num of bytes
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
