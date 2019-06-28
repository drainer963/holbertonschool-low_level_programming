#include "holberton.h"

/**
 * _isupper - make sure char is uppercase.
 *
 * @c: int
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
