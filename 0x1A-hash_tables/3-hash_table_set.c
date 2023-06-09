#include "hash_tables.h"

/**
 * create_and_add_node - malloc, set values, and insert node into hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * @idx: index to insert in at hash table
 * Return: 1 if success, 0 if fail
 */
int create_and_add_node(hash_table_t *hash_table, const char *key, const char *value,
			unsigned long int idx)
{
	hash_node_t *node = NULL;
	char *y;
	char *z;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	y = strdup(key);
	if (!y)
	{
		free(node);
		return (0);
	}

	z = strdup(value);
	if (!z)
	{
		free(y);
		free(node);
		return (0);
	}

	node->key = y;
	node->value = z;

	if ((hash_table->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = (hash_table->array)[idx];
	(hash_table->array)[idx] = node;

	return (1);
}

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = NULL;
	char *z;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[idx];
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node != NULL)
	{
		z = strdup(value);
		if (!z)
			return (0);
		if (node->value)
			free(node->value);
		node->value = z;
		return (1);
	}

	return (create_and_add_node(ht, key, value, idx));
}
