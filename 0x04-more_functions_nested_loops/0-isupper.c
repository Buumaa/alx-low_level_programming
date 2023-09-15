#include "main.h"
/**
 * _isuppercase - checks for uppercase characters
 * @c: the function parameter
 * Return: 1 if it is upper case
 */

int _isupper(int c);
{
	if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
