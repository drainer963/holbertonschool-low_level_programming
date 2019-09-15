#include "lists.h"
/**
 * sum_dlistint - find sum of all elements in linked list.
 * @head: first node
 *
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!head)
		return (0);
	while (current)
	{
		if (current->n)
			sum += current->n;
			current = current->next;
	}
	return (sum);
}
