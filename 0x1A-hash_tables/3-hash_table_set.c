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

	if (!key)
		return (0);

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

/**
 * ht_pair - initializes keys value pairs.
 * @key: const char
 * @value: const char
 * Return: pointer to node
 */
hash_node_t *ht_pair(char *key, char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t) * 1);

	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);

	strcpy(node->key, key);
	strcpy(node->value, value);

	node->next = NULL;

	return (node);
}

/**
 * hash - hashes values for keys.
 * @key: const char pointer to keys in table
 *
 * Return: pointer to value
 */
unsigned long hash(char *str)
{
	unsigned int hash = 0;
	int c;

	while ((c = *str++))
		hash += c;

	return hash;
}
