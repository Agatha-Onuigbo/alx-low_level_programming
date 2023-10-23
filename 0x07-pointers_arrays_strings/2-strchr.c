#include "main.h"

/**
 * _strchr - finds a value within a string
 * @s: this is the string to loop over
 * @c: this is the value to find
 * Return: address of the first match or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
