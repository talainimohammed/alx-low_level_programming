#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *nd;

	while (j < ht->size)
	{
		while (ht->array[j] != NULL)
		{
			nd = ht->array[j]->next;
			free(ht->array[j]->key);
			free(ht->array[j]->value);
			free(ht->array[j]);
			ht->array[j] = nd;
		}
		j++;
	}
	free(ht->array);
	free(ht);
}
