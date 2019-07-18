#include "holberton.h"
/**
 * _calloc - calloc implemention.
 * @nmemb: number of members
 * @size: u int
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array = malloc(nmemb * size);
	unsigned int i = 0;

	if (!array)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	while (i < nmemb)
		++i;
	array[i] = 0;
	return (array);
}
