#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: char
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, n, len = 0, tmp;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	n = len - 1;
	for (i = 0; i < n; i++, n--)
	{
		tmp = s[i];
		s[i] = s[n];
		s[n] = tmp;
	}
}
