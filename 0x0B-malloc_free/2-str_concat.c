#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL if function fail otherwise concatenates string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1, len2, size;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	size = len1 + len2 + 1;
	concat_str = (char *) malloc(size * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			concat_str[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			concat_str[i] = s2[j];
			i++;
		}
		concat_str[i] = '\0';
	}
	return (concat_str);
}
