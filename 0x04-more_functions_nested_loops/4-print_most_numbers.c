#include "main.h"

/**
 * print_most_numbers - print nym except 2 and 4
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if ((c == 'Z' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
