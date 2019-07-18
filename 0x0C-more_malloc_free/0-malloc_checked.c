#include "holberton.h"
/**
 * malloc_checked - malloc size b.
 *
 * @b: unsigned int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
		free(ptr);
	}
	return (ptr);
}
