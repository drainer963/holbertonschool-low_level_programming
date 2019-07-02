#include "holberton.h"

/**
 * puts2 - puts
 * @str: char
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - check the code for Holberton School students.
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
