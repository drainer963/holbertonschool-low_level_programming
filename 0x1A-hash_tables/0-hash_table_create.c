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
	unsigned long int i = 0;

	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	if (hashtable == NULL || !size)
		return (NULL);

	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	for (i = 0; i < size; ++i)
	{
		hashtable->array[i] = NULL;
	}
	return (hashtable);
}
