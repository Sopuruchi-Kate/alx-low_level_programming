#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @k: the number to be checked
 * Return: 1 for upper letter or 0 for others
 */

int _isupper(int k)

{
	if (k >= 65 && k <= 90)
	{
		return (1);
	}
	return (0);
}
