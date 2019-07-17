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
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(int *) * height);
	if (!matrix)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		matrix[i] = malloc(sizeof(int *) * width);
		if (!(*(matrix)))
		{
			while (i >= 0)
			{
				free(matrix[i - 1]);
			}
			free(matrix);
			return (NULL);
		}
	}
	return (matrix);
}
