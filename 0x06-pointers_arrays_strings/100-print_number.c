#include "holberton.h"

/**
 * print_number - print number using only putchar
 * @n: int
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (n / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
