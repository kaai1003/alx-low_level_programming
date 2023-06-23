#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
			{
			_putchar('1');
			_putchar((n % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
