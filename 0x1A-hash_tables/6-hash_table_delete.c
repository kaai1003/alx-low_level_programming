#include "hash_tables.h"
/**
* hash_table_delete - delete hash table
* @ht: pointer to hash table
* Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i = 0;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
			{
				free(ht->array[i]);
				continue;
			}
			while (ht->array[i] != NULL)
			{
				head = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = head;
			}
		}
		free(ht->array);
	}
	free(ht);
}
