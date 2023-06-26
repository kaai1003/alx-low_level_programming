#include "main.h"
/**
 * rev_string - reverse string
 * @s: string to be reversed
 *
 * Return: nothing to return
 */
void rev_string(char *s)
{
	char s_temp;
	int i, len, end;

	len = 0;
	end = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	end = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		s_temp = s[i];
		s[i] = s[end];
		s[end--] = s_temp;
	}
}
