#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints times table
 * @n: times table to use
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int a, b, product;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			product = a * b;

			if (b == 0)
				putchar('0' + product);
			else
			{
				putchar(' ');
				if (product < 10)
				{
					putchar(' ');
					putchar(' ');
				}
				else if (product < 100)
					putchar(' ');

				putchar('0' + product / 100);
				putchar('0' + (product / 10) % 10);
				putchar('0' + product % 10);
			}

			if (b < n)
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');
	}
}
