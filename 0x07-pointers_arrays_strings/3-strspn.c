#include "main.h"
#include <stdio.h>

/**
 * _strspn - funnction that get the length of a prefix substring
 *
 * @s: the initial string in main to be scanned
 *
 * @accept: string contains list of characters of bytes that match
 *
 * Return: return the number of bytes count
 */

unsigned int _strspn(char *s, char *accept)
{
	int f;
	int e;
	unsigned int result = 0;

	for (f = 0; s[f] != '\0'; f++)
	{
		for (e = 0; s[e] != '\0'; e++)
		{
			if (s[f] == accept[e])
			{
				result++;
				break;
			}
		}
		if (s[e] == '\0')
			return (result);
	}
	return (result);
}
