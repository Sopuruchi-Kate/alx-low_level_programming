#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - convert the params passed to the program to string
 * @ac: the argument count
 * @av: the argument vector
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, a = 0, b = 0, f = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		while (av[a][b])
		{
			ch++;
			b++;
		}

		b = 0;
		a++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			s[f] = av[a][b];
			f++;
			b++;
		}

		s[f] = '\n';

		b = 0;
		f++;
		a++;
	}

	f++;
	s[f] = '\0';
	return (s);
}
