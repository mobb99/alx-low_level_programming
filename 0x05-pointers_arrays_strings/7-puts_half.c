#include "main.h"

/**
 * puts_half - print the second half  a string
 * @str : a string type char *
 *
 * Return: void
 */

void puts_half(char *str)
{
	int l = 0;
	int n;

	while (str[l] != '\0')
		l++;
	if (l % 2 == 0)
		n = l / 2;
	else
		n = l - (l - 1) / 2;
	while (n < l)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
