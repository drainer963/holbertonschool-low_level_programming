#include "holberton.h"

/**
 * _islower - check the code for lowercase
 * @c: int
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
