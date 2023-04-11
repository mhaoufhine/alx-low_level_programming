#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: char
 *
 * Return: returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *copy;
	int i, tem = 0;

	if (str == NULL)
		return (NULL);

	while (str[tem] != '\0')
		tem++;

	copy = (char *)malloc((sizeof(char) * tem) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < tem; i++)
		copy[i] = str[i];
	copy[tem] = '\0';

	return (copy);
}
