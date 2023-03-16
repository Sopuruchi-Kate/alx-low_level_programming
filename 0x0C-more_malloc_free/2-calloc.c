#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, d = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	d = nmemb * size;
	p = malloc(d);

	if (p == NULL)
		return (NULL);

	while (a < d)
	{
		p[a] = 0;
		a++;
	}

	return (p);
}
