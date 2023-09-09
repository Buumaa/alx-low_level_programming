#include <stdio.h>

/**
 * main - print alphabet in lowercase and then in uppercase
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
