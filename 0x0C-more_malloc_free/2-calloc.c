#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array int
 * @size: array size
 *
 * Return: NULL on failure 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int i, s;

	s = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(s);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < s; i++)
		{
			arr[i] = 0;
		}
	}
	return (arr);
}
