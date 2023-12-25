#include "hash_tables.h"
/**
* hash_table_print - print hash table function
* @ht: pointer to hash table
* Return: nothing to return
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	bool p = false;
	hash_node_t *node;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
			{
				continue;
			}
			else if (ht->array[i] != NULL && p == true)
			{
				printf(", ");
			}
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (node->next != NULL)
					printf(", ");
				p = true;
				node = node->next;
			}
		}
		printf("}\n");
	}
}
