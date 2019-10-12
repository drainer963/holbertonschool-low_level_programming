#include "hash_tables.h"
/**
 * hash_table_print - print contents of hash table.
 * @ht: pointer to hashtable
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, t = 0;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (t == 0)
				t = 1;
			else
				printf(", ");
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
