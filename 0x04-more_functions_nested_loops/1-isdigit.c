#include "holberton.h"

/**
 * _isdigit - ensures char is digit.
 * @c: int
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
