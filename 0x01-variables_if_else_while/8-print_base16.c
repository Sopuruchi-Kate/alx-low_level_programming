#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num;
	char jc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (jc = 'a'; jc <= 'f'; jc++)
		putchar(jc);

	putchar('\n');

	return (0);
}
