#include "holberton.h"
/**
 * create_array - create an array and initalize with certian char
 * @size: Uint
 * @c: the char to init
 *
 * Return: array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		array[size] = c;
	}
	return (array);
}
