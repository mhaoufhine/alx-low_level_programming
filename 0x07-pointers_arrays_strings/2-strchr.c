#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point that locate the character
 *
 * @s: input of string to locate char
 *
 * @c: occurence of the character to find
 *
 * Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
