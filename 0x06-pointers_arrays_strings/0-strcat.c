#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: variable concatenates destination
 * @src: string to concatenate
 *
 * Return: dest variable
 */
char *_strcat(char *dest, char *src)
{
	strcat( dest, src);
	return (dest);
}
