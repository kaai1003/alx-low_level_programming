#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverse and print string
 * @s: string to be reversed and printed
 *
 * Return: nothing to return
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}

	putchar('\n');
}
