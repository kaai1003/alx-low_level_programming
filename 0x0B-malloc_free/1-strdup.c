#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - allocate memory and copy string on it
 * @str: string variable
 *
 * Return: NULL if str = NULL or function failed , or string on success
 */
char *_strdup(char *str)
{
	char *str_copy;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}
		len++;
		str_copy = (char *) malloc(len * sizeof(char));
		if (str_copy == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < len; i++)
			{
				str_copy[i] = str[i];
			}
			str_copy[i] = '\0';
		}
	}
	return (str_copy);
}
