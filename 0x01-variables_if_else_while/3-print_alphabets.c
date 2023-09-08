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
		putchar(a);
		a++;
	}
	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

return (0);
}
