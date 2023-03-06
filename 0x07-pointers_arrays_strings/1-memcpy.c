#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: destination to copy from
 * @n: bytes
 * @dest: destination to copy to
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
