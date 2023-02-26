#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 to 9
 * prints the numbers excluding 2 and 4
 * Return: the numbers since 0 to 9
 */

void print_most_numbers(void)

{
	int k = 0;

	for (; k <= 9; k++)
	{
		if (k == 2 || k == 4)
		{
			continue;
		}
		else
		{
			_putchar(k + '0');
		}
	}
	_putchar('\n');
}
