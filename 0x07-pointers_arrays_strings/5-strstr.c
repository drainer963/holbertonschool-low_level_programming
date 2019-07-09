#include "holberton.h"

/**
 * *_strstr - find needle in haystack and return needle.
 * @haystack: char ptr
 * @needle: char ptr
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (needle);
		}
	}
	return (NULL);
}
