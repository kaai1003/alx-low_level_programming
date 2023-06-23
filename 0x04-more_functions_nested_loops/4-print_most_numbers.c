#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 exept 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
		_putchar(n + 48);
		}
	}
	_putchar('\n');
}
