#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap the values of two integers using pointers
 *
 * This function takes two integer pointers, a and b, and swaps the values they point to
 *
 * @param a: A pointer to an interger, the value of which will be swapped with 'b'.
 * @param b: A pointer to an interger, the value of which will be swapped with 'a'.
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
