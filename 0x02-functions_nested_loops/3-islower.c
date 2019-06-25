#include "holberton.h"

/**
 * _islower - check the code for lowercase
 * @c: int
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (!(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
