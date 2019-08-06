#include "lists.h"
/**
 * free_listint2 - free previosly malloc'd space and set head to NULL.
 * @head: double pointer to linked list
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
