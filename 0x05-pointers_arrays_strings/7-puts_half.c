#include "holberton.h"

/**
 * puts_half - put half of a string.
 * @low: int
 * @str: char
 * @high: int
 * Return: Always 0.
 */
void puts_half(char *str, int low, int high)
{
	if (low <= high)
	{
		_putchar(str[low]);
		puts_half(str, low + 4, high);
	}
}
