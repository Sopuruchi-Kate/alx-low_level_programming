#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: 10 times the numbers from 0 to 14
 */

void more_numbers(void)

{
	int k, s;

	for (k = 0; k < 10; k++)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s > 9)
			{
				_putchar((s / 10) + '0');
			}
			_putchar((s % 10) + '0');
		}
		_putchar('\n');
	}
}
