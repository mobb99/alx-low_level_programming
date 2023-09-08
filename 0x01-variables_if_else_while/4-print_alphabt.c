#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Return: return 0 if success
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
		a++;
	}
	putchar('\n');

return (0);
}
