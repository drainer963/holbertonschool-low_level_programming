#include "lists.h"
/**
 * print_dlistint - print all elements of doubly linked list
 * @h: head node
 *
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 1;

	while (h)
	{
		if (h->n)
		{
			printf("%i", h->n);
			printf("\n");
			if (h->next->n)
			{
				printf("%i", h->next->n);
				printf("\n");
				i++;
				break;
			}
		}
	}
	return (i);
}
