#include "main.h"

/**
 * _islower - check if a char is lowercase
 * @c: an int c with de dec value of the caracter
 *
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
	if (97 <= c <= 122)
		return 1;
	return 0;
}