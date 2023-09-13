#include "main.h"

/**
 * times_table - prints times tables
 *
 * Return: void
 */

void times_table(void)
{
	int f;
	int s;

	for (f = 0; f < 10; f++)
	{
		for (s = 0; s < 10; s++)
		{
		if (s != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (f * s < 10)
		{
			_putchar(' ');
			_putchar(f * s + '0');
		}
		else
		_putchar(f * s + '0');
		}
		_putchar('\n');
	}
}
