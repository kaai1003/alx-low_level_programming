#include "hash_tables.h"
/**
* hash_table_delete - delete hash table
* @ht: pointer to hash table
* Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
				continue;
			node = ht->array[i];
			while (node != NULL)
			{
				free(node->key);
				free(node->value);
				node = node->next;
			}
			free(ht->array[i]);
		}
	}
	free(ht);
}
