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
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (*needle == haystack[i] && *needle != '\0')
			return (needle);
	}
	return (NULL);
}
