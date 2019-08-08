#include "holberton.h"

/**
 * print_binary - convert numbers into binary
 * @n: unsigned long.
 *
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	int i = n;

	if (n == 0)
		_putchar('0');

	while (i > 0)
	{
		if ((n & i) == 0)
		{
			_putchar('0');
		}
		else
			_putchar('1');
		i = i >> 1;
	}
}
