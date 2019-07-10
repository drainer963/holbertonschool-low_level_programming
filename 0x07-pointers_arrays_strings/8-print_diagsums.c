#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int r, c, sum;
	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			if (r == c)
				sum = sum + *a;
		}
	}
	printf("%d", sum);
}
