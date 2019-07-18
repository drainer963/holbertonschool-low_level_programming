#include "holberton.h"
/**
 * array_range - sort array by min and max.
 * @min: int
 * @max: int
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
