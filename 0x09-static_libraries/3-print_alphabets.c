#include <stdio.h>
/**
 * main - print alphabet
 *
 * description: print alphabets in lower and upper case
 * Return: 0 (true)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
	putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
