#include "holberton.h"

/**
 * *_strstr - find needle in haystack and return pointer to substring.
 * @haystack: char ptr
 * @needle: char ptr
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int j, i;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] == haystack[j])
				return (&haystack[j]);
			i++;
		}
	}
	return (NULL);
}
