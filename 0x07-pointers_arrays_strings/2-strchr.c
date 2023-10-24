#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to search through.
 * @c: the character to be searched for.
 *
 * Return: a pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return (s);
}
