#include "main.h"
/**
 * _print_rev_recursion - print string using recursion
 * @s: string to print
 *
 * Return: nothing to return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s + 1);
		_print_rev_recursion(*s);
	}
}
