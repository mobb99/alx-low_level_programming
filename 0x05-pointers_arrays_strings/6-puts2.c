#include "main.h"

/**
 * puts2 - print every other char
 * @str : a string type char *
 *
 * Return: void
 */

void puts2(char *str)
{
	int l = 0;

	while (s[l] != '\0')
	{
		if (l % 2 == 0)
			_putchar(s[l]);
		l++;
	}
	_putchar('\n');
}
