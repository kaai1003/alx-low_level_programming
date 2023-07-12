#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of program to string
 * @ac: number of args
 * @av: array of args
 *
 * Return: NULL on function failure / args string on success
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int c = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			len = len + strlen(av[i]);
		}
		str = (char *) malloc((len + ac) * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < ac; i++)
			{
				for (j = 0; av[j] != '\0'; j++)
				{
					str[c] = av[i][j];
					c++;
				}
				str[c] = '\n';
				c++;
			}
			str[c] = '\n';
		}
	}
	return (str);
}
