#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* main - check the code
*
* Return: Always EXIT_SUCCESS.
*/
int main(void)
{
	hash_table_t *ht;
	/*char *key;*/

	/*char *value;*/

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_print(ht);
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
