#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at any given index.
 * @head: double pointer to linked list
 * @idx: unsigned int
 * @n: int
 *
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *currentNode, *prevNode, *nScan = *head;

	currentNode = malloc(sizeof(listint_t));
	if (currentNode)
	{
		currentNode->n = n;
		if (idx == 0)
		{
			currentNode->next = *head;
			*head = currentNode;
			return (*head);
		}
		while (nScan && i != idx)
		{
			prevNode = nScan;
			nScan = nScan->next;
			i++;
		}
		if (i == idx)
		{
			prevNode->next = currentNode;
			currentNode->next = nScan;
		}
		else
			return (NULL);
	}
	return (currentNode);

}
