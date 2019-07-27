#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - find sum of all args.
 * @n: unsigend int
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int total = 0;

	va_start(sum, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		total += va_arg(sum, int);
	}
	va_end(sum);
	return (total);
}
