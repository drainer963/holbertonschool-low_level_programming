#include "lists.h"
/**
 * add_dnodeint - add node to start of doubly linked list.
 * @head: head node
 * @n: data
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (head == NULL || !newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = (*head);
	newnode->prev = NULL;
	(*head) = newnode;
	return (newnode);
}
