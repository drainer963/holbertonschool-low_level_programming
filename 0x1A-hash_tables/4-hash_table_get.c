#include "hash_tables.h"

/**
 * ht_get - gets value of key in hashtable
 * @hashtable: table of nodes
 * @key: pointer to key
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int slot = hash(key);
	hash_node_t *node = ht->array[slot];

	if (node == NULL)
	{
		return (NULL);
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}

	return (NULL);
}
