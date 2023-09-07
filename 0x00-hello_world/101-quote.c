#include <stdio.h>
#include <unistd.h>

/**
 * main - print a message to stderr
 *
 * Return: return 1 to signal an error
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, msg, 60);
	return (1);
}
