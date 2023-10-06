#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: pointer to hash table.
 * @key: key to add
 * @value: value associated with key
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *cur;
	char *val_copy;
	unsigned long int i, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (x = i; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = val_copy;
			return (1);
		}
	}

	cur = malloc(sizeof(hash_node_t));
	if (cur == NULL)
	{
		free(val_copy);
		return (0);
	}
	cur->key = strdup(key);
	if (cur->key == NULL)
	{
		free(cur);
		return (0);
	}
	cur->value = val_copy;
	cur->next = ht->array[i];
	ht->array[i] = cur;

	return (1);
}
