#include <stdio.h>
/**
 * main - print base 16
 *
 * description: print alphabets and digits
 * Return: 0 (true)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
