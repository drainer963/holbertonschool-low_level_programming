#include "search_algos.h"
/**
 * linear - linear search algorithm
 * @array: int array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index, or if no index found, -1
 */
int linear_search(int *array, size_t size, int value)
{
  size_t i = 0;
  
  for (i = 0; i < size; i++)
    {
      if (array[i] == value)
	{
	  printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	  return(i);
	}
      printf("Value checked array[%lu] = [%d]\n", i, array[i]);
    }
  return (-1);
}
