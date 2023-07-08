#include "main.h"
/**
 * print_alphabet_x10 - print lower case alphabets 10x
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet;

	while (i < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		i++;
	}
}
