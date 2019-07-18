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
	int i, sum;

	if (min > max)
		return (NULL);
	sum = min + max;
	array = malloc(sizeof(int) * (sum + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		array[i] = i;
	return (array);
}
