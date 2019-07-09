#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - checks accept for first instance of s and returns a pointer to it.
 * @accept: char pointer
 * @s: char pointer
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (l != i)
			break;
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				l++;
		}
	}
	return (l);
}
