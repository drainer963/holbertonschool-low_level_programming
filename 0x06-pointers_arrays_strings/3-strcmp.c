#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compare strings
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
