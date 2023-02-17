#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all possible single digits
 * Return: 0
 */
int main(void)
{
	int k = 0;

	while (k < 10)
	{
		putchar(48 + c);
		if (k != 9)
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
