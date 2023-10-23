#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of the prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: the length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int FLAG;

	while (*s)
	{
		FLAG = 0;
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				FLAG = 1;
				break;
																					            }
											            }
							        if (FLAG == 0)
									            return count;
								        s++;
									    }

		        return count;
}
