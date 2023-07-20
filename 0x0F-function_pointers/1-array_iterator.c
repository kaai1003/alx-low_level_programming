#include "function_pointers.h"
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

	if (action != 0 && size >= 1 && array != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
