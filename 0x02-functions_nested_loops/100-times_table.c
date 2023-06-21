#include "main.h"
/**
 * print_times_table - print n times table
 * @n: n times tables
 *
 * return: void
 */
void print_times_table(int n)
{
	int i = 0, j, k;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		while (i <= n)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
				{
					_putchar(k + 48);
				} else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + 48);
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + 48);
					_putchar(((k % 100) / 10) + 48);
					_putchar(((k % 100) % 10) + 48);
				}
			}
			_putchar('\n');
			i++;
		}
	}
}
