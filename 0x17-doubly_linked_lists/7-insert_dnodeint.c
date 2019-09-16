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
	if (idx == 0)
	{
		if (!*h)
		{
			newnode->prev = NULL;
			newnode->next = NULL;
		}
		else
		{
			newnode->prev = NULL;
			newnode->next = *h;
			(*h)->prev = newnode;
		}
	}
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			newnode->next = current->next;
			if (current->next)
				current->next->prev = newnode;
			current->next = newnode;
			return (newnode);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
