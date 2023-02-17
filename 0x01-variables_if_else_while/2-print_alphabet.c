#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char kd;

	for (kd = 'a'; kd <= 'z'; kd++)
	{
		putchar(kd);
	}
	putchar('\n');
	return (0);
}
