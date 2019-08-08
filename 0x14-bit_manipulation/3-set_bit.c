#include "holberton.h"
/**
 * set_bit - toggle bits to 1
 * @n: UL int.
 * @index: UI
 *
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new = *n;

	if (index > sizeof(n) * 8)
		return (-1);

	new ^= 1UL << index;
	*n = new;
	return (*n);
}
