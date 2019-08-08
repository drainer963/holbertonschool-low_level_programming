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
		_putchar(n & i ? '1' : '0');
		i = i >> 1;
	}
}
