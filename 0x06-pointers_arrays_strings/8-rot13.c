#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - convert string to rot13.
 * @s: char pointer
 * Return: Always 0.
 */
char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char *rv = s;

	for (; *s != '\0'; s++)
	{
		for (i = 0; alpha[i] != '\0'; i++)
			if (*s == alpha[i])
				*s = rot13[i];
	}
	return (rv);
}
