#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht, *hc, *l;

	ht = hash_table_create(1024);

	hc = hash_table_create(1000);

	l = hash_table_create(11);

	printf("%p\n", (void *)ht);

	printf("%p\n", (void *)hc);

	ht = hc;

	printf("%p\n", (void *)ht);

	ht = l;

	printf("%p\n", (void *)l);

	return (EXIT_SUCCESS);
}
