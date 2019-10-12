#include "hash_tables.h"
/**
 * hash_table_set - sets value of node in table
 * @ht: table of nodes with key/value pairs
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node, *temp = NULL;

	if (!key)
		return (0);

	if (!ht)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		node = node->next;
	}
	temp = malloc(sizeof(hash_node_t *));
	if (!temp)
		return (0);
	temp->key = strdup(key);
	if (!temp->key)
		return (0);
	temp->value = strdup(value);
	if (!temp->value)
		return (0);
	temp->next = ht->array[i];
	ht->array[i] = temp;
	return (1);
}

/**
 * hash - hashes values for keys.
 * @str: const char pointer to keys in table
 *
 * Return: pointer to value
 */
unsigned long hash(const char *str)
{
	unsigned int hash = 0;
	int c;

	while ((c = *str++))
		hash += c;

	return (hash);
}
