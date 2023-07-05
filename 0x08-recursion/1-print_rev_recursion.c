#include "main.h"
/**
 * _puts_recursion - print string using recursion
 * @s: string to print
 *
 * Return: nothing to return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s + 1);
		_puts_recursion(*s);
	}
}
