#include "sort.h"
/**
 * selection_sort - sorting algorithm
 * @array: integer array
 * @size: array len
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t min_index = 0;
	size_t i = 0, j = 0;

	if (!array)
	        return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_index])
				min_index = j;
		if (i != min_index)
		{
		    swap(&array[min_index], &array[i]);
		    print_array(array, size);
		}
	}
}

/**
 * swap - swap array values
 * @xp: x pointer
 * @yp: y pointer
 *
 * Return: void
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}
