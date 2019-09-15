#include "lists.h"
/**
 * free_dlistint - free previosly malloc'd space.
 * @head: head pointer
 * Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	free(head);
	free_dlistint(head->next);
}
