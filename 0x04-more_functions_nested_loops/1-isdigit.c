#include "main.h"

/**
 * _isdigit - check if a char is a digit
 * @c: an int c with de dec value of the caracter
 *
 * Return: 1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
