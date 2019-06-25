#include "holberton.h"
/**
 * print_alphabet - printing alpha
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
