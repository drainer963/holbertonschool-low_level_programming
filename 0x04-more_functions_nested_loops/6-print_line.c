#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 *
 * @n: int
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
