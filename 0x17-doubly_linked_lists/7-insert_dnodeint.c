#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given index.
 * @h: head node
 * @idx: index
 * @n: data
 * Return: newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h, *newnode = malloc(sizeof(dlistint_t));

	if (!idx || !h)
		return (NULL);
	newnode->n = n;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			newnode->next = current->next;
			current->next = newnode;
			return (newnode);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
