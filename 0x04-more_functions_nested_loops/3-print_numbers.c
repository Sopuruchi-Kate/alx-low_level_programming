#include "main.h"

/**
 * print_numbers - print the numbers since 0 up to 9
 * Return: the numbers since 0 up to 9
 */

void print_numbers(void)

{

	int k;

	for (k = 0; k <= 9; k++)
	{
		_putchar(k + '0');
	}
	_putchar('\n');
}
