#include "lists.h"
/**
 * add_dnodeint_end - add node to end of doubly linked list.
 * @head: first node
 * @n: data
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = (*head), *newnode = malloc(sizeof(dlistint_t));

	if (head == NULL || !newnode)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = newnode;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		newnode->prev = ptr;
		ptr->next = newnode;
	}
	return (newnode);
}
