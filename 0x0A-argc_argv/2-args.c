#include "main.h"

/**
 * main - prints all the arguments
 * @argc : number of arguments passed to the program
 * @argv : an array made of the arguments
 *
 * Return: always 0 for success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
