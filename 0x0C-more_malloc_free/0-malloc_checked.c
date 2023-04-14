#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - cause normal process terminates with a status value of 98
 *
 * @b: unsigned int for allocated memory
 *
 * Return: pointer to the new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *e;

	e = malloc(b);

	if (e == NULL)
		exit(98);
	return (e);
}
