#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n:  number of times the character \ should be printed
 * Return: 0
 */

void print_diagonal(int n)

{

	int k, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			for (s = 0; s < k; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
