#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode a string using rot13
 * @str : string to modify
 *
 * Return: pointer to str
 */

char *rot13(char *str)
{
	int c = 0;
	char set1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char set2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (str[c] != '\0')
	{
	for (i = 0; i < 52; i++)
	{
		if (str[c] == set1[i])
		{
		str[c] = set2[i];
		break;
		}
	}
	c++;
	}
	return (str);
}
