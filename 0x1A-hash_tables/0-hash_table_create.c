#include "hash_tables.h"
/**
 * hash_table_create - creates our hash table
 * @size: how many nodes to add before collisions will occuor
 *
 * Return: table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));

	hashtable->array = calloc(size, sizeof(hash_node_t *));

	if (!hashtable || !size)
		return (NULL);

	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	hashtable->size = size;

	return (hashtable);
}
