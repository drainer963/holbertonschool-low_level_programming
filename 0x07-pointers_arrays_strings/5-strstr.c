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
	int j, k, i = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = i, k = 0; needle[k] != '\0'; j++, k++)
		{
			if (needle[k] != haystack[j] || haystack[j] == '\0')
			{
				break;
			}
		}
		if (needle[k] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
