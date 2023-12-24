#include "hash_tables.h"
/**
* hash_table_get - retrieve value associated to key
* @ht: pointer to hash table
* @key: pointer to key string
* Return: pointer to value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	index = key_index((unsigned char *) key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
