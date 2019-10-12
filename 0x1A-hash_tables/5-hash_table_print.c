#include "hash_tables.h"
/**
 * hash_table_print - print contents of hash table.
 * @ht: pointer to hashtable
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		node = ht->array[i];

		if (node == NULL)
		{
			continue;
		}
		for (;;)
		{
			printf("'%s': '%s'", node->key, node->value);

			if (node->next == NULL)
			{
				break;
			}
			node = node->next;
		}
	}
	printf("}\n");
}
