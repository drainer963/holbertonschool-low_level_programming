#include "lists.h"
/**
 * add_node_end - add node to end of linked list
 * @head: list_t double pointer
 * @str: const char pointer
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tmp = *head;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->next = NULL;
	newNode->str = strdup(str);
	newNode->len = _strlen(newNode->str);
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
	}
	return (newNode);
}
/**
 * _strlen - find len of string
 * @str: char pointer
 *
 * Return: len
 */
int _strlen(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
