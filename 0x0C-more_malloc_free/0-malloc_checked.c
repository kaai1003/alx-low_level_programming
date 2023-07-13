#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 *
 * Return: 98 on failure or pointer on sucess
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	else
	{
		return (mem);
	}
}
