#include "main.h"
/**
 * times_table - print minutes of the day.
 *
 * Return: void
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
		{
			for (y = 0; y < 10; y++)
			{
				z = y * x;
				if (y == 0)
				{
					_putchar(z + '0');
				}


				if (z < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				} else if (z >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

}
