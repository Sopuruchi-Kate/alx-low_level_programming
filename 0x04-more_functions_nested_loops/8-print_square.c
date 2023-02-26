#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: the size of the square
 * Return: 0
 */

void print_square(int size)

{
	int k, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

