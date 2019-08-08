#include "holberton.h"
/**
 * clear_bit - clear bits by setting to 0
 * @n: UL int.
 * @index: UI
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new = *n;

	if (index > sizeof(n) * 8)
		return (-1);
	new &= ~(1UL << index);
	*n = new;
	return (1);
}
