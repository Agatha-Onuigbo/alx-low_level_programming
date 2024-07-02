#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	
	/* Find the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}
	/* Calculate the starting point for printing */
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2 + 1;
	}
	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}

