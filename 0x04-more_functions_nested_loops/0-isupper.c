#include "main.h"
#include <ctype.h>
/**
 * _islower - check upper case  caracter .
 * @c: the caracter to be checked
 *
 * Return: 1 if c uppercase 0 otherwise
 */
int _islower(int c)
{
        if (isupper(c))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
