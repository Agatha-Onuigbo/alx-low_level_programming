#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar,", 47);
	write(2, "2015-10-19\n", 12);
	return (1);
}
