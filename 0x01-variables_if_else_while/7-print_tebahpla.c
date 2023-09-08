#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the alphabet in reverse
 *
 * Return: return 0 if success
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

return (0);
}
