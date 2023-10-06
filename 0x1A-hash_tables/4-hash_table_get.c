#include "hash_tables.h"

/**
 * hash_table_get - Retrieve value associated with key
 * @ht: pointer to hash table
 * @key: key to get the value of
 * Return: NULL / value associated
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	node = ht->array[i];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
