#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute function as parameter
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
