#include "holberton.h"
/**
 * print_to_98 - printing to 98
 * @n: int
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98\n");
}
