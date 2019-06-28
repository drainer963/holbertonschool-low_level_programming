#include "holberton.h"

/**
 * more_numbers - keep printing nums.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j, l, k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 15; i++)
		{
			l = (i / 10);
			k = (i % 10);
			if (l != 0)
				_putchar(l + '0');
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
