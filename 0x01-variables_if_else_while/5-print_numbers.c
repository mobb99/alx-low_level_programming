#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the digits 0..9
 *
 * Return: return 0 if success
 */

int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

return (0);
}
