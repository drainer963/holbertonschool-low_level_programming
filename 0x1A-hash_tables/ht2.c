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
int main()
{
	printf("%d\n", hash("fuck you"));
	return (0);
}
