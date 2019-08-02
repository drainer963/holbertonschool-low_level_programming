#include "lists.h"
/**
 * free_list - free previosly malloc'd space.
 * @head: pointer
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
