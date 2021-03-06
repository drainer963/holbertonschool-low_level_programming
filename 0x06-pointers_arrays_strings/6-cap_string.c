#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalize all words in string
 *
 * @s: char pointer
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i, l;
	char sep[] = {' ', '.', ';', ',', '!', '?', '\"', '(', ')', '{', '}'
		      , '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		for (l = 0; l < 14; l++)
		{
			if (s[i] == sep[l])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
