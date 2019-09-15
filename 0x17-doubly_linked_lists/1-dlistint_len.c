#include "lists.h"
/**
 * dlistint_len - return amount of elements in linked list.
 * @h: head node
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
