#include "hash_tables.h"
/**
* hash_table_create - function that create a hash table
* @size: size of the table type int
*
* Return: NULL or pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;
	return (new_ht);
}
