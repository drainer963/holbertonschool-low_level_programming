#include "lists.h"
/**
 * add_node - add node to head of linked list.
 * @head: list double pointer
 * @str: const char pointer
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(newNode->str);
	newNode->next = *head;
	*head = newNode;
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
