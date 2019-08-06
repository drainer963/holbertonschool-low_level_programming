#include "lists.h"
/**
 * add_nodeint_end - add node to end of linked list
 * @head: list_t double pointer
 * @n: const integer
 *
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!new->n)
	{
		free(new);
		return (NULL);
	}
	if (!*head)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);

}
