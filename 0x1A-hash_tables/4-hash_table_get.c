#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated
 * @ht: points to the hash table
 * @key: the key
 * Return: associated element or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	n = ht->array[index];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;

	return ((!n) ? NULL : n->value);
}
