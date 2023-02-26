#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @k: the number to be checked
 * Return: 1 for a character that will be a digit or 0 for others
 */

int _isdigit(int k)

{
	if (k >= 48 && k <= 57)
	{
		return (1);
	}
	return (0);
}
