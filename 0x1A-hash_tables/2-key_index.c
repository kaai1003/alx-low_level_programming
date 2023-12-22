#include "hash_tables.h"
/**
 * key_index - get index of key function
 * @key: pointer to string key
 * @size: size of the table
 * Return: index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash_key;

	hash_key = hash_djb2(key);
	index = hash_key % size;
	return (index);
}