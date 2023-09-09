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
	char i = 48;

	while (i < 58)
	{
	putchar(i);
	i++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

return (0);
}
