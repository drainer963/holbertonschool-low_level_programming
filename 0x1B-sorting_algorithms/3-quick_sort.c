#include "sort.h"
/**
 * quick_sort - quick sort algorithm
 *
 * @array: int array
 * @size: array size
 * Return: void
 */
void quick_sort(int array[], size_t size)
{
  int first = 0;

  quick_sort_2(array, first, size - 1, size);
}
/**
 * quick_sort_2 - Entry point
 *
 * @array: int array
 * @low: first element
 * @high: last element
 * @size: array size
 * Return: void
 */
void quick_sort_2(int *array, int low, int high, size_t size)
{
  int pi;

  if (low < high)
    {
      pi = part(array, low, high, size);
      quick_sort_2(array, low, pi - 1, size);
      quick_sort_2(array, pi + 1, high, size);
    }
}
/**
 * part - partition array
 *
 * @array: int array
 * @first: first element
 * @last: last element
 * @size: array size
 * Return: void
 */
int part(int *array, int first, int last, size_t size)
{
  int pivot = array[last], j = 0;
  int i = first - 1;

  for (j = first; j < last; j++)
    {
      if (array[j] < pivot)
	{
	  ++i;
	  swap(&array[i], &array[j]);
	  print_array(array, size);
	}
    }
  swap(&array[i + 1], &array[last]);
  print_array(array, size);
  return (i + 1);
}
/**
 * swap - Entry point
 * @a: int pointer
 * @b: int pointer
 *
 * Return: void
 */
void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}
