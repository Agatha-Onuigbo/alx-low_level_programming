#include <stdio.h>
#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer  to the destination
 * @src: pointer to the  source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, a = 0;

	for (i = 0; dest[i] != '\0'; i++)

		while (src[a] != '\0')
		{
			dest[i] = src[a];
			i++;
			a++;
		}

	dest[i] = '\0';

	return (dest);
}
