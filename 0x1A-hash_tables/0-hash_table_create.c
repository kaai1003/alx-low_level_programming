#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table
 * size: size of the table type int
 *
 * Return: NULL or pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_ht = malloc(sizeof(hash_table_t));
    if (new_ht == NULL)
        return NULL;
    new_ht->size = size;
    new_ht->array = NULL;
    return new_ht;
}