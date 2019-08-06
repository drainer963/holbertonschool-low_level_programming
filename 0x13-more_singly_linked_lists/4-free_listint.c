#include "lists.h"

/**
 * free_listint - free linked list.
 * @head: first member of list
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
