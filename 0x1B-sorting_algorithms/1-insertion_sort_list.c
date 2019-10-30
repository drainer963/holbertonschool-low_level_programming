#include "sort.h"
/**
 * bubble_sort - sort using bubble sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tempnxt = NULL, *current = *list, *temp = NULL;

	if (*list == NULL || !list)
		return;

	tempnxt = (*list)->next;

	while (tempnxt != NULL)
	{
		while (tempnxt != current && tempnxt->n < current->n)
		{
			temp = current;
			current = tempnxt;
			tempnxt = temp;
			current = current->next;
		}
		current = *list;
		tempnxt = tempnxt->next;
	}
}
