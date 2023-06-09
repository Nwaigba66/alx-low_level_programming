#include "hash_tables.h"

/**
 * hash_table_delete - free and delete hash table
 * @hash_table: hash table
 */
void hash_table_delete(hash_table_t *hash_table)
{
	unsigned long int idx = 0;
	hash_node_t *node, *next;

	if (!hash_table)
		return;

	if (!(hash_table->array))
	{
		free(hash_table);
		return;
	}

	while (idx < hash_table->size)
	{
		node = (hash_table->array)[idx];
		while (node)
		{
			next = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next;
		}
		idx++;
	}
	free(hash_table->array);
	free(hash_table);
}
