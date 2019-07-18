#include "holberton.h"
/**
 * _calloc - calloc implemention.
 * @nmemb: number of members
 * @size: u int
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array = malloc(nmemb * size);
	unsigned int i = 0;

	if (!array)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; array[i]; i++)
		array[i] = 0;
	return (array);
}
