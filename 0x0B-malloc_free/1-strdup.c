#include "holberton.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in mem
 * @str: char pointer
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *newstr;
	char *tmp;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	newstr = malloc(len + 1);
	tmp = newstr;
	while (*str)
		*tmp++ = *str++;
	*tmp = '\0';
	return (newstr);
	return (NULL);
}
