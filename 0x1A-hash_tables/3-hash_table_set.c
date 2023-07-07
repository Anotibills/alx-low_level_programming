#include "hash_tables.h"
/**
 * hash_table_set - function that add an element to the hash table
 * @ht: pointer to the hash table
 * @key: The key
 * @value: value associated with key
 * Return: 1 if success, or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *value_copy;
	unsigned long int index, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = value_copy;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (!n)
	{
		free(value_copy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = value_copy;
	n->next = ht->array[index];
	ht->array[index] = n;

	return (1);
}
