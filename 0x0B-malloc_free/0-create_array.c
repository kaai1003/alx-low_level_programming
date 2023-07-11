#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array char
 * @size: size of the array
 * @c: caractere variable input
 *
 * return: NULL if failed , array char otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *arr_char;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr_char = (char *) malloc(size * sizeof(char));
		if (arr_char == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				arr_char[i] = c;
			}
		}
	}
	return (arr_char);
}
