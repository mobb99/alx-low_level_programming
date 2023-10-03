#include "main.h"

/**
 * main - prints the number of argument passed to it
 * @argc : number of arguments passed to the program
 * @argv : an array made of the arguments
 *
 * Return: always 0 for success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
