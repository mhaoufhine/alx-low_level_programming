#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: allocate memory for array
 *
 * @size: size of array element
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int e;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (e = 0; e < (nmemb * size); e++)
		arr[e] = 0;

	return (arr);
}
