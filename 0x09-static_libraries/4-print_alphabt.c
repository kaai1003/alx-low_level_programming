#include <stdio.h>
/**
 * main - print alphabet
 *
 * description: print alphabets in lower except 'e' and 'q'
 * Return: 0 (true)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
