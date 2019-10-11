#include "hash_tables.h"
/**
 * hash - hashes values for keys.
 * @str: pointer to string
 *
 * Return: pointer to value
 */
unsigned long hash(char *str)
{
	unsigned int hash = 0;
	int c;

	while ((c = *str++))
		hash += c;

	return (hash);
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
 * ht_get - gets value of key in hashtable
 * @hashtable: table of nodes
 * @key: pointer to key
 *
 * Return: value
 */
char *ht_get(hash_table_t *hashtable, char *key)
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

/**
 * hash_table_create - creates our hash table
 * @size: how many nodes to add before collisions will occuor
 *
 * Return: table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (hashtable != NULL)
	{
		if (hashtable->array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; ++i)
		{
			hashtable->array[i] = NULL;
		}
		return (hashtable);
	}
	return (NULL);
}
/**
 * ht_print - print hashtable elements.
 * @hashtable: pointer to hashtable
 *
 * Return: Always EXIT_SUCCESS.
 */
void ht_print(hash_table_t *hashtable)
{
	unsigned long int i = 0;
	hash_node_t *node;

	for (i = 0; i < hashtable->size; ++i)
	{
		node = hashtable->array[i];

		if (node == NULL)
		{
			continue;
		}

		printf("slot[%4lu]: ", i);

		for (;;)
		{
			printf("%s=%s ", node->key, node->value);

			if (node->next == NULL)
			{
				break;
			}
			node = node->next;
		}

		printf("\n");
	}
}
