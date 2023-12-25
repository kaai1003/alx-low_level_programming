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
	hash_node_t *head;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node(key, value);
		return (1);
	}
	else
	{
		head = ht->array[index];
		while (head != NULL)
		{
			if (strcmp(head->key, key) == 0)
			{
				if (strcmp(head->value, value) == 0)
					return (1);
				free(head->value);
				head->value = malloc(strlen(value) + 1);
				strcpy(head->value, value);
				return (1);
			}
			head = head->next;
		}
		head = ht->array[index];
		ht->array[index] = insert(head, key, value);
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

	node->key = malloc(strlen(key) + 1);
	strcpy(node->key, key);
	node->value = malloc(strlen(value) + 1);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}
/**
* insert - insert new node to list
* @head: pointer to linked list
* @key: pointer to key string
* @value: pointer to string value
* Return: pointer to node
*/
hash_node_t *insert(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	node->key = malloc(strlen(key) + 1);
	strcpy(node->key, key);
	node->value = malloc(strlen(value) + 1);
	strcpy(node->value, value);
	node->next = head;
	return (node);
}
