#include "main.h"
#include <stdio.h>

/**
 * leet - translate aeotl to 43071 case insensitive
 * @str : string to modify
 *
 * Return: pointer to str
 */

char *leet(char *str)
{
	int c = 0;
	char set1[] = "aetolAETOL";
	char set2[] = "4370143701";
	int i;

	while (str[c] != '\0')
	{
	for (i = 0; i < 10; i++)
	{
		if (str[c] == set1[i])
			str[c] = set2[i];
	}
	c++;
	}
	return (str);
}
