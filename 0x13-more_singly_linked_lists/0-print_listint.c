#include "lists.h"
/**
 * print_listint - prints a singly linked list.
 * @h: const char pointer to list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n == 0)
		{
			return ('\0');
		}
		else
			printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
