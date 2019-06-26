#include "holberton.h"

/**
 * add - add two integers.
 * @y: int
 * @x: int
 * Return: Always 0.
 */
int add(int x, int y)
{

	while (y != 0)
	{
		int z = x & y;

		x = x ^ y;
		y = z << 1;
	}
	return (x);
}
