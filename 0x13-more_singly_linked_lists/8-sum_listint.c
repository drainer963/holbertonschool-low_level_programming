#include "lists.h"
/**
 * sum_listint - return sum of all nodes in linked list.
 * @head: pointer to linked list
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
