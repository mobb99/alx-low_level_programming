#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s : a string type char *
 *
 * Return: void
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	while (l > -1)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
