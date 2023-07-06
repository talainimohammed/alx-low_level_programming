#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs in hash table array order.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j, c = 0;
	hash_node_t *nd;

	if (ht == NULL)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			nd = ht->array[j];
			while (nd != NULL)
			{
				if (c > 0)
					printf(", ");
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				c++;
			}
		}
	}
	printf("}\n");
}
