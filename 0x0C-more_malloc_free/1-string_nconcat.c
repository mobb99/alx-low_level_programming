#include "main.h"

/**
 * string_nconcat - concatenates two strings s1 and nbytes of s2
 * @s1 : first string
 * @s2 : second string
 * @n : number of bytes to take from s2
 *
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, len;

	str = (char *)malloc((strlen(s1) + n + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		*(str + i) = *s1;
		i++;
		s1++;
	}
	len = i + n;
	while (*s2 != '\0' && i < n)
	{
		*(str + i) = *s2;
		i++;
		s2++;
	}
	*(str + i) = '\0';
	return (str);
}
