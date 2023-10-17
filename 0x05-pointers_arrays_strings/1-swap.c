#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap two integers.
 * @a: Pointer to the integer to be swapped with 'b'.
 * @b: Pointer to the integer to be swapped with 'a'.
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
