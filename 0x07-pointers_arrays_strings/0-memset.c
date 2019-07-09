#include "holberton.h"
/**
 * *_memset - set n memory to byte b.
 * @s: char ptr
 * @b: char
 * @n: unsig int
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		s[i] = b;
	return (s);
}
