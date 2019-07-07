#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - make string uppercase
 *
 * @string: char pointer
 * Return: Always 0.
 */
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = string[i] - 32;
		}
	}
	return (string);
}
