#include "sort.h"
/**
 * swap - swap pointer values
 * @xp: x pointer
 * @yp: y pointer
 *
 * Return: Always 0
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}
/**
 * bubble_sort - sort using bubble sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || !array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
}
