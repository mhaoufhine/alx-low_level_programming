#include "main.h"

/**
 * _memcpy - copies from source to dest values in array
 *
 * @dest: destination to memory area
 *
 * @src: source to copy from
 *
 * @n: function copies
 *
 * Return: Always 0 (success)
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
