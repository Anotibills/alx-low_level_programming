#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to the hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int a;
	unsigned char comma_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			n = ht->array[a];
			while (!n)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (!n)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
