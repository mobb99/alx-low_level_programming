#include "main.h"

/**
 * main - prints minimum  number of coins in change
 * @argc : number of arguments passed to the program
 * @argv : an array made of the arguments
 *
 * Return: 0 success or 1 if error
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins [5] = {25, 10, 5, 2, 1};
	int i = 0;
	int res = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= coins[i])
		{
		cents -= coins[i];
		res++;
		}
		else
		{
		i++;
		}
	}
	printf("%d\n", res);
	return (0);
}
