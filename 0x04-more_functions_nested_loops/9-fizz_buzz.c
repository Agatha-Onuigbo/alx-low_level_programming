#include <stdio.h>
#include "main.h"
/**
 * main - fizzbuzz for numebrs from i - 100;
 * Return: 0
 */

int main(void)
{
	char *fizz = "Fizz";
	char *buzz = "Buzz";
	char *fizzbuzz = "FizzBuzz";
	int i = 1;

	while (i < 101)
	{
		if (i < 100)
		{
			if (i % 3 == 0 && i % 5 != 0)
				printf("%s ", fizz);
			else if (i % 5 == 0 && i % 3 != 0)
				printf("%s ", buzz);
			else if (i % 3 == 0 && i % 5 == 0)
				printf("%s ", fizzbuzz);

			else
				printf("%d ", i);
		}
		else
		{
			printf("%s\n", buzz);
		}

		i++;
	}

	return (0);
}
