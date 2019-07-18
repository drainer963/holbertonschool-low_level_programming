#include "holberton.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: char pointer
 * @s2: char pointer
 * @n: u int
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, len2, len3, i, j;
	char *retval;

	len = _strlen(s1);
	len2 = n;
	len3 = len + len2;
	retval = malloc(sizeof(char) * (len3 + 1));
	if (retval == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
		retval[i] = s1[i];
	for (j = 0; j < n; j++)
		retval[i + j] = s2[j];
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
