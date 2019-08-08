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
	if (!n)
		return (-1);
	return (n >> index & 1);
}
