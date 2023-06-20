#include "main.h"
/**
 * _islower - check lowercase caracter .
 * @c: the caracter to be checked
 *
 * Return: 1 if c lowercase 0 otherwise
 */
int _islower(int c)
{
	if ( islower(c))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
