#include "main.h"

/**
 * _strstr - Entry point
 *
 * @haystack: input of longer string to locate
 *
 * @needle: the first occurrence of the substring to locate
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int e = 0, f = 0;

	while (haystack[e])
	{
		while (needle[f] && (haystack[e] == needle[0]))
		{
			if (haystack[e + f] == needle[f])
				f++;
			else
				break;
		}
		if (needle[e])
		{
			e++;
			f = 0;
		}
		else
			return (haystack + e);
	}
	return (0);
}
