#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies n bytes from an address
 * @dest: pointer to the destination for storing the bytes
 * @src: pointer to the source destination of the source
 * @n: the number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
