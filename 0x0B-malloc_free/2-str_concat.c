#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string to add to end of first string
 *
 * Return: pointer to newly allocated string concatenation
 */

char *str_concat(char *s1, char *s2)
{
	int i, f, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (f = 0; f < len2; f++, i++)
		result[i] = s2[f];
	result[len] = '\0';

	return (result);
}
