#include "hash_tables.h"
/**
 * key_index - return index of given key
 * @key: pointer to key
 * @size: size of table
 * Return: hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return(hash_djb2(key) % size);
}
