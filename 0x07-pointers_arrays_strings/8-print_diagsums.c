#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * @a: pointer to use array
 *
 * @size: input of size
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, e, u, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		u = (i * size) + i;
		l += *(a + u);
	}
	for (e = 0; e < size; e++)
	{
		u = (e * size) + (size - 1 - e);
		r += *(a + u);
	}
	printf("%i, %i\n", l, r);
}
