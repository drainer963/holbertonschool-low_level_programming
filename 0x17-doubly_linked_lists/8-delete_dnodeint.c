#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at given index.
 * @head: head node
 * @index: index
 *
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		if (!temp)
			return (-1);
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	if (index)
	{
		for (i = 0; temp != NULL && i < index - 1; i++, --index)
			temp = temp->next;
		if (index)
			return (-1);
		if (temp == NULL || temp->next == NULL)
			return (-1);

	}
	free(temp);
	free(temp->next);
	return (1);
}
