#include <stdio.h>
/**
 * main - print single digits
 *
 * description: print sible digit from 0 to 9
 * Return: 0 (true)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
