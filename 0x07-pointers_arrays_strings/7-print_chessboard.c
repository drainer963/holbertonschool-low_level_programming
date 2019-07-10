#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - check the code for Holberton School students.
 *
 * @a: char ptr
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
