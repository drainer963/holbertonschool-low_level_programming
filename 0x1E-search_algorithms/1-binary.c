#include "search_algos.h"
/**
 * binary_search - binary search algorithm
 * @array: integer array to search
 * @size: size of the array
 * @value: element to search for
 *
 * Return: index where value is first located, -1 upon fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, i, mid;

	if (!array)
		return (-1);

	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (min + max) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			max = mid - 1;
		else if (value > array[mid])
			min = mid + 1;
	}
	return (-1);
}
