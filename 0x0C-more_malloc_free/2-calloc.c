#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory for array
 * @nmemb: array elements
 * @size: array size
 *
 * Return: array or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int i, s = 0;

	s = nmemb * size;
	if (s == 0)
	{
		return (NULL);
	}
	arr = (char *) malloc(s * sizeof(char));
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
