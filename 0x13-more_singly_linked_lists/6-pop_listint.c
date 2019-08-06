#include "lists.h"

/**
 * pop_listint - delete first member of linked list and return its data.
 * @head: double pointer to linked list
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int save;

	if (!head || !*head)
		return (0);
	temp = temp->next;
	save = (*head)->n;
	free(*head);
	*head = temp;
	return (save);
}
