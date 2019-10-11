#include "hash_tables.h"
/**
 * hash_table_set - sets value of node in table
 * @ht: table of nodes with key/value pairs
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, char *key, char *value)
{
	unsigned int slot = hash(key);
	hash_node_t *node = ht->array[slot];
	hash_node_t *prev;

	if (node == NULL)
	{
		ht->array[slot] = ht_pair(key, value);
		return (1);
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->key = malloc(strlen(value) + 1);
			strcpy(node->value, value);
			return (1);
		}

		prev = node;
		node = prev->next;
	}
	prev->next = ht_pair(key, value);
	return (0);
}
