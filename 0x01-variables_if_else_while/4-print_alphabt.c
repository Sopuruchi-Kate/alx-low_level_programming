#include <stdio.h>

/**
 * main - prints all alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char sp;

	for (sp = 'a'; sp <= 'z'; sp++)
	{
		if (sp != 'q' && sp != 'e')
			putchar(sp);
	}
	putchar('\n');

	return (0);
}
