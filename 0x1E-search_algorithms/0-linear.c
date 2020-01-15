#include "search_algos.h"
/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
  size_t i = 0;
  int found = 0;
  
  for (i = 0; i <= size; i++)
    {
      if (array[i] == value)
	{
	  found = 1;
	  return (i);
	}
    }
  found = -1;
  return (found);
}
