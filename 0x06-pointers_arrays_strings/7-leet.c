#include "holberton.h"
/**
 * *leet - translate string to 1337.
 * @s: char pointer
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	char alph[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	int i = 0;
	char *rv = s;

	for (; *s != '\0'; s++)
	{
		for (i = 0; alph[i] != '\0'; i++)
			if (*s == alph[i])
				*s = leet[i];
	}
	return (rv);
}
