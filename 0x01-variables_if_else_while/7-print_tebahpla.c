#include <stdio.h>
/**
 * main - print alphabets
 *
 * description: print alphabets in reverse
 * Return: 0 (true)
 */
int main(void)
{
	char c;
	c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
