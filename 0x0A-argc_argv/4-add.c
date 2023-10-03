#include "main.h"

/**
 * main - prints the sum off all positive integers passed to it
 * @argc : number of arguments passed to the program
 * @argv : an array made of the arguments
 *
 * Return: 1 if no  args 0 success
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 0;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
	arg = argv[i];
	while (*arg != '\0')
	{
		if (!isdigit(*arg))
		{
			printf("Error\n");
			return (1);
		}
		arg++;
	}
	res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}

