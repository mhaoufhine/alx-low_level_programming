#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: min input of value stored
 *
 * @max: max input of value stored
 *
 * Return: pointer to new arr of ints
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, tem;

	if (min > max)
		return (NULL);

	for (tem = 0; tem < (max - min); tem++)
		;

	arr = malloc(sizeof(int) * (tem + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= tem; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
