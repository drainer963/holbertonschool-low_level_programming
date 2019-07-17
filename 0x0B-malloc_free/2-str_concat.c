#include "holberton.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: char pointer
 * @s2: char pointer
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int len;
	char *retval;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = _strlen(s1);
	len2 = _strlen(s2);
	len3 = len + len2;
	retval = malloc(sizeof(char) * (len3 + 1));
	if (retval == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
		retval[i] = s1[i];
	for (j = 0; s2[j]; j++)
		retval[j + i] = s2[j];
	retval[i + j] = '\0';
	return (retval);
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
