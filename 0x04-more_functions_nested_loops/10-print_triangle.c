#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int r, c;

	for (r = 1; r <= size; ++r)
	{
		for (c = 1; c <= size - r; ++c)
			_putchar(' ');

		while (c <= size)
		{
		`	_putchar('#');
		`	++c;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
