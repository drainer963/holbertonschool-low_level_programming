#include "lists.h"
/**
 * print_list - prints a singly linked list.
 * @h: const char pointer to list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
