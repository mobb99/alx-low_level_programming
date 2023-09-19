#include "main.h"

/**
 * _puts - print a string followed by a newline
 * @str : a string type char *
 *
 * Return: void nothing
 */

void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
