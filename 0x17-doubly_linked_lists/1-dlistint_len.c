#include "lists.h"
/**
 * dlistint_len - return amount of elements in linked list.
 * @h: head node
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 1;

	while (h)
	{
		if (h->next != '\0')
			i++;
		break;
	}
	return (i);
}
