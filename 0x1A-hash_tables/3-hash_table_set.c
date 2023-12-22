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

	hash_node_t *list;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	list = ht->array[index];
	if (list == NULL)
	{
		list = new_node(key, value);
		if (list == NULL)
			return (0);
		ht->array[index] = list;
		return (1);
	}
	else
	{
		hash_node_t *node;

		while (list != NULL)
		{
			if (strcmp(list->key, key) == 0)
			{
				if (strcmp(list->value, value) == 0)
					return (1);
				free(list->value);
				strcpy(list->value, value);
				return (1);
			}
			list = list->next;
		}
		list = ht->array[index];
		node = insert(list, key, value);

		if (node == NULL)
			return (0);
		ht->array[index] = node;
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
