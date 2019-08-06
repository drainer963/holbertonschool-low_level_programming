#include "lists.h"

/**
 * get_nodeint_at_index - return nth node.
 * @head: pointer to linked list
 * @index: unsigned integer
 *
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (node != NULL)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	return (0);
}
