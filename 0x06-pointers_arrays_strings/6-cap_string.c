#include "main.h"
#include <stdio.h>

/**
 * is_sep - check if a char is a valid separator
 * @l : a char
 *
 * Return: 1 if true 0 else
 */

int is_sep(char l)
{
char seps[] = "\n, ;	.!?\"(){}";
int i = 0;

	for (; seps[i] != '\0'; i++)
	{
		if (l == seps[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalize every word that follows a separator
 * @str : string to modify
 *
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int c = 0;
	int wasep = 1;

	while (str[c] != '\0')
	{
		if (str[c] <= 'z' && str[c] >= 'a' && wasep == 1)
			str[c] = str[c] - 'a' + 'A';
		wasep = is_sep(str[c]);
		c++;
	}
	return (str);
}
