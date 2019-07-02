#include "holberton.h"

/**
 * puts_half - put half of a string.
 * @str: char
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		c++;
		str++;
	}
	if (c % 2 == 0)
		c = c / 2;
	else
		c = c - 1 / 2;
	str = str - c;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		_putchar('\n');
	}
}
