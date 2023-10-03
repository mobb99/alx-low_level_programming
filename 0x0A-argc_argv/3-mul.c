#include "main.h"

/**
 * main - prints the result of multiplication of two integers
 * @argc : number of arguments passed to the program
 * @argv : an array made of the arguments
 *
 * Return: 1 if no  args 0 success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
