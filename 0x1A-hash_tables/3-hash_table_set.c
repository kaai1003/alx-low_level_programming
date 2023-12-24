#include "hash_tables.h"
/**
* hash_table_set - add element to hash table
* @ht: pointer to hash table
* @key: pointer to key string
* @value: pointer to value of the key
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node(key, value);
		if (ht->array[index] == NULL)
			return (0);
		return (1);
	}
	else
	{
		hash_node_t *node = ht->array[index];

		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
				if (strcmp(node->value, value) == 0)
					return (1);
				node->value = malloc(strlen(value) + 1);
				strcpy(node->value, value);
				return (1);
			}
			node = node->next;
		}
		node = ht->array[index];
		ht->array[index] = insert(node, key, value);
		return (1);
	}
}
/**
* new_node - create new node function
* @key: pointer to key string
* @value: pointer to string value
* Return: pointer to node
*/
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = ((char *) key);
	node->value = ((char *) value);
	node->next = NULL;
	return (node);
}
/**
* insert - insert new node to list
* @list: pointer to linked list
* @key: pointer to key string
* @value: pointer to string value
* Return: pointer to node
*/
hash_node_t *insert(hash_node_t *list, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t *));

	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = list;
	return (node);
}
