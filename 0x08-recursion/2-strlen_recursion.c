#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string
 *
 * @s: String to be meaasured
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int b = 0;

	if (*s)
	{
		b++;
		b += _strlen_recursion(s + 1);

	}
	return (b);
}
