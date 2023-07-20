#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function to print name
 * @name: name to print
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
	{
		f(name);
	}
}
