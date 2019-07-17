#include "holberton.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: char pointer
 * @s2: char pointer
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int len = _strlen(s1), len2 = _strlen(s2), len3 = len + len2 + 1;
	char *retval;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	retval = malloc(len3);
	if (!retval)
	{
		return (NULL);
	}
	_strcpy(retval, s1);
	_strcpy(retval + len, s2);
	return (retval);
}
/**
 * _strcpy - copy string
 * @dest: char
 * @src: char
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - check the length of string
 * @s: char
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}
