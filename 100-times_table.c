#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the times table up to n
 * @n: The times table to print (0 to 15).
 *
 * Return: No return value (void).
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int a, b, result;

	for (a = 0; a <= n, a++)
	{
		for (b = 0, b <= n, b++)
		{
			result = a * b;
			if (b == 0)
			{
				_putchar('o' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result < 100)
				{
					_putchar(' ');
				}

				_putchar('0' + result / 100);
				_putchar('0' + result / 10) % 10);
				_putchar('0' + result % 10);
			}
		}
		_putchar('\n');
	}
}
