#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates an integer
 * @array: the integer to print
 * @size: size_t
 * @action: void function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
