#include "holberton.h"
#include <stdio.h>

/**
 * factorial - return factorial
 * @n: int
 *
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
