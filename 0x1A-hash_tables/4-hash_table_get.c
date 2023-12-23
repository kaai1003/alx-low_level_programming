#include "hash_tables.h"
/**
* hash_table_get - retrieve value associated to key
* @ht: pointer to hash table
* @key: pointer to key string
* Return: pointer to value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	hash_node_t *node;

	index = key_index((unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
