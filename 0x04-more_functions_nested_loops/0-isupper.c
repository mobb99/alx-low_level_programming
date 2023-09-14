#include "main.h"

/**
 * _isupper - check if a char is uppercase
 * @c: an int c with de dec value of the caracter
 *
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
