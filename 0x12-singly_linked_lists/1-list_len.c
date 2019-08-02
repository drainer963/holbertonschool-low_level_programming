#include "lists.h"

/**
 * list_len - find number of linked list elements
 * @h: const char pointer
 *
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
