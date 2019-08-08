#include "holberton.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: const char pointer.
 *
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		n *= 2;
		if (*b++ == '1')
		{
			n++;
		}
	}
	return (n);
}
