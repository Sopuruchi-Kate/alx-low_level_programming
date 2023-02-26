#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: the size of the triangle
 * Return: 0
 */

void print_triangle(int size)

{
	int k, s, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (s = size - k; s > 1; s--)
			{
				_putchar(32);
			}
			for (i = 0; i <= k; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
