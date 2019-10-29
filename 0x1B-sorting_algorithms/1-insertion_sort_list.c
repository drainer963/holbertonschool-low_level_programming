#include "sort.h"
/**
 * insertion_sort_list - insertion sort algorithm
 *
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL, *j = *list;
	listint_t *next;

	if ((*list) == NULL || (*list)->next == NULL)
		return;

	while (j != NULL)
	{
		next = j->next;
		sortedInsert(&sorted, j);
		print_list(*list);
		j = next;
	}
	*list = sorted;
}
/**
 * sortedInsert - helper function
 *
 * @head_ref: pointer to head of linked list
 * @new_node: pointer to new node
 * Return: Always 0
 */
void sortedInsert(listint_t **head_ref, listint_t *new_node)
{
	listint_t *current;
	/* Special case for the head end */
	if (*head_ref == NULL || (*head_ref)->n >= new_node->n)
	{
		new_node->next = *head_ref;
		*head_ref = new_node;
	}
	else
	{
		current = *head_ref;
		while (current->next != NULL &&
		       current->next->n < new_node->n)
		{
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
}
