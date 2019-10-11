#include "hash_tables.h"

unsigned int hash(const char *key)
{
	unsigned long int value = 0;
	unsigned int i = 0;
	unsigned int key_len = strlen(key);

	for (i = 0; i < key_len; i++)
	{
		value = value *37 + key[i];
	}

	value = value % TABLE_SIZE;
	return (value);
}

hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t) * 1);

	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);

	strcpy(node->key, key);
	strcpy(node->value, value);

	node->next = NULL;

	return (node);
}

void ht_set(hash_table_t *hashtable, const char *key, const char *value)
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

char *ht_get(hash_table_t *hashtable, const char *key)
{
	unsigned int slot = hash(key);
	hash_node_t *node = hashtable->array[slot];

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

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(sizeof(hash_table_t) * 1);
	unsigned long int i = 0;

	hashtable->array = malloc(sizeof(hash_node_t*) * size);

	if (hashtable->array == NULL)
		return (NULL);

	for (i = 0; i < size; ++i)
	{
		hashtable->array[i] = NULL;
	}
	return (hashtable);
}
