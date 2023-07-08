#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other caracter of string
 * @str: string variable
 *
 * Return: nothing to return
 */
void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
