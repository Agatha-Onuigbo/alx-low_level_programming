#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */

int main(void)
{
	char k[200];
	int num = 0;
	char *key = k;

	srand(time(NULL));

	while (num < 2645)
	{
		int random = rand() % 94 + 33;

		*key = random;
		key = key + 1;
		num += random;
	}

	*key = (2772 - num);
	*(key + 1) = '\n';
	printf("%s", k);
	return (0);
}
