#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: variable size to be allocated
 *
 * Return: 98 on function failure / pointer to allocated memory on success
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit (98);
	}
	else
	{
		return (mem);
	}
}
