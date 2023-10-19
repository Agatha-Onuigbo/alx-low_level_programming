#include <stdio.h>

/**
 * main - prints out the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int inc;
	unsigned long n1 = 0, n2 = 1, n3;

	for (inc = 0; inc < 50; inc++)
	{
		if (inc == 49)
			printf("%lu\n", n1);
		else
			printf("%lu, ", n1);

		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}

	return (0);
}
