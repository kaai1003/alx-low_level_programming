#include "hash_tables.h"
/**
* shash_table_create - function that create a hash table
* @size: size of the table type int
*
* Return: NULL or pointer to hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i = 0;

	shash_table_t *new_ht = malloc(sizeof(shash_table_t));

	if (new_ht == NULL || size == 0)
		return (NULL);
	new_ht->size = size;
	new_ht->array = malloc(sizeof(shash_node_t *) * size);
	if (new_ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;
	new_ht->shead = NULL;
	new_ht->stail = NULL;
	return (new_ht);
}
#include "hash_tables.h"
/**
* shash_table_set - add element to hash table
* @ht: pointer to hash table
* @key: pointer to key string
* @value: pointer to value of the key
* Return: 1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	shash_node_t *head;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node(key, value);
		return (sorted_list(ht, key, value));
	}
	else
	{
		head = ht->array[index];
		while (head != NULL)
		{
			if (strcmp(head->key, key) == 0)
			{
				if (strcmp(head->value, value) == 0)
					return (sorted_list(ht, key, value));
				free(head->value);
				head->value = malloc(strlen(value) + 1);
				strcpy(head->value, value);
				return (sorted_list(ht, key, value));
			}
			head = head->next;
		}
		head = ht->array[index];
		ht->array[index] = insert(head, key, value);
		return (sorted_list(ht, key, value));
	}
}
/**
* shash_table_get - retrieve value associated to key
* @ht: pointer to hash table
* @key: pointer to key string
* Return: pointer to value
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (ht == NULL)
		return (NULL);
	node = ht->shead;
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->snext;
	}
	return (NULL);
}
/**
* new_node - create new node function
* @key: pointer to key string
* @value: pointer to string value
* Return: pointer to node
*/
shash_node_t *new_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

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
shash_node_t *insert(shash_node_t *head, const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	node->key = malloc(strlen(key) + 1);
	strcpy(node->key, key);
	node->value = malloc(strlen(value) + 1);
	strcpy(node->value, value);
	node->next = head;
	return (node);
}

/**
 * sorted_list - insert node in sorted linked list
 * @ht: pointer to hash table
 * @key: pointer to key
 * @value: pointer to value
 * Return: 1 in sucess 0 otherwise
 */
int sorted_list(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *this_node, *shead;
	bool first = true;

	this_node = prepare_snode(key, value);
	if (ht->shead == NULL)
	{
		ht->shead = this_node;
		ht->stail = this_node;
		return (1);
	}
	else
	{
		shead = ht->shead;
		while (shead->snext != NULL)
		{
			if (strcmp(shead->key, this_node->key) == 0)
			{
				shead = update_snode(shead, this_node);
				free_node(this_node);
				return (1);
			}
			else if (strcmp(shead->key, this_node->key) > 0)
			{
				insert_snode(shead, this_node);
				if (first == true)
					ht->shead = this_node;
				return (1);
			}
			shead = shead->snext;
			first = false;
		}
		return (last_snode(ht, this_node));
	}
	return (0);
}
/**
 * prepare_snode - prepare node to insert in sorted list
 * @key: pointer to node key
 * @value: pointer to node value
 * Return: node
*/
shash_node_t *prepare_snode(const char *key, const char *value)
{
	shash_node_t *this_node = malloc(sizeof(shash_node_t));

	this_node->key = malloc(strlen(key) + 1);
	strcpy(this_node->key, key);
	this_node->value = malloc(strlen(value) + 1);
	strcpy(this_node->value, value);
	this_node->snext = NULL;
	this_node->sprev = NULL;
	return (this_node);
}
/**
 * update_snode - update exist node
 * @shead: pointer to current node
 * @node: pointer to new node value
 * Return: updated node
*/
shash_node_t *update_snode(shash_node_t *shead, shash_node_t *node)
{
	free(shead->value);
	shead->value = malloc(strlen(node->value) + 1);
	strcpy(shead->value, node->value);
	return (shead);
}
/**
 * insert_snode - sort insert node
 * @shead: current node
 * @node: new node
 * Return: new node
*/
void insert_snode(shash_node_t *shead, shash_node_t *node)
{
	if (shead->sprev != NULL)
	{
		node->sprev = shead->sprev;
		shead->sprev->snext = node;
		shead->sprev = node;
		node->snext = shead;
	}
	else
	{
		node->snext = shead;
		shead->sprev = node;
	}
}
/**
 * last_snode - sort insert node
 * @ht: pointer to hash table
 * @node: new node
 * Return: 1 on sucess or 0
*/
int last_snode(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *last_node = ht->stail;

	if (strcmp(last_node->key, node->key) == 0)
	{
		last_node = update_snode(last_node, node);
		ht->stail = last_node;
		free_node(node);
		return (1);
	}
	else if (strcmp(last_node->key, node->key) > 0)
	{
		if (last_node->sprev == NULL)
		{
			last_node->sprev = node;
			node->snext = last_node;
			ht->shead = node;
		}
		else
		{
			last_node->sprev->snext = node;
			node->sprev = last_node->sprev;
			last_node->sprev = node;
			node->snext = last_node;
		}
		return (1);
	}
	node->sprev = last_node;
	last_node->snext = node;
	node->snext = NULL;
	ht->stail = node;
	return (1);
}
/**
 * free_node - free node memory
 * @node: pointer to node
 * Return: nothing
*/
void free_node(shash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
* shash_table_print - print hash table function
* @ht: pointer to hash table
* Return: nothing to return
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht != NULL)
	{
		node = ht->shead;
		printf("{");
		while (node != NULL)
		{
			if (node->snext == NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				break;
			}
			else
			{
				printf("'%s': '%s', ", node->key, node->value);
			}
			node = node->snext;
		}
		printf("}\n");
	}
}
/**
* shash_table_print - print hash table function
* @ht: pointer to hash table
* Return: nothing to return
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht != NULL)
	{
		node = ht->stail;
		printf("{");
		while (node != NULL)
		{
			if (node->sprev == NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				break;
			}
			else
			{
				printf("'%s': '%s', ", node->key, node->value);
			}
			node = node->sprev;
		}
		printf("}\n");
	}
}
/**
* shash_table_delete - delete hash table
* @ht: pointer to hash table
* Return: nothing
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head;
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
		free(head);
		while (ht->shead != NULL)
		{
			head = ht->shead->snext;
			free(ht->shead->key);
			free(ht->shead->value);
			free(ht->shead);
			ht->shead = head;
		}
	}
	free(ht);
}
