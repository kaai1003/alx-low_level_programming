#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory
 * @old_size: allocated space
 * @new_size: new size
 *
 * Return: memory pointer : success NULL : failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	int i;

	if (ptr == NULL)
	{
		new_ptr = (char *) malloc(new_size * sizeof(char));
		return (new_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = (char *) malloc(new_size * sizeof(char));
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	else if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = ptr[i];
		}
	}
	free(ptr);
	return (new_ptr);
}
