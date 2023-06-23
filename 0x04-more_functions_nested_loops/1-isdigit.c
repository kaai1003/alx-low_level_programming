#include "main.h"

/**
 * _isdigit - check caracter if digit or not
 * @c: caracter argument
 *
 * Return: 1 if c is digit 0 is not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
