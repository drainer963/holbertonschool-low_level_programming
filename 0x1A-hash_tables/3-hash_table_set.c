#include "hash_tables.h"
/**
 * ht_set - sets value of node in table
 * @hashtable: table of nodes with key/value pairs
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_set(hash_table_t *hashtable, char *key, char *value)
{
	unsigned int slot = hash(key);
	hash_node_t *node = hashtable->array[slot];
	hash_node_t *prev;

	if (node == NULL)
	{
		hashtable->array[slot] = ht_pair(key, value);
		return;
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->key = malloc(strlen(value) + 1);
			strcpy(node->value, value);
			return;
		}

		prev = node;
		node = prev->next;
	}
	prev->next = ht_pair(key, value);
}
