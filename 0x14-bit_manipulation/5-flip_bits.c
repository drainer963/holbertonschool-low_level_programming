#include "holberton.h"
/**
 * flip_bits - finds num of total flipped bits
 * @n: Ul integer
 * @m: Ul integer
 *
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int sum = n ^ m;

	while (sum)
	{
		i += sum & 1;
		sum >>= 1;
	}
	return (i);
}
