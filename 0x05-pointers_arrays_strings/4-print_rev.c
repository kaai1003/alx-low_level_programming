#include "main.h"
#include <string.h>
/**
 * print_rev - reverse and print string
 * @s: string to be reversed and printed
 *
 * Return: nothing to return
 */
void print_rev(char *s)
{
	s = strrev(s);
	puts(s);
}
