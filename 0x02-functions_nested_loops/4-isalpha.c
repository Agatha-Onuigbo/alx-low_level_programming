#include "main.h"
#include <stdio.h>
/**
 * _isalpha - this function checks if its parameter is lowercase or uppercase
 * @i: the parameter in form of an int
 * Return: 1 if lowercase and 0 if something else
 */

int _isalpha(int i)
{
	if ((i  >= 'a' && i <= 'z') || (i  >= 'A' && i <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
