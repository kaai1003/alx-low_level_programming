#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: array min range
 * @max: array max range
 *
 * Return: array of int or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, s = 0;
	int mi, ma;

	if (min < max)
	{
		return (NULL);
	}
	mi = min;
	ma = max + 1;
	while (mi < ma)
	{
		s++;
		mi++;
	}
	arr = (int *) malloc(s * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; min < ma; i++)
		{
			arr[i] = min;
			min++;
		}
	}
	return (arr);
}
