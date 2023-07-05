#include "main.h"
/**
 * _strlen_recursion - print string using recursion
 * @s: string to print
 *
 * Return: return len 
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s != '\0')
	{
		return(len + _strlen_recursion(s + 1));
	}
	else
	{
		return(0);
	}
}
