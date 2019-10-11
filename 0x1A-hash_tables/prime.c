#include <math.h>
#include "hash_tables.h"

int is_prime(const int x) {
	if (x < 2) { return -1; }
	if (x < 4) { return 1; }
	if ((x % 2) == 0) { return 0; }
	for (int i = 3; i <= floor(sqrt((double) x)); i += 2) {
		if ((x % i) == 0) {
			return 0;
		}
	}
	return 1;
}

int next_prime(int x) {
	while (is_prime(x) != 1) {
		x++;
	}
	return x;
}

static ht_hash_table* ht_new_sized(const int base_size) {
	ht_hash_table* ht = xmalloc(sizeof(ht_hash_table));
	ht->base_size = base_size;

	ht->size = next_prime(ht->base_size);

	ht->count = 0;
	ht->items = xcalloc((size_t)ht->size, sizeof(ht_item*));
	return ht;
}

ht_hash_table* ht_new() {
	return ht_new_sized(HT_INITIAL_BASE_SIZE);
}

