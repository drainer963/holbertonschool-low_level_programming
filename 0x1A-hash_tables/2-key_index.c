#include "hash_tables.h"
/**
 * key_index - return index of given key
 * @key: pointer to key
 * @size: size of table
 * Return: hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hash = 0, i = 0;

	while (key && key[i])
	{
		hash = (hash + key[i]) % size;
		++i;
	}
	return (hash);
}
