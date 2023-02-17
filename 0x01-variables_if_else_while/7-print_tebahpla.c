#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char dc;

	for (dc = 'z'; dc >= 'a'; dc--)
		putchar(dc);

	putchar('\n');

	return (0);
}
