#include <stdlib.h>
#include <stdio.h>

/**
 * main - print comb
 *
 * Return: return 0 if success
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
	putchar((char) i);
	if (i < 57)
	{
		putchar(',');
		putchar(' ');
	}
	i++;
	}
	putchar('\n');

return (0);
}
