#include "holberton.h"
/**
 * get_bit - return value of given bit.
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, *bits = malloc(sizeof(int) * index);
	unsigned int mask, maskN, bit;

	while (i < index)
	{
		i++;
		mask = 1 << i;
		maskN = n & mask;
		bit = maskN >> i;
		*bits = bit;
	}
	return (*bits);
}
