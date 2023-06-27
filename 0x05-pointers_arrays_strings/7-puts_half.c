#include "main.h"
#include <string.h>
/**
 * puts_half - prints second half of string
 * @str: string variable
 *
 * Return: nothing to return
 */
void puts_half(char *str)
{
	int len;
	int i;
	int n;

	len = strlen(str);
	n = (len - 1) / 2;
	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
