#include "search_algos.h"
/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
  size_t i = 0;
  
  for (i = 0; i < size; i++)
    {
      if (array[i] == value)
	{
	  return (i);
	}
      printf("Value checked array[%lu] = [%d]\n", i, array[i]);
    }
  return (-1);
}
