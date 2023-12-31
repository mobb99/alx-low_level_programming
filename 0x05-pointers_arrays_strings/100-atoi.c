#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * mypow - calculate x**y
 * @x : the base
 * @y : the exponent
 *
 * Return: the result
 */

int mypow(int x, int y)
{
	int res = 1;

	if (y == 0)
		return (1);
	while (y--)
	{
	res *= x;
	}
	return (res);
}

/**
 * _atoi - convert string to integer
 * @s : the string char *
 *
 * Return: the result as int
 */

int _atoi(char *s)
{
	int c = 0;
	int sign = 1;
	int res;
	int lastdigit = -1;
	int base = 0;


	while (s[c] != '\0')
	{
		if (s[c] == '-')
			sign *= -1;
		if (s[c] >= 48 && s[c] < 58)
		{
			lastdigit = c;
		}
		else
		{
			if (lastdigit != -1)
			break;
		}

		c++;
	}
	if (lastdigit == -1)
	{
		return (0);
	}
	else
	{
		while (s[lastdigit] >= 48 && s[lastdigit] < 58)
		{
		res += (s[lastdigit] - '0') * mypow(10, base);
		lastdigit--;
		base++;
		if (lastdigit < 0)
			break;
		}
		res = sign * res;
		return (res);
	}
}
