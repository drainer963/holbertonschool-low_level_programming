#include "holberton.h"
#include <stdio.h>

/**
 * alloc_grid - allocate a grid and return a pointer to it
 *
 * @width: int
 * @height: int
 * Return: 0 success
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j, l, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (!matrix)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));

		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (k = 0; k < width; k++)
			matrix[l][k] = 0;
	}
	return (matrix);
}
