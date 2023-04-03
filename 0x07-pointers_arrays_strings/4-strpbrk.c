#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * @s: input the first string to occur
 *
 * @accept: input one of the bytes
 *
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, e;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (e = 0; accept[e] != '\0'; e++)
		{
			if (s[i] == accept[e])
				return (s + i);
		}
	}

	return (NULL);
}
