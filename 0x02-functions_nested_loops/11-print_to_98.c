#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints numbers from n to 98.
 * @n: The number to start from.
 *
 * Return: No return value (void).
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 97)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 99)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
