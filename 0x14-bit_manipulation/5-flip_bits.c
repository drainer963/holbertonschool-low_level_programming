#include "holberton.h"
/**
 * flip_bits - calls countSetBits and exec it to find num of total flipped bits
 * @n: Ul integer
 * @m: Ul integer
 *
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n == m)
		return (0);
	return (countSetBits(n ^ m));
}

/**
 * countSetBits - counts number of bits it has to edit to turn int n to int m
 * @n: int
 *
 * Return: count
 */
int countSetBits(int n)
{
	int i = 0;

	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
