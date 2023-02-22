#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: 0
 */

void times_table(void)

{
	int d, k, j, e, c;

	for (d = 0; d <= 9; d++)
	{
	for (k = 0; k <= 9; k++)
	{
	j = d * k;
	if (j > 9)
	{
	e = j % 10;
	c = (j - e) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(c + '0');
	_putchar(e + '0');
	}
	else
	{
	if (k != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(j + '0');
	}
	}
	_putchar('\n');
	}
}
