#include "main.h"

/**
 * _isalpha - Checks for a characteter in alphabet
 * @c: the character to be checked.
 *
 * Return: 1 if character is letter, lower or upper, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
