#include "main.h"
/**
 * _isdigit - check caracter if digit or not
 * @c: caracter argument
 *
 * Return: 1 if c is digit 0 is not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _strlen - calculate the length of string
 * @s: string variable
 *
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	len = strlen(s);
	return (len);
}
/**
 * _puts - printf string to stdout
 * @str: string to print
 *
 * Return: nothing to return
 */
void _puts(char *s)
{
	puts(s);
}
/**
 * _strcpy - copy string
 * @dest: string destination
 * @src: string to copy
 *
 * Return: return string dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
